#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// AHIR release utilities
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>


// These will wait.

#ifndef AA2C
	#include "vhdlCStubs.h"
#else
	#include "aa_c_model.h"
#endif


typedef struct _TbConfig {

	// if 1, input port 1 will be fed by data else input port 1 will be unused.
	int input_port_1_active;

	// if random dest is set, then input port 1 can send data to either of four ports
	int input_port_1_random_dest_flag;

	// if random_dest_flag is 0, then input port 1 writes only to this destination port provided
	int input_port_1_destination_port;

	int input_port_2_active;
	int input_port_2_random_dest_flag;
	int input_port_2_destination_port;

	int input_port_3_active;
	int input_port_3_random_dest_flag;
	int input_port_3_destination_port;

	int input_port_4_active;
	int input_port_4_random_dest_flag;
	int input_port_4_destination_port;

} TbConfig;
TbConfig tb_config;

int __err_flag__ = 0;

void input_port_core(int port_id)
{
	int packet_length_in_words = rand() % 64;
	uint32_t send_buffer[packet_length_in_words];	

	int i;
	for(i = 0; i < packet_length_in_words; i++)
		send_buffer[i] = i;

	uint8_t seq_id = (port_id == 1) ? 1: (port_id == 2) ? 2: (port_id == 3) ? 3: (port_id == 4) ? 4: 0;
	while(1)
	{
		int dest_port =  -1;
		switch (port_id)
		{
		case 1:
			dest_port = (tb_config.input_port_1_random_dest_flag ? ((rand() % 4)+1): tb_config.input_port_1_destination_port);
			break;
		case 2:
			dest_port = (tb_config.input_port_2_random_dest_flag ? ((rand() % 4)+1): tb_config.input_port_2_destination_port);
			break;
		case 3:
			dest_port = (tb_config.input_port_3_random_dest_flag ? ((rand() % 4)+1): tb_config.input_port_3_destination_port);
			break;
		case 4:
			dest_port = (tb_config.input_port_4_random_dest_flag ? ((rand() % 4)+1): tb_config.input_port_4_destination_port);
			break;
		default:
			break;
		}

		if((dest_port == 1) || (dest_port == 2) || (dest_port == 3) || (dest_port == 4))
		{
			send_buffer[0] = (dest_port << 24) | (packet_length_in_words << 8) | seq_id;
			if(port_id == 1)
				write_uint32_n ("in_data_1", send_buffer, packet_length_in_words);
			if(port_id == 2)
				write_uint32_n ("in_data_2", send_buffer, packet_length_in_words);
			if(port_id == 3)
				write_uint32_n ("in_data_3", send_buffer, packet_length_in_words);
			if(port_id == 4)
				write_uint32_n ("in_data_4", send_buffer, packet_length_in_words);

			// increment by 4
			seq_id += 4;
		}
	}
}

void input_port_1_sender ()
{
	input_port_core(1);
}
DEFINE_THREAD(input_port_1_sender);

void input_port_2_sender ()
{
	input_port_core(2);
}
DEFINE_THREAD(input_port_2_sender);

void input_port_3_sender ()
{
	input_port_core(3);
}
DEFINE_THREAD(input_port_3_sender);

void input_port_4_sender ()
{
	input_port_core(4);
}
DEFINE_THREAD(input_port_4_sender);




void output_port_core(int port_id)
{
	int PCOUNT = 0;
	int err = 0;
	int packet_length_in_words = rand() % 64;
	while(1)
	{
		uint32_t packet[packet_length_in_words];

		if(port_id == 1) read_uint32_n ("out_data_1", packet, packet_length_in_words);
		if(port_id == 2) read_uint32_n ("out_data_2", packet, packet_length_in_words);
		if(port_id == 3) read_uint32_n ("out_data_3", packet, packet_length_in_words);
		if(port_id == 4) read_uint32_n ("out_data_4", packet, packet_length_in_words);

		
		PCOUNT++;

		int dest = (packet[0] >> 24);
		// nahi samaza
		int input_port = ((packet[0] & 0x1) ? 1 : 2);

		// check the destination?
		if(dest != port_id)
		{
			fprintf(stderr,"Error: at port %d, packet number %d from input port %d,"
					" destination mismatch!\n", 	port_id, PCOUNT, input_port);
			err = 1;
		}
		else
		{
			fprintf(stderr,"\nRx[%d] at output port %d from input port %d\n", 
					PCOUNT, port_id, input_port);
		}


		// check integrity of the packet.
		int I; 
		for(I=1; I < packet_length_in_words; I++)
		{
			if (packet[I] != I)
			{
				fprintf(stderr,"\nError: packet[%d]=%d, expected %d.\n",
					I, packet[I], I);
				err = 1;
			}
		}

		if(err)
		{
			__err_flag__ = 1;
			break;
		}
	}

}

void output_port_1_receiver ()
{
	output_port_core(1);
}
DEFINE_THREAD(output_port_1_receiver);

void output_port_2_receiver ()
{
	output_port_core(2);
}
DEFINE_THREAD(output_port_2_receiver);

void output_port_3_receiver ()
{
	output_port_core(3);
}
DEFINE_THREAD(output_port_3_receiver);

void output_port_4_receiver ()
{
	output_port_core(4);
}
DEFINE_THREAD(output_port_4_receiver);




int main(int argc, char* argv[])
{

	if(argc < 3)
	{
		fprintf(stderr,"Usage: %s [trace-file] [test_type] \n trace-file=null for no trace, stdout for stdout\n" "test_type = 1to1/1to2/1toBoth/2to1/2to2/2toBoth/Both2Both\n",
				argv[0]);
		return(1);
	}

	FILE* fp = NULL;
	if(strcmp(argv[1],"stdout") == 0)
	{
		fp = stdout;
	}
	else if(strcmp(argv[1], "null") != 0)
	{
		fp = fopen(argv[1],"w");
		if(fp == NULL)
		{
			fprintf(stderr,"Error: could not open trace file %s\n", argv[1]);
			return(1);
		}
	}

	int __1to1 = (strcmp(argv[2],"1to1") == 0);
	int __1to2 = (strcmp(argv[2],"1to2") == 0);
	int __1to3 = (strcmp(argv[2],"1to3") == 0);
	int __1to4 = (strcmp(argv[2],"1to4") == 0);

	int __Allto1 = (strcmp(argv[2],"Allto1") == 0);
	int __Allto2 = (strcmp(argv[2],"Allto2") == 0);
	int __Allto3 = (strcmp(argv[2],"Allto3") == 0);
	int __Allto4 = (strcmp(argv[2],"Allto4") == 0);

	int __AlltoAll = (strcmp(argv[2],"AlltoAll") == 0);

#ifdef AA2C
	init_pipe_handler();
	start_daemons (fp,0);
#endif
	// test configuration setup.

	tb_config.input_port_1_active = (__1to1 || __1to2 || __1to3 || __1to4 || __Allto1 || __Allto2 || __Allto3 || __Allto4 || __AlltoAll);
	tb_config.input_port_1_random_dest_flag = (__AlltoAll);
	tb_config.input_port_1_destination_port = (__1to1 ? 1 : __1to2 ? 2 : __1to3 ? 3 : __1to4 ? 4 : -1 );

	tb_config.input_port_2_active = (__Allto1 || __Allto2 || __Allto3 || __Allto4 || __AlltoAll);
	tb_config.input_port_2_random_dest_flag = (__AlltoAll);
	tb_config.input_port_2_destination_port = ( -1 );

	tb_config.input_port_3_active = (__Allto1 || __Allto2 || __Allto3 || __Allto4 || __AlltoAll);
	tb_config.input_port_3_random_dest_flag = (__AlltoAll);
	tb_config.input_port_3_destination_port = ( -1 );

	tb_config.input_port_4_active = (__Allto1 || __Allto2 || __Allto3 || __Allto4 || __AlltoAll);
	tb_config.input_port_4_random_dest_flag = (__AlltoAll);
	tb_config.input_port_4_destination_port = ( -1 );

	// start the receivers
	PTHREAD_DECL(output_port_1_receiver);
	PTHREAD_CREATE(output_port_1_receiver);

	PTHREAD_DECL(output_port_2_receiver);
	PTHREAD_CREATE(output_port_2_receiver);

	PTHREAD_DECL(output_port_3_receiver);
	PTHREAD_CREATE(output_port_3_receiver);

	PTHREAD_DECL(output_port_4_receiver);
	PTHREAD_CREATE(output_port_4_receiver);

	// start the senders.
	PTHREAD_DECL(input_port_1_sender);
	PTHREAD_CREATE(input_port_1_sender);

	PTHREAD_DECL(input_port_2_sender);
	PTHREAD_CREATE(input_port_2_sender);
	
	PTHREAD_DECL(input_port_3_sender);
	PTHREAD_CREATE(input_port_3_sender);

	PTHREAD_DECL(input_port_4_sender);
	PTHREAD_CREATE(input_port_4_sender);

	// wait on the two output threads
	PTHREAD_JOIN(output_port_1_receiver);
	PTHREAD_JOIN(output_port_2_receiver);
	PTHREAD_JOIN(output_port_3_receiver);
	PTHREAD_JOIN(output_port_4_receiver);

	if(__err_flag__)
	{
		fprintf(stderr,"\nFAILURE.. there were errors\n");
	}
	return(0);
}

