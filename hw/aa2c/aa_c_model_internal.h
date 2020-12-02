#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _inputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_1_Daemon_branch_block_stmt_64_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_1_Daemon_merge_stmt_66_c_preamble_macro_ uint8_t merge_stmt_66_entry_flag;\
merge_stmt_66_entry_flag = do_while_entry_flag;\
goto merge_stmt_66_run;\
merge_stmt_66_run: ;\

#define _inputPort_1_Daemon_phi_stmt_67_c_macro_ __declare_static_bit_vector(konst_71,16);\
bit_vector_clear(&konst_71);\
__declare_static_bit_vector(type_cast_72,16);\
bit_vector_clear(&type_cast_72);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_71,16);\
bit_vector_clear(&konst_71);\
__declare_static_bit_vector(type_cast_72,16);\
bit_vector_clear(&type_cast_72);\
bit_vector_clear(&konst_71);\
bit_vector_bitcast_to_bit_vector( &(type_cast_72), &(konst_71));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_72));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_73_c_macro_ __declare_static_bit_vector(RPIPE_in_data_1_75,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_75));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_75));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_1_75,32);\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_75));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_75));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_76_c_macro_ __declare_static_bit_vector(konst_78,8);\
bit_vector_clear(&konst_78);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_78,8);\
bit_vector_clear(&konst_78);\
bit_vector_clear(&konst_78);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_78));\
}\
;
;

#define _inputPort_1_Daemon_merge_stmt_66_c_postamble_macro_ merge_stmt_66_entry_flag = 0;

#define _inputPort_1_Daemon_stmt_82_c_macro_ uint32_t _inputPort_1_Daemon_stmt_82_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t%s\n",_inputPort_1_Daemon_stmt_82_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_82_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_1_Daemon_assign_stmt_87_c_macro_ __declare_static_bit_vector(konst_85,16);\
bit_vector_clear(&konst_85);\
__declare_static_bit_vector(EQ_u16_u1_86,1);\
bit_vector_clear(&konst_85);\
bit_vector_equal(0, &(count_down), &(konst_85), &(EQ_u16_u1_86));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_86));\
;

#define _inputPort_1_Daemon_assign_stmt_91_c_macro_ __declare_static_bit_vector(slice_90,8);\
bit_vector_slice(&(input_word), &(slice_90), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_90));\
;

#define _inputPort_1_Daemon_assign_stmt_95_c_macro_ __declare_static_bit_vector(slice_94,16);\
bit_vector_slice(&(input_word), &(slice_94), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_94));\
;

#define _inputPort_1_Daemon_assign_stmt_99_c_macro_ __declare_static_bit_vector(slice_98,8);\
bit_vector_slice(&(input_word), &(slice_98), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_98));\
;

#define _inputPort_1_Daemon_stmt_103_c_macro_ uint32_t _inputPort_1_Daemon_stmt_103_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t%s\n",_inputPort_1_Daemon_stmt_103_c_macro___print_counter,"new_packet_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_103_c_macro___print_counter,"dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_103_c_macro___print_counter,"pkt_length");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_length)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_103_c_macro___print_counter,"seq_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(seq_id)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_1_Daemon_assign_stmt_113_c_macro_ __declare_static_bit_vector(konst_107,16);\
bit_vector_clear(&konst_107);\
konst_107.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_108,16);\
__declare_static_bit_vector(konst_110,16);\
bit_vector_clear(&konst_110);\
konst_110.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_111,16);\
__declare_static_bit_vector(MUX_112,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_107);\
konst_107.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_107), &(SUB_u16_u16_108));\
bit_vector_cast_to_bit_vector(0, &(MUX_112), &(SUB_u16_u16_108));\
}else {bit_vector_clear(&konst_110);\
konst_110.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_110), &(SUB_u16_u16_111));\
bit_vector_cast_to_bit_vector(0, &(MUX_112), &(SUB_u16_u16_111));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_112));\
;

#define _inputPort_1_Daemon_assign_stmt_119_c_macro_ __declare_static_bit_vector(MUX_118,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_118), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_118), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_118));\
;

#define _inputPort_1_Daemon_assign_stmt_124_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_123,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_123));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_123));\
;

#define _inputPort_1_Daemon_assign_stmt_129_c_macro_ __declare_static_bit_vector(konst_127,8);\
bit_vector_clear(&konst_127);\
konst_127.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_128,1);\
bit_vector_clear(&konst_127);\
konst_127.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_127), &(EQ_u8_u1_128));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_128));\
;

#define _inputPort_1_Daemon_assign_stmt_133_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_1_1",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_138_c_macro_ __declare_static_bit_vector(konst_136,8);\
bit_vector_clear(&konst_136);\
konst_136.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_137,1);\
bit_vector_clear(&konst_136);\
konst_136.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_136), &(EQ_u8_u1_137));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_137));\
;

#define _inputPort_1_Daemon_assign_stmt_142_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_1_2",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_147_c_macro_ __declare_static_bit_vector(konst_145,8);\
bit_vector_clear(&konst_145);\
konst_145.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_146,1);\
bit_vector_clear(&konst_145);\
konst_145.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_145), &(EQ_u8_u1_146));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_146));\
;

#define _inputPort_1_Daemon_assign_stmt_151_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_1_3",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_156_c_macro_ __declare_static_bit_vector(konst_154,8);\
bit_vector_clear(&konst_154);\
konst_154.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_155,1);\
bit_vector_clear(&konst_154);\
konst_154.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_154), &(EQ_u8_u1_155));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_155));\
;

#define _inputPort_1_Daemon_assign_stmt_160_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_1_4",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_stmt_170_c_macro_ uint32_t _inputPort_1_Daemon_stmt_170_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t%s\n",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_170_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_1_Daemon_branch_block_stmt_64_c_export_apply_macro_ ;

#define _inputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_2_Daemon_branch_block_stmt_176_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_2_Daemon_merge_stmt_178_c_preamble_macro_ uint8_t merge_stmt_178_entry_flag;\
merge_stmt_178_entry_flag = do_while_entry_flag;\
goto merge_stmt_178_run;\
merge_stmt_178_run: ;\

#define _inputPort_2_Daemon_phi_stmt_179_c_macro_ __declare_static_bit_vector(konst_181,16);\
bit_vector_clear(&konst_181);\
__declare_static_bit_vector(type_cast_182,16);\
bit_vector_clear(&type_cast_182);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_181,16);\
bit_vector_clear(&konst_181);\
__declare_static_bit_vector(type_cast_182,16);\
bit_vector_clear(&type_cast_182);\
bit_vector_clear(&konst_181);\
bit_vector_bitcast_to_bit_vector( &(type_cast_182), &(konst_181));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_182));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_184_c_macro_ __declare_static_bit_vector(RPIPE_in_data_2_186,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_186));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_186));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_2_186,32);\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_186));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_186));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_187_c_macro_ __declare_static_bit_vector(konst_189,8);\
bit_vector_clear(&konst_189);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_189,8);\
bit_vector_clear(&konst_189);\
bit_vector_clear(&konst_189);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_189));\
}\
;
;

#define _inputPort_2_Daemon_merge_stmt_178_c_postamble_macro_ merge_stmt_178_entry_flag = 0;

#define _inputPort_2_Daemon_stmt_193_c_macro_ uint32_t _inputPort_2_Daemon_stmt_193_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t%s\n",_inputPort_2_Daemon_stmt_193_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_193_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_2_Daemon_assign_stmt_198_c_macro_ __declare_static_bit_vector(konst_196,16);\
bit_vector_clear(&konst_196);\
__declare_static_bit_vector(EQ_u16_u1_197,1);\
bit_vector_clear(&konst_196);\
bit_vector_equal(0, &(count_down), &(konst_196), &(EQ_u16_u1_197));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_197));\
;

#define _inputPort_2_Daemon_assign_stmt_202_c_macro_ __declare_static_bit_vector(slice_201,8);\
bit_vector_slice(&(input_word), &(slice_201), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_201));\
;

#define _inputPort_2_Daemon_assign_stmt_206_c_macro_ __declare_static_bit_vector(slice_205,16);\
bit_vector_slice(&(input_word), &(slice_205), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_205));\
;

#define _inputPort_2_Daemon_assign_stmt_210_c_macro_ __declare_static_bit_vector(slice_209,8);\
bit_vector_slice(&(input_word), &(slice_209), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_209));\
;

#define _inputPort_2_Daemon_stmt_214_c_macro_ uint32_t _inputPort_2_Daemon_stmt_214_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t%s\n",_inputPort_2_Daemon_stmt_214_c_macro___print_counter,"new_packet_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_214_c_macro___print_counter,"dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_214_c_macro___print_counter,"pkt_length");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_length)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_214_c_macro___print_counter,"seq_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(seq_id)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_2_Daemon_assign_stmt_224_c_macro_ __declare_static_bit_vector(konst_218,16);\
bit_vector_clear(&konst_218);\
konst_218.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_219,16);\
__declare_static_bit_vector(konst_221,16);\
bit_vector_clear(&konst_221);\
konst_221.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_222,16);\
__declare_static_bit_vector(MUX_223,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_218);\
konst_218.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_218), &(SUB_u16_u16_219));\
bit_vector_cast_to_bit_vector(0, &(MUX_223), &(SUB_u16_u16_219));\
}else {bit_vector_clear(&konst_221);\
konst_221.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_221), &(SUB_u16_u16_222));\
bit_vector_cast_to_bit_vector(0, &(MUX_223), &(SUB_u16_u16_222));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_223));\
;

#define _inputPort_2_Daemon_assign_stmt_230_c_macro_ __declare_static_bit_vector(MUX_229,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_229), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_229), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_229));\
;

#define _inputPort_2_Daemon_assign_stmt_235_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_234,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_234));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_234));\
;

#define _inputPort_2_Daemon_assign_stmt_240_c_macro_ __declare_static_bit_vector(konst_238,8);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_239,1);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_238), &(EQ_u8_u1_239));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_239));\
;

#define _inputPort_2_Daemon_assign_stmt_244_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_2_1",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_249_c_macro_ __declare_static_bit_vector(konst_247,8);\
bit_vector_clear(&konst_247);\
konst_247.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_248,1);\
bit_vector_clear(&konst_247);\
konst_247.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_247), &(EQ_u8_u1_248));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_248));\
;

#define _inputPort_2_Daemon_assign_stmt_253_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_2_2",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_258_c_macro_ __declare_static_bit_vector(konst_256,8);\
bit_vector_clear(&konst_256);\
konst_256.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_257,1);\
bit_vector_clear(&konst_256);\
konst_256.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_256), &(EQ_u8_u1_257));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_257));\
;

#define _inputPort_2_Daemon_assign_stmt_262_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_2_3",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_267_c_macro_ __declare_static_bit_vector(konst_265,8);\
bit_vector_clear(&konst_265);\
konst_265.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_266,1);\
bit_vector_clear(&konst_265);\
konst_265.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_265), &(EQ_u8_u1_266));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_266));\
;

#define _inputPort_2_Daemon_assign_stmt_271_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_2_4",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_stmt_281_c_macro_ uint32_t _inputPort_2_Daemon_stmt_281_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t%s\n",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_281_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_2_Daemon_branch_block_stmt_176_c_export_apply_macro_ ;

#define _inputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_3_Daemon_branch_block_stmt_287_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_3_Daemon_merge_stmt_289_c_preamble_macro_ uint8_t merge_stmt_289_entry_flag;\
merge_stmt_289_entry_flag = do_while_entry_flag;\
goto merge_stmt_289_run;\
merge_stmt_289_run: ;\

#define _inputPort_3_Daemon_phi_stmt_290_c_macro_ __declare_static_bit_vector(konst_292,16);\
bit_vector_clear(&konst_292);\
__declare_static_bit_vector(type_cast_293,16);\
bit_vector_clear(&type_cast_293);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_292,16);\
bit_vector_clear(&konst_292);\
__declare_static_bit_vector(type_cast_293,16);\
bit_vector_clear(&type_cast_293);\
bit_vector_clear(&konst_292);\
bit_vector_bitcast_to_bit_vector( &(type_cast_293), &(konst_292));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_293));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_295_c_macro_ __declare_static_bit_vector(RPIPE_in_data_3_297,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_297));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_297));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_3_297,32);\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_297));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_297));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_298_c_macro_ __declare_static_bit_vector(konst_300,8);\
bit_vector_clear(&konst_300);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_300,8);\
bit_vector_clear(&konst_300);\
bit_vector_clear(&konst_300);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_300));\
}\
;
;

#define _inputPort_3_Daemon_merge_stmt_289_c_postamble_macro_ merge_stmt_289_entry_flag = 0;

#define _inputPort_3_Daemon_stmt_304_c_macro_ uint32_t _inputPort_3_Daemon_stmt_304_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t%s\n",_inputPort_3_Daemon_stmt_304_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_304_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_3_Daemon_assign_stmt_309_c_macro_ __declare_static_bit_vector(konst_307,16);\
bit_vector_clear(&konst_307);\
__declare_static_bit_vector(EQ_u16_u1_308,1);\
bit_vector_clear(&konst_307);\
bit_vector_equal(0, &(count_down), &(konst_307), &(EQ_u16_u1_308));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_308));\
;

#define _inputPort_3_Daemon_assign_stmt_313_c_macro_ __declare_static_bit_vector(slice_312,8);\
bit_vector_slice(&(input_word), &(slice_312), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_312));\
;

#define _inputPort_3_Daemon_assign_stmt_317_c_macro_ __declare_static_bit_vector(slice_316,16);\
bit_vector_slice(&(input_word), &(slice_316), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_316));\
;

#define _inputPort_3_Daemon_assign_stmt_321_c_macro_ __declare_static_bit_vector(slice_320,8);\
bit_vector_slice(&(input_word), &(slice_320), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_320));\
;

#define _inputPort_3_Daemon_stmt_325_c_macro_ uint32_t _inputPort_3_Daemon_stmt_325_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t%s\n",_inputPort_3_Daemon_stmt_325_c_macro___print_counter,"new_packet_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_325_c_macro___print_counter,"dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_325_c_macro___print_counter,"pkt_length");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_length)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_325_c_macro___print_counter,"seq_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(seq_id)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_3_Daemon_assign_stmt_335_c_macro_ __declare_static_bit_vector(konst_329,16);\
bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_330,16);\
__declare_static_bit_vector(konst_332,16);\
bit_vector_clear(&konst_332);\
konst_332.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_333,16);\
__declare_static_bit_vector(MUX_334,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_329), &(SUB_u16_u16_330));\
bit_vector_cast_to_bit_vector(0, &(MUX_334), &(SUB_u16_u16_330));\
}else {bit_vector_clear(&konst_332);\
konst_332.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_332), &(SUB_u16_u16_333));\
bit_vector_cast_to_bit_vector(0, &(MUX_334), &(SUB_u16_u16_333));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_334));\
;

#define _inputPort_3_Daemon_assign_stmt_341_c_macro_ __declare_static_bit_vector(MUX_340,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_340), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_340), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_340));\
;

#define _inputPort_3_Daemon_assign_stmt_346_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_345,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_345));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_345));\
;

#define _inputPort_3_Daemon_assign_stmt_351_c_macro_ __declare_static_bit_vector(konst_349,8);\
bit_vector_clear(&konst_349);\
konst_349.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_350,1);\
bit_vector_clear(&konst_349);\
konst_349.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_349), &(EQ_u8_u1_350));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_350));\
;

#define _inputPort_3_Daemon_assign_stmt_355_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_3_1",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_360_c_macro_ __declare_static_bit_vector(konst_358,8);\
bit_vector_clear(&konst_358);\
konst_358.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_359,1);\
bit_vector_clear(&konst_358);\
konst_358.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_358), &(EQ_u8_u1_359));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_359));\
;

#define _inputPort_3_Daemon_assign_stmt_364_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_3_2",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_369_c_macro_ __declare_static_bit_vector(konst_367,8);\
bit_vector_clear(&konst_367);\
konst_367.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_368,1);\
bit_vector_clear(&konst_367);\
konst_367.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_367), &(EQ_u8_u1_368));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_368));\
;

#define _inputPort_3_Daemon_assign_stmt_373_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_3_3",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_378_c_macro_ __declare_static_bit_vector(konst_376,8);\
bit_vector_clear(&konst_376);\
konst_376.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_377,1);\
bit_vector_clear(&konst_376);\
konst_376.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_376), &(EQ_u8_u1_377));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_377));\
;

#define _inputPort_3_Daemon_assign_stmt_382_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_3_4",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_stmt_392_c_macro_ uint32_t _inputPort_3_Daemon_stmt_392_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t%s\n",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_392_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_3_Daemon_branch_block_stmt_287_c_export_apply_macro_ ;

#define _inputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_4_Daemon_branch_block_stmt_398_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_4_Daemon_merge_stmt_400_c_preamble_macro_ uint8_t merge_stmt_400_entry_flag;\
merge_stmt_400_entry_flag = do_while_entry_flag;\
goto merge_stmt_400_run;\
merge_stmt_400_run: ;\

#define _inputPort_4_Daemon_phi_stmt_401_c_macro_ __declare_static_bit_vector(konst_403,16);\
bit_vector_clear(&konst_403);\
__declare_static_bit_vector(type_cast_404,16);\
bit_vector_clear(&type_cast_404);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_403,16);\
bit_vector_clear(&konst_403);\
__declare_static_bit_vector(type_cast_404,16);\
bit_vector_clear(&type_cast_404);\
bit_vector_clear(&konst_403);\
bit_vector_bitcast_to_bit_vector( &(type_cast_404), &(konst_403));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_404));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_406_c_macro_ __declare_static_bit_vector(RPIPE_in_data_4_408,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_408));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_408));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_4_408,32);\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_408));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_408));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_409_c_macro_ __declare_static_bit_vector(konst_411,8);\
bit_vector_clear(&konst_411);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_411,8);\
bit_vector_clear(&konst_411);\
bit_vector_clear(&konst_411);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_411));\
}\
;
;

#define _inputPort_4_Daemon_merge_stmt_400_c_postamble_macro_ merge_stmt_400_entry_flag = 0;

#define _inputPort_4_Daemon_stmt_415_c_macro_ uint32_t _inputPort_4_Daemon_stmt_415_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t%s\n",_inputPort_4_Daemon_stmt_415_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_415_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_4_Daemon_assign_stmt_420_c_macro_ __declare_static_bit_vector(konst_418,16);\
bit_vector_clear(&konst_418);\
__declare_static_bit_vector(EQ_u16_u1_419,1);\
bit_vector_clear(&konst_418);\
bit_vector_equal(0, &(count_down), &(konst_418), &(EQ_u16_u1_419));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_419));\
;

#define _inputPort_4_Daemon_assign_stmt_424_c_macro_ __declare_static_bit_vector(slice_423,8);\
bit_vector_slice(&(input_word), &(slice_423), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_423));\
;

#define _inputPort_4_Daemon_assign_stmt_428_c_macro_ __declare_static_bit_vector(slice_427,16);\
bit_vector_slice(&(input_word), &(slice_427), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_427));\
;

#define _inputPort_4_Daemon_assign_stmt_432_c_macro_ __declare_static_bit_vector(slice_431,8);\
bit_vector_slice(&(input_word), &(slice_431), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_431));\
;

#define _inputPort_4_Daemon_stmt_436_c_macro_ uint32_t _inputPort_4_Daemon_stmt_436_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t%s\n",_inputPort_4_Daemon_stmt_436_c_macro___print_counter,"new_packet_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_436_c_macro___print_counter,"dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_436_c_macro___print_counter,"pkt_length");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_length)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_436_c_macro___print_counter,"seq_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(seq_id)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_4_Daemon_assign_stmt_446_c_macro_ __declare_static_bit_vector(konst_440,16);\
bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_441,16);\
__declare_static_bit_vector(konst_443,16);\
bit_vector_clear(&konst_443);\
konst_443.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_444,16);\
__declare_static_bit_vector(MUX_445,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_440), &(SUB_u16_u16_441));\
bit_vector_cast_to_bit_vector(0, &(MUX_445), &(SUB_u16_u16_441));\
}else {bit_vector_clear(&konst_443);\
konst_443.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_443), &(SUB_u16_u16_444));\
bit_vector_cast_to_bit_vector(0, &(MUX_445), &(SUB_u16_u16_444));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_445));\
;

#define _inputPort_4_Daemon_assign_stmt_452_c_macro_ __declare_static_bit_vector(MUX_451,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_451), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_451), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_451));\
;

#define _inputPort_4_Daemon_assign_stmt_457_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_456,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_456));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_456));\
;

#define _inputPort_4_Daemon_assign_stmt_462_c_macro_ __declare_static_bit_vector(konst_460,8);\
bit_vector_clear(&konst_460);\
konst_460.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_461,1);\
bit_vector_clear(&konst_460);\
konst_460.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_460), &(EQ_u8_u1_461));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_461));\
;

#define _inputPort_4_Daemon_assign_stmt_466_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_4_1",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_471_c_macro_ __declare_static_bit_vector(konst_469,8);\
bit_vector_clear(&konst_469);\
konst_469.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_470,1);\
bit_vector_clear(&konst_469);\
konst_469.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_469), &(EQ_u8_u1_470));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_470));\
;

#define _inputPort_4_Daemon_assign_stmt_475_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_4_2",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_480_c_macro_ __declare_static_bit_vector(konst_478,8);\
bit_vector_clear(&konst_478);\
konst_478.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_479,1);\
bit_vector_clear(&konst_478);\
konst_478.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_478), &(EQ_u8_u1_479));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_479));\
;

#define _inputPort_4_Daemon_assign_stmt_484_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_4_3",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_489_c_macro_ __declare_static_bit_vector(konst_487,8);\
bit_vector_clear(&konst_487);\
konst_487.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_488,1);\
bit_vector_clear(&konst_487);\
konst_487.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_487), &(EQ_u8_u1_488));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_488));\
;

#define _inputPort_4_Daemon_assign_stmt_493_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_4_4",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_stmt_503_c_macro_ uint32_t _inputPort_4_Daemon_stmt_503_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t%s\n",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_503_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_4_Daemon_branch_block_stmt_398_c_export_apply_macro_ ;

#define _inputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_1_Daemon_branch_block_stmt_685_c_export_decl_macro_ __declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_queue,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_queue,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(new_packet_length,16);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_1_Daemon_merge_stmt_687_c_preamble_macro_ uint8_t merge_stmt_687_entry_flag;\
merge_stmt_687_entry_flag = do_while_entry_flag;\
goto merge_stmt_687_run;\
merge_stmt_687_run: ;\

#define _outputPort_1_Daemon_phi_stmt_688_c_macro_ __declare_static_bit_vector(konst_690,16);\
bit_vector_clear(&konst_690);\
__declare_static_bit_vector(type_cast_691,16);\
bit_vector_clear(&type_cast_691);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
__declare_static_bit_vector(konst_690,16);\
bit_vector_clear(&konst_690);\
__declare_static_bit_vector(type_cast_691,16);\
bit_vector_clear(&type_cast_691);\
bit_vector_clear(&konst_690);\
bit_vector_bitcast_to_bit_vector( &(type_cast_691), &(konst_690));\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(type_cast_691));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_693_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_697,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_697));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_697));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_698_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_702,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_702));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_702));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_703_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_707,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_707));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_707));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_708_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_712,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_712));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_712));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_713_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_717_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(next_priority_queue));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(ONE_3));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_687_c_postamble_macro_ merge_stmt_687_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_726_c_macro_ __declare_static_bit_vector(konst_724,33);\
bit_vector_clear(&konst_724);\
konst_724.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_725,1);\
bit_vector_clear(&konst_724);\
konst_724.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_724), &(BITSEL_u33_u1_725));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_725));\
;

#define _outputPort_1_Daemon_assign_stmt_731_c_macro_ __declare_static_bit_vector(konst_729,33);\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_730,1);\
bit_vector_clear(&konst_729);\
konst_729.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_729), &(BITSEL_u33_u1_730));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_730));\
;

#define _outputPort_1_Daemon_assign_stmt_736_c_macro_ __declare_static_bit_vector(konst_734,33);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_735,1);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_734), &(BITSEL_u33_u1_735));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_735));\
;

#define _outputPort_1_Daemon_assign_stmt_741_c_macro_ __declare_static_bit_vector(konst_739,33);\
bit_vector_clear(&konst_739);\
konst_739.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_740,1);\
bit_vector_clear(&konst_739);\
konst_739.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_739), &(BITSEL_u33_u1_740));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_740));\
;

#define _outputPort_1_Daemon_stmt_753_c_macro_ uint32_t _outputPort_1_Daemon_stmt_753_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_753_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_1_Daemon_assign_stmt_782_c_macro_ __declare_static_bit_vector(konst_756,3);\
bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_757,1);\
__declare_static_bit_vector(konst_759,1);\
bit_vector_clear(&konst_759);\
__declare_static_bit_vector(MUX_760,1);\
__declare_static_bit_vector(konst_762,3);\
bit_vector_clear(&konst_762);\
konst_762.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_763,1);\
__declare_static_bit_vector(konst_765,1);\
bit_vector_clear(&konst_765);\
__declare_static_bit_vector(MUX_766,1);\
__declare_static_bit_vector(OR_u1_u1_767,1);\
__declare_static_bit_vector(konst_769,3);\
bit_vector_clear(&konst_769);\
konst_769.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_770,1);\
__declare_static_bit_vector(konst_772,1);\
bit_vector_clear(&konst_772);\
__declare_static_bit_vector(MUX_773,1);\
__declare_static_bit_vector(konst_775,3);\
bit_vector_clear(&konst_775);\
konst_775.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_776,1);\
__declare_static_bit_vector(konst_778,1);\
bit_vector_clear(&konst_778);\
__declare_static_bit_vector(MUX_779,1);\
__declare_static_bit_vector(OR_u1_u1_780,1);\
__declare_static_bit_vector(OR_u1_u1_781,1);\
bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_756), &(EQ_u3_u1_757));\
if (has_undefined_bit(&EQ_u3_u1_757)) {fprintf(stderr, "Error: variable EQ_u3_u1_757 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_757));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_757)){bit_vector_cast_to_bit_vector(0, &(MUX_760), &(p1_valid));\
}else {bit_vector_clear(&konst_759);\
bit_vector_cast_to_bit_vector(0, &(MUX_760), &(konst_759));\
}bit_vector_clear(&konst_762);\
konst_762.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_762), &(EQ_u3_u1_763));\
if (has_undefined_bit(&EQ_u3_u1_763)) {fprintf(stderr, "Error: variable EQ_u3_u1_763 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_763));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_763)){bit_vector_cast_to_bit_vector(0, &(MUX_766), &(p2_valid));\
}else {bit_vector_clear(&konst_765);\
bit_vector_cast_to_bit_vector(0, &(MUX_766), &(konst_765));\
}bit_vector_or(&(MUX_760), &(MUX_766), &(OR_u1_u1_767));\
bit_vector_clear(&konst_769);\
konst_769.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_769), &(EQ_u3_u1_770));\
if (has_undefined_bit(&EQ_u3_u1_770)) {fprintf(stderr, "Error: variable EQ_u3_u1_770 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_770));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_770)){bit_vector_cast_to_bit_vector(0, &(MUX_773), &(p3_valid));\
}else {bit_vector_clear(&konst_772);\
bit_vector_cast_to_bit_vector(0, &(MUX_773), &(konst_772));\
}bit_vector_clear(&konst_775);\
konst_775.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_775), &(EQ_u3_u1_776));\
if (has_undefined_bit(&EQ_u3_u1_776)) {fprintf(stderr, "Error: variable EQ_u3_u1_776 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_776));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_776)){bit_vector_cast_to_bit_vector(0, &(MUX_779), &(p4_valid));\
}else {bit_vector_clear(&konst_778);\
bit_vector_cast_to_bit_vector(0, &(MUX_779), &(konst_778));\
}bit_vector_or(&(MUX_773), &(MUX_779), &(OR_u1_u1_780));\
bit_vector_or(&(OR_u1_u1_767), &(OR_u1_u1_780), &(OR_u1_u1_781));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_781));\
;

#define _outputPort_1_Daemon_call_stmt_792_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_queue),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_queue));\
;

#define _outputPort_1_Daemon_assign_stmt_801_c_macro_ __declare_static_bit_vector(konst_795,3);\
bit_vector_clear(&konst_795);\
__declare_static_bit_vector(NEQ_u3_u1_796,1);\
__declare_static_bit_vector(konst_798,16);\
bit_vector_clear(&konst_798);\
__declare_static_bit_vector(EQ_u16_u1_799,1);\
__declare_static_bit_vector(AND_u1_u1_800,1);\
bit_vector_clear(&konst_795);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_795), &NEQ_u3_u1_796);\
bit_vector_clear(&konst_798);\
bit_vector_equal(0, &(down_counter), &(konst_798), &(EQ_u16_u1_799));\
bit_vector_and(&(NEQ_u3_u1_796), &(EQ_u16_u1_799), &(AND_u1_u1_800));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_800));\
;

#define _outputPort_1_Daemon_assign_stmt_834_c_macro_ __declare_static_bit_vector(konst_804,3);\
bit_vector_clear(&konst_804);\
konst_804.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_805,1);\
__declare_static_bit_vector(slice_807,16);\
__declare_static_bit_vector(konst_808,16);\
bit_vector_clear(&konst_808);\
__declare_static_bit_vector(MUX_809,16);\
__declare_static_bit_vector(konst_811,3);\
bit_vector_clear(&konst_811);\
konst_811.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_812,1);\
__declare_static_bit_vector(slice_814,16);\
__declare_static_bit_vector(konst_815,16);\
bit_vector_clear(&konst_815);\
__declare_static_bit_vector(MUX_816,16);\
__declare_static_bit_vector(OR_u16_u16_817,16);\
__declare_static_bit_vector(konst_819,3);\
bit_vector_clear(&konst_819);\
konst_819.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_820,1);\
__declare_static_bit_vector(slice_822,16);\
__declare_static_bit_vector(konst_823,16);\
bit_vector_clear(&konst_823);\
__declare_static_bit_vector(MUX_824,16);\
__declare_static_bit_vector(konst_826,3);\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_827,1);\
__declare_static_bit_vector(slice_829,16);\
__declare_static_bit_vector(konst_830,16);\
bit_vector_clear(&konst_830);\
__declare_static_bit_vector(MUX_831,16);\
__declare_static_bit_vector(OR_u16_u16_832,16);\
__declare_static_bit_vector(OR_u16_u16_833,16);\
bit_vector_clear(&konst_804);\
konst_804.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_804), &(EQ_u3_u1_805));\
if (has_undefined_bit(&EQ_u3_u1_805)) {fprintf(stderr, "Error: variable EQ_u3_u1_805 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_805));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_805)){bit_vector_slice(&(pkt_1_e_word), &(slice_807), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_809), &(slice_807));\
}else {bit_vector_clear(&konst_808);\
bit_vector_cast_to_bit_vector(0, &(MUX_809), &(konst_808));\
}bit_vector_clear(&konst_811);\
konst_811.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_811), &(EQ_u3_u1_812));\
if (has_undefined_bit(&EQ_u3_u1_812)) {fprintf(stderr, "Error: variable EQ_u3_u1_812 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_812));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_812)){bit_vector_slice(&(pkt_2_e_word), &(slice_814), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_816), &(slice_814));\
}else {bit_vector_clear(&konst_815);\
bit_vector_cast_to_bit_vector(0, &(MUX_816), &(konst_815));\
}bit_vector_or(&(MUX_809), &(MUX_816), &(OR_u16_u16_817));\
bit_vector_clear(&konst_819);\
konst_819.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_819), &(EQ_u3_u1_820));\
if (has_undefined_bit(&EQ_u3_u1_820)) {fprintf(stderr, "Error: variable EQ_u3_u1_820 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_820));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_820)){bit_vector_slice(&(pkt_3_e_word), &(slice_822), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_824), &(slice_822));\
}else {bit_vector_clear(&konst_823);\
bit_vector_cast_to_bit_vector(0, &(MUX_824), &(konst_823));\
}bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_826), &(EQ_u3_u1_827));\
if (has_undefined_bit(&EQ_u3_u1_827)) {fprintf(stderr, "Error: variable EQ_u3_u1_827 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_827));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_827)){bit_vector_slice(&(pkt_4_e_word), &(slice_829), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_831), &(slice_829));\
}else {bit_vector_clear(&konst_830);\
bit_vector_cast_to_bit_vector(0, &(MUX_831), &(konst_830));\
}bit_vector_or(&(MUX_824), &(MUX_831), &(OR_u16_u16_832));\
bit_vector_or(&(OR_u16_u16_817), &(OR_u16_u16_832), &(OR_u16_u16_833));\
bit_vector_cast_to_bit_vector(0, &(new_packet_length), &(OR_u16_u16_833));\
;

#define _outputPort_1_Daemon_assign_stmt_847_c_macro_ __declare_static_bit_vector(konst_838,16);\
bit_vector_clear(&konst_838);\
konst_838.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_839,16);\
__declare_static_bit_vector(konst_842,16);\
bit_vector_clear(&konst_842);\
konst_842.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_843,16);\
__declare_static_bit_vector(MUX_845,16);\
__declare_static_bit_vector(MUX_846,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_838);\
konst_838.val.byte_array[0] = 1;\
bit_vector_minus( &(new_packet_length), &(konst_838), &(SUB_u16_u16_839));\
bit_vector_cast_to_bit_vector(0, &(MUX_846), &(SUB_u16_u16_839));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_842);\
konst_842.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_842), &(SUB_u16_u16_843));\
bit_vector_cast_to_bit_vector(0, &(MUX_845), &(SUB_u16_u16_843));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_845), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_846), &(MUX_845));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_846));\
;

#define _outputPort_1_Daemon_assign_stmt_855_c_macro_ __declare_static_bit_vector(NOT_u1_u1_850,1);\
__declare_static_bit_vector(konst_852,3);\
bit_vector_clear(&konst_852);\
konst_852.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_853,1);\
__declare_static_bit_vector(OR_u1_u1_854,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_850));\
bit_vector_clear(&konst_852);\
konst_852.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_852), &(EQ_u3_u1_853));\
bit_vector_or(&(NOT_u1_u1_850), &(EQ_u3_u1_853), &(OR_u1_u1_854));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_854));\
;

#define _outputPort_1_Daemon_assign_stmt_863_c_macro_ __declare_static_bit_vector(NOT_u1_u1_858,1);\
__declare_static_bit_vector(konst_860,3);\
bit_vector_clear(&konst_860);\
konst_860.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_861,1);\
__declare_static_bit_vector(OR_u1_u1_862,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_858));\
bit_vector_clear(&konst_860);\
konst_860.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_860), &(EQ_u3_u1_861));\
bit_vector_or(&(NOT_u1_u1_858), &(EQ_u3_u1_861), &(OR_u1_u1_862));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_862));\
;

#define _outputPort_1_Daemon_assign_stmt_871_c_macro_ __declare_static_bit_vector(NOT_u1_u1_866,1);\
__declare_static_bit_vector(konst_868,3);\
bit_vector_clear(&konst_868);\
konst_868.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_869,1);\
__declare_static_bit_vector(OR_u1_u1_870,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_866));\
bit_vector_clear(&konst_868);\
konst_868.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_868), &(EQ_u3_u1_869));\
bit_vector_or(&(NOT_u1_u1_866), &(EQ_u3_u1_869), &(OR_u1_u1_870));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_870));\
;

#define _outputPort_1_Daemon_assign_stmt_879_c_macro_ __declare_static_bit_vector(NOT_u1_u1_874,1);\
__declare_static_bit_vector(konst_876,3);\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_877,1);\
__declare_static_bit_vector(OR_u1_u1_878,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_874));\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_876), &(EQ_u3_u1_877));\
bit_vector_or(&(NOT_u1_u1_874), &(EQ_u3_u1_877), &(OR_u1_u1_878));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_878));\
;

#define _outputPort_1_Daemon_assign_stmt_912_c_macro_ __declare_static_bit_vector(konst_882,3);\
bit_vector_clear(&konst_882);\
konst_882.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_883,1);\
__declare_static_bit_vector(slice_885,32);\
__declare_static_bit_vector(konst_886,32);\
bit_vector_clear(&konst_886);\
__declare_static_bit_vector(MUX_887,32);\
__declare_static_bit_vector(konst_889,3);\
bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_890,1);\
__declare_static_bit_vector(slice_892,32);\
__declare_static_bit_vector(konst_893,32);\
bit_vector_clear(&konst_893);\
__declare_static_bit_vector(MUX_894,32);\
__declare_static_bit_vector(OR_u32_u32_895,32);\
__declare_static_bit_vector(konst_897,3);\
bit_vector_clear(&konst_897);\
konst_897.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_898,1);\
__declare_static_bit_vector(slice_900,32);\
__declare_static_bit_vector(konst_901,32);\
bit_vector_clear(&konst_901);\
__declare_static_bit_vector(MUX_902,32);\
__declare_static_bit_vector(konst_904,3);\
bit_vector_clear(&konst_904);\
konst_904.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_905,1);\
__declare_static_bit_vector(slice_907,32);\
__declare_static_bit_vector(konst_908,32);\
bit_vector_clear(&konst_908);\
__declare_static_bit_vector(MUX_909,32);\
__declare_static_bit_vector(OR_u32_u32_910,32);\
__declare_static_bit_vector(OR_u32_u32_911,32);\
bit_vector_clear(&konst_882);\
konst_882.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_882), &(EQ_u3_u1_883));\
if (has_undefined_bit(&EQ_u3_u1_883)) {fprintf(stderr, "Error: variable EQ_u3_u1_883 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_883));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_883)){bit_vector_slice(&(pkt_1_e_word), &(slice_885), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_887), &(slice_885));\
}else {bit_vector_clear(&konst_886);\
bit_vector_cast_to_bit_vector(0, &(MUX_887), &(konst_886));\
}bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_889), &(EQ_u3_u1_890));\
if (has_undefined_bit(&EQ_u3_u1_890)) {fprintf(stderr, "Error: variable EQ_u3_u1_890 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_890));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_890)){bit_vector_slice(&(pkt_2_e_word), &(slice_892), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_894), &(slice_892));\
}else {bit_vector_clear(&konst_893);\
bit_vector_cast_to_bit_vector(0, &(MUX_894), &(konst_893));\
}bit_vector_or(&(MUX_887), &(MUX_894), &(OR_u32_u32_895));\
bit_vector_clear(&konst_897);\
konst_897.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_897), &(EQ_u3_u1_898));\
if (has_undefined_bit(&EQ_u3_u1_898)) {fprintf(stderr, "Error: variable EQ_u3_u1_898 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_898));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_898)){bit_vector_slice(&(pkt_3_e_word), &(slice_900), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_902), &(slice_900));\
}else {bit_vector_clear(&konst_901);\
bit_vector_cast_to_bit_vector(0, &(MUX_902), &(konst_901));\
}bit_vector_clear(&konst_904);\
konst_904.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_904), &(EQ_u3_u1_905));\
if (has_undefined_bit(&EQ_u3_u1_905)) {fprintf(stderr, "Error: variable EQ_u3_u1_905 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_905));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_905)){bit_vector_slice(&(pkt_4_e_word), &(slice_907), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_909), &(slice_907));\
}else {bit_vector_clear(&konst_908);\
bit_vector_cast_to_bit_vector(0, &(MUX_909), &(konst_908));\
}bit_vector_or(&(MUX_902), &(MUX_909), &(OR_u32_u32_910));\
bit_vector_or(&(OR_u32_u32_895), &(OR_u32_u32_910), &(OR_u32_u32_911));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_911));\
;

#define _outputPort_1_Daemon_assign_stmt_941_c_macro_ __declare_static_bit_vector(konst_915,3);\
bit_vector_clear(&konst_915);\
konst_915.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_916,1);\
__declare_static_bit_vector(konst_918,1);\
bit_vector_clear(&konst_918);\
__declare_static_bit_vector(MUX_919,1);\
__declare_static_bit_vector(konst_921,3);\
bit_vector_clear(&konst_921);\
konst_921.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_922,1);\
__declare_static_bit_vector(konst_924,1);\
bit_vector_clear(&konst_924);\
__declare_static_bit_vector(MUX_925,1);\
__declare_static_bit_vector(OR_u1_u1_926,1);\
__declare_static_bit_vector(konst_928,3);\
bit_vector_clear(&konst_928);\
konst_928.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_929,1);\
__declare_static_bit_vector(konst_931,1);\
bit_vector_clear(&konst_931);\
__declare_static_bit_vector(MUX_932,1);\
__declare_static_bit_vector(konst_934,3);\
bit_vector_clear(&konst_934);\
konst_934.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_935,1);\
__declare_static_bit_vector(konst_937,1);\
bit_vector_clear(&konst_937);\
__declare_static_bit_vector(MUX_938,1);\
__declare_static_bit_vector(OR_u1_u1_939,1);\
__declare_static_bit_vector(OR_u1_u1_940,1);\
bit_vector_clear(&konst_915);\
konst_915.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_915), &(EQ_u3_u1_916));\
if (has_undefined_bit(&EQ_u3_u1_916)) {fprintf(stderr, "Error: variable EQ_u3_u1_916 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_916));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_916)){bit_vector_cast_to_bit_vector(0, &(MUX_919), &(p1_valid));\
}else {bit_vector_clear(&konst_918);\
bit_vector_cast_to_bit_vector(0, &(MUX_919), &(konst_918));\
}bit_vector_clear(&konst_921);\
konst_921.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_921), &(EQ_u3_u1_922));\
if (has_undefined_bit(&EQ_u3_u1_922)) {fprintf(stderr, "Error: variable EQ_u3_u1_922 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_922));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_922)){bit_vector_cast_to_bit_vector(0, &(MUX_925), &(p2_valid));\
}else {bit_vector_clear(&konst_924);\
bit_vector_cast_to_bit_vector(0, &(MUX_925), &(konst_924));\
}bit_vector_or(&(MUX_919), &(MUX_925), &(OR_u1_u1_926));\
bit_vector_clear(&konst_928);\
konst_928.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_928), &(EQ_u3_u1_929));\
if (has_undefined_bit(&EQ_u3_u1_929)) {fprintf(stderr, "Error: variable EQ_u3_u1_929 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_929));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_929)){bit_vector_cast_to_bit_vector(0, &(MUX_932), &(p3_valid));\
}else {bit_vector_clear(&konst_931);\
bit_vector_cast_to_bit_vector(0, &(MUX_932), &(konst_931));\
}bit_vector_clear(&konst_934);\
konst_934.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_934), &(EQ_u3_u1_935));\
if (has_undefined_bit(&EQ_u3_u1_935)) {fprintf(stderr, "Error: variable EQ_u3_u1_935 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_935));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_935)){bit_vector_cast_to_bit_vector(0, &(MUX_938), &(p4_valid));\
}else {bit_vector_clear(&konst_937);\
bit_vector_cast_to_bit_vector(0, &(MUX_938), &(konst_937));\
}bit_vector_or(&(MUX_932), &(MUX_938), &(OR_u1_u1_939));\
bit_vector_or(&(OR_u1_u1_926), &(OR_u1_u1_939), &(OR_u1_u1_940));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_940));\
;

#define _outputPort_1_Daemon_assign_stmt_945_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;

#define _outputPort_1_Daemon_stmt_953_c_macro_ uint32_t _outputPort_1_Daemon_stmt_953_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"started_new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(started_new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_953_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_1_Daemon_branch_block_stmt_685_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_959_c_export_decl_macro_ __declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_queue,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_queue,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(new_packet_length,16);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_2_Daemon_merge_stmt_961_c_preamble_macro_ uint8_t merge_stmt_961_entry_flag;\
merge_stmt_961_entry_flag = do_while_entry_flag;\
goto merge_stmt_961_run;\
merge_stmt_961_run: ;\

#define _outputPort_2_Daemon_phi_stmt_962_c_macro_ __declare_static_bit_vector(konst_964,16);\
bit_vector_clear(&konst_964);\
__declare_static_bit_vector(type_cast_965,16);\
bit_vector_clear(&type_cast_965);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
__declare_static_bit_vector(konst_964,16);\
bit_vector_clear(&konst_964);\
__declare_static_bit_vector(type_cast_965,16);\
bit_vector_clear(&type_cast_965);\
bit_vector_clear(&konst_964);\
bit_vector_bitcast_to_bit_vector( &(type_cast_965), &(konst_964));\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(type_cast_965));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_967_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_971,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_971));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_971));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_972_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_976,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_976));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_976));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_977_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_981,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_981));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_981));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_982_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_986,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_986));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_986));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_987_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_991_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(next_priority_queue));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(ONE_3));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_961_c_postamble_macro_ merge_stmt_961_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_1000_c_macro_ __declare_static_bit_vector(konst_998,33);\
bit_vector_clear(&konst_998);\
konst_998.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_999,1);\
bit_vector_clear(&konst_998);\
konst_998.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_998), &(BITSEL_u33_u1_999));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_999));\
;

#define _outputPort_2_Daemon_assign_stmt_1005_c_macro_ __declare_static_bit_vector(konst_1003,33);\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1004,1);\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1003), &(BITSEL_u33_u1_1004));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1004));\
;

#define _outputPort_2_Daemon_assign_stmt_1010_c_macro_ __declare_static_bit_vector(konst_1008,33);\
bit_vector_clear(&konst_1008);\
konst_1008.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1009,1);\
bit_vector_clear(&konst_1008);\
konst_1008.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1008), &(BITSEL_u33_u1_1009));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1009));\
;

#define _outputPort_2_Daemon_assign_stmt_1015_c_macro_ __declare_static_bit_vector(konst_1013,33);\
bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1014,1);\
bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1013), &(BITSEL_u33_u1_1014));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1014));\
;

#define _outputPort_2_Daemon_stmt_1027_c_macro_ uint32_t _outputPort_2_Daemon_stmt_1027_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1027_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_2_Daemon_assign_stmt_1056_c_macro_ __declare_static_bit_vector(konst_1030,3);\
bit_vector_clear(&konst_1030);\
konst_1030.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1031,1);\
__declare_static_bit_vector(konst_1033,1);\
bit_vector_clear(&konst_1033);\
__declare_static_bit_vector(MUX_1034,1);\
__declare_static_bit_vector(konst_1036,3);\
bit_vector_clear(&konst_1036);\
konst_1036.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1037,1);\
__declare_static_bit_vector(konst_1039,1);\
bit_vector_clear(&konst_1039);\
__declare_static_bit_vector(MUX_1040,1);\
__declare_static_bit_vector(OR_u1_u1_1041,1);\
__declare_static_bit_vector(konst_1043,3);\
bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1044,1);\
__declare_static_bit_vector(konst_1046,1);\
bit_vector_clear(&konst_1046);\
__declare_static_bit_vector(MUX_1047,1);\
__declare_static_bit_vector(konst_1049,3);\
bit_vector_clear(&konst_1049);\
konst_1049.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1050,1);\
__declare_static_bit_vector(konst_1052,1);\
bit_vector_clear(&konst_1052);\
__declare_static_bit_vector(MUX_1053,1);\
__declare_static_bit_vector(OR_u1_u1_1054,1);\
__declare_static_bit_vector(OR_u1_u1_1055,1);\
bit_vector_clear(&konst_1030);\
konst_1030.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1030), &(EQ_u3_u1_1031));\
if (has_undefined_bit(&EQ_u3_u1_1031)) {fprintf(stderr, "Error: variable EQ_u3_u1_1031 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1031));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1031)){bit_vector_cast_to_bit_vector(0, &(MUX_1034), &(p1_valid));\
}else {bit_vector_clear(&konst_1033);\
bit_vector_cast_to_bit_vector(0, &(MUX_1034), &(konst_1033));\
}bit_vector_clear(&konst_1036);\
konst_1036.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1036), &(EQ_u3_u1_1037));\
if (has_undefined_bit(&EQ_u3_u1_1037)) {fprintf(stderr, "Error: variable EQ_u3_u1_1037 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1037));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1037)){bit_vector_cast_to_bit_vector(0, &(MUX_1040), &(p2_valid));\
}else {bit_vector_clear(&konst_1039);\
bit_vector_cast_to_bit_vector(0, &(MUX_1040), &(konst_1039));\
}bit_vector_or(&(MUX_1034), &(MUX_1040), &(OR_u1_u1_1041));\
bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1043), &(EQ_u3_u1_1044));\
if (has_undefined_bit(&EQ_u3_u1_1044)) {fprintf(stderr, "Error: variable EQ_u3_u1_1044 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1044));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1044)){bit_vector_cast_to_bit_vector(0, &(MUX_1047), &(p3_valid));\
}else {bit_vector_clear(&konst_1046);\
bit_vector_cast_to_bit_vector(0, &(MUX_1047), &(konst_1046));\
}bit_vector_clear(&konst_1049);\
konst_1049.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1049), &(EQ_u3_u1_1050));\
if (has_undefined_bit(&EQ_u3_u1_1050)) {fprintf(stderr, "Error: variable EQ_u3_u1_1050 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1050));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1050)){bit_vector_cast_to_bit_vector(0, &(MUX_1053), &(p4_valid));\
}else {bit_vector_clear(&konst_1052);\
bit_vector_cast_to_bit_vector(0, &(MUX_1053), &(konst_1052));\
}bit_vector_or(&(MUX_1047), &(MUX_1053), &(OR_u1_u1_1054));\
bit_vector_or(&(OR_u1_u1_1041), &(OR_u1_u1_1054), &(OR_u1_u1_1055));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1055));\
;

#define _outputPort_2_Daemon_call_stmt_1066_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_queue),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_queue));\
;

#define _outputPort_2_Daemon_assign_stmt_1075_c_macro_ __declare_static_bit_vector(konst_1069,3);\
bit_vector_clear(&konst_1069);\
__declare_static_bit_vector(NEQ_u3_u1_1070,1);\
__declare_static_bit_vector(konst_1072,16);\
bit_vector_clear(&konst_1072);\
__declare_static_bit_vector(EQ_u16_u1_1073,1);\
__declare_static_bit_vector(AND_u1_u1_1074,1);\
bit_vector_clear(&konst_1069);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1069), &NEQ_u3_u1_1070);\
bit_vector_clear(&konst_1072);\
bit_vector_equal(0, &(down_counter), &(konst_1072), &(EQ_u16_u1_1073));\
bit_vector_and(&(NEQ_u3_u1_1070), &(EQ_u16_u1_1073), &(AND_u1_u1_1074));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1074));\
;

#define _outputPort_2_Daemon_assign_stmt_1108_c_macro_ __declare_static_bit_vector(konst_1078,3);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1079,1);\
__declare_static_bit_vector(slice_1081,16);\
__declare_static_bit_vector(konst_1082,16);\
bit_vector_clear(&konst_1082);\
__declare_static_bit_vector(MUX_1083,16);\
__declare_static_bit_vector(konst_1085,3);\
bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1086,1);\
__declare_static_bit_vector(slice_1088,16);\
__declare_static_bit_vector(konst_1089,16);\
bit_vector_clear(&konst_1089);\
__declare_static_bit_vector(MUX_1090,16);\
__declare_static_bit_vector(OR_u16_u16_1091,16);\
__declare_static_bit_vector(konst_1093,3);\
bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1094,1);\
__declare_static_bit_vector(slice_1096,16);\
__declare_static_bit_vector(konst_1097,16);\
bit_vector_clear(&konst_1097);\
__declare_static_bit_vector(MUX_1098,16);\
__declare_static_bit_vector(konst_1100,3);\
bit_vector_clear(&konst_1100);\
konst_1100.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1101,1);\
__declare_static_bit_vector(slice_1103,16);\
__declare_static_bit_vector(konst_1104,16);\
bit_vector_clear(&konst_1104);\
__declare_static_bit_vector(MUX_1105,16);\
__declare_static_bit_vector(OR_u16_u16_1106,16);\
__declare_static_bit_vector(OR_u16_u16_1107,16);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1078), &(EQ_u3_u1_1079));\
if (has_undefined_bit(&EQ_u3_u1_1079)) {fprintf(stderr, "Error: variable EQ_u3_u1_1079 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1079));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1079)){bit_vector_slice(&(pkt_1_e_word), &(slice_1081), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1083), &(slice_1081));\
}else {bit_vector_clear(&konst_1082);\
bit_vector_cast_to_bit_vector(0, &(MUX_1083), &(konst_1082));\
}bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1085), &(EQ_u3_u1_1086));\
if (has_undefined_bit(&EQ_u3_u1_1086)) {fprintf(stderr, "Error: variable EQ_u3_u1_1086 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1086));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1086)){bit_vector_slice(&(pkt_2_e_word), &(slice_1088), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1090), &(slice_1088));\
}else {bit_vector_clear(&konst_1089);\
bit_vector_cast_to_bit_vector(0, &(MUX_1090), &(konst_1089));\
}bit_vector_or(&(MUX_1083), &(MUX_1090), &(OR_u16_u16_1091));\
bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1093), &(EQ_u3_u1_1094));\
if (has_undefined_bit(&EQ_u3_u1_1094)) {fprintf(stderr, "Error: variable EQ_u3_u1_1094 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1094));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1094)){bit_vector_slice(&(pkt_3_e_word), &(slice_1096), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1098), &(slice_1096));\
}else {bit_vector_clear(&konst_1097);\
bit_vector_cast_to_bit_vector(0, &(MUX_1098), &(konst_1097));\
}bit_vector_clear(&konst_1100);\
konst_1100.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1100), &(EQ_u3_u1_1101));\
if (has_undefined_bit(&EQ_u3_u1_1101)) {fprintf(stderr, "Error: variable EQ_u3_u1_1101 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1101));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1101)){bit_vector_slice(&(pkt_4_e_word), &(slice_1103), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1105), &(slice_1103));\
}else {bit_vector_clear(&konst_1104);\
bit_vector_cast_to_bit_vector(0, &(MUX_1105), &(konst_1104));\
}bit_vector_or(&(MUX_1098), &(MUX_1105), &(OR_u16_u16_1106));\
bit_vector_or(&(OR_u16_u16_1091), &(OR_u16_u16_1106), &(OR_u16_u16_1107));\
bit_vector_cast_to_bit_vector(0, &(new_packet_length), &(OR_u16_u16_1107));\
;

#define _outputPort_2_Daemon_assign_stmt_1121_c_macro_ __declare_static_bit_vector(konst_1112,16);\
bit_vector_clear(&konst_1112);\
konst_1112.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1113,16);\
__declare_static_bit_vector(konst_1116,16);\
bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1117,16);\
__declare_static_bit_vector(MUX_1119,16);\
__declare_static_bit_vector(MUX_1120,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1112);\
konst_1112.val.byte_array[0] = 1;\
bit_vector_minus( &(new_packet_length), &(konst_1112), &(SUB_u16_u16_1113));\
bit_vector_cast_to_bit_vector(0, &(MUX_1120), &(SUB_u16_u16_1113));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1116), &(SUB_u16_u16_1117));\
bit_vector_cast_to_bit_vector(0, &(MUX_1119), &(SUB_u16_u16_1117));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1119), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1120), &(MUX_1119));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1120));\
;

#define _outputPort_2_Daemon_assign_stmt_1129_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1124,1);\
__declare_static_bit_vector(konst_1126,3);\
bit_vector_clear(&konst_1126);\
konst_1126.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1127,1);\
__declare_static_bit_vector(OR_u1_u1_1128,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1124));\
bit_vector_clear(&konst_1126);\
konst_1126.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1126), &(EQ_u3_u1_1127));\
bit_vector_or(&(NOT_u1_u1_1124), &(EQ_u3_u1_1127), &(OR_u1_u1_1128));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1128));\
;

#define _outputPort_2_Daemon_assign_stmt_1137_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1132,1);\
__declare_static_bit_vector(konst_1134,3);\
bit_vector_clear(&konst_1134);\
konst_1134.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1135,1);\
__declare_static_bit_vector(OR_u1_u1_1136,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1132));\
bit_vector_clear(&konst_1134);\
konst_1134.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1134), &(EQ_u3_u1_1135));\
bit_vector_or(&(NOT_u1_u1_1132), &(EQ_u3_u1_1135), &(OR_u1_u1_1136));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1136));\
;

#define _outputPort_2_Daemon_assign_stmt_1145_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1140,1);\
__declare_static_bit_vector(konst_1142,3);\
bit_vector_clear(&konst_1142);\
konst_1142.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1143,1);\
__declare_static_bit_vector(OR_u1_u1_1144,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1140));\
bit_vector_clear(&konst_1142);\
konst_1142.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1142), &(EQ_u3_u1_1143));\
bit_vector_or(&(NOT_u1_u1_1140), &(EQ_u3_u1_1143), &(OR_u1_u1_1144));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1144));\
;

#define _outputPort_2_Daemon_assign_stmt_1153_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1148,1);\
__declare_static_bit_vector(konst_1150,3);\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1151,1);\
__declare_static_bit_vector(OR_u1_u1_1152,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1148));\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1150), &(EQ_u3_u1_1151));\
bit_vector_or(&(NOT_u1_u1_1148), &(EQ_u3_u1_1151), &(OR_u1_u1_1152));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1152));\
;

#define _outputPort_2_Daemon_assign_stmt_1186_c_macro_ __declare_static_bit_vector(konst_1156,3);\
bit_vector_clear(&konst_1156);\
konst_1156.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1157,1);\
__declare_static_bit_vector(slice_1159,32);\
__declare_static_bit_vector(konst_1160,32);\
bit_vector_clear(&konst_1160);\
__declare_static_bit_vector(MUX_1161,32);\
__declare_static_bit_vector(konst_1163,3);\
bit_vector_clear(&konst_1163);\
konst_1163.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1164,1);\
__declare_static_bit_vector(slice_1166,32);\
__declare_static_bit_vector(konst_1167,32);\
bit_vector_clear(&konst_1167);\
__declare_static_bit_vector(MUX_1168,32);\
__declare_static_bit_vector(OR_u32_u32_1169,32);\
__declare_static_bit_vector(konst_1171,3);\
bit_vector_clear(&konst_1171);\
konst_1171.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1172,1);\
__declare_static_bit_vector(slice_1174,32);\
__declare_static_bit_vector(konst_1175,32);\
bit_vector_clear(&konst_1175);\
__declare_static_bit_vector(MUX_1176,32);\
__declare_static_bit_vector(konst_1178,3);\
bit_vector_clear(&konst_1178);\
konst_1178.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1179,1);\
__declare_static_bit_vector(slice_1181,32);\
__declare_static_bit_vector(konst_1182,32);\
bit_vector_clear(&konst_1182);\
__declare_static_bit_vector(MUX_1183,32);\
__declare_static_bit_vector(OR_u32_u32_1184,32);\
__declare_static_bit_vector(OR_u32_u32_1185,32);\
bit_vector_clear(&konst_1156);\
konst_1156.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1156), &(EQ_u3_u1_1157));\
if (has_undefined_bit(&EQ_u3_u1_1157)) {fprintf(stderr, "Error: variable EQ_u3_u1_1157 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1157));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1157)){bit_vector_slice(&(pkt_1_e_word), &(slice_1159), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1161), &(slice_1159));\
}else {bit_vector_clear(&konst_1160);\
bit_vector_cast_to_bit_vector(0, &(MUX_1161), &(konst_1160));\
}bit_vector_clear(&konst_1163);\
konst_1163.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1163), &(EQ_u3_u1_1164));\
if (has_undefined_bit(&EQ_u3_u1_1164)) {fprintf(stderr, "Error: variable EQ_u3_u1_1164 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1164));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1164)){bit_vector_slice(&(pkt_2_e_word), &(slice_1166), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1168), &(slice_1166));\
}else {bit_vector_clear(&konst_1167);\
bit_vector_cast_to_bit_vector(0, &(MUX_1168), &(konst_1167));\
}bit_vector_or(&(MUX_1161), &(MUX_1168), &(OR_u32_u32_1169));\
bit_vector_clear(&konst_1171);\
konst_1171.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1171), &(EQ_u3_u1_1172));\
if (has_undefined_bit(&EQ_u3_u1_1172)) {fprintf(stderr, "Error: variable EQ_u3_u1_1172 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1172));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1172)){bit_vector_slice(&(pkt_3_e_word), &(slice_1174), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1176), &(slice_1174));\
}else {bit_vector_clear(&konst_1175);\
bit_vector_cast_to_bit_vector(0, &(MUX_1176), &(konst_1175));\
}bit_vector_clear(&konst_1178);\
konst_1178.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1178), &(EQ_u3_u1_1179));\
if (has_undefined_bit(&EQ_u3_u1_1179)) {fprintf(stderr, "Error: variable EQ_u3_u1_1179 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1179));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1179)){bit_vector_slice(&(pkt_4_e_word), &(slice_1181), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1183), &(slice_1181));\
}else {bit_vector_clear(&konst_1182);\
bit_vector_cast_to_bit_vector(0, &(MUX_1183), &(konst_1182));\
}bit_vector_or(&(MUX_1176), &(MUX_1183), &(OR_u32_u32_1184));\
bit_vector_or(&(OR_u32_u32_1169), &(OR_u32_u32_1184), &(OR_u32_u32_1185));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1185));\
;

#define _outputPort_2_Daemon_assign_stmt_1215_c_macro_ __declare_static_bit_vector(konst_1189,3);\
bit_vector_clear(&konst_1189);\
konst_1189.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1190,1);\
__declare_static_bit_vector(konst_1192,1);\
bit_vector_clear(&konst_1192);\
__declare_static_bit_vector(MUX_1193,1);\
__declare_static_bit_vector(konst_1195,3);\
bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1196,1);\
__declare_static_bit_vector(konst_1198,1);\
bit_vector_clear(&konst_1198);\
__declare_static_bit_vector(MUX_1199,1);\
__declare_static_bit_vector(OR_u1_u1_1200,1);\
__declare_static_bit_vector(konst_1202,3);\
bit_vector_clear(&konst_1202);\
konst_1202.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1203,1);\
__declare_static_bit_vector(konst_1205,1);\
bit_vector_clear(&konst_1205);\
__declare_static_bit_vector(MUX_1206,1);\
__declare_static_bit_vector(konst_1208,3);\
bit_vector_clear(&konst_1208);\
konst_1208.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1209,1);\
__declare_static_bit_vector(konst_1211,1);\
bit_vector_clear(&konst_1211);\
__declare_static_bit_vector(MUX_1212,1);\
__declare_static_bit_vector(OR_u1_u1_1213,1);\
__declare_static_bit_vector(OR_u1_u1_1214,1);\
bit_vector_clear(&konst_1189);\
konst_1189.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1189), &(EQ_u3_u1_1190));\
if (has_undefined_bit(&EQ_u3_u1_1190)) {fprintf(stderr, "Error: variable EQ_u3_u1_1190 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1190));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1190)){bit_vector_cast_to_bit_vector(0, &(MUX_1193), &(p1_valid));\
}else {bit_vector_clear(&konst_1192);\
bit_vector_cast_to_bit_vector(0, &(MUX_1193), &(konst_1192));\
}bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1195), &(EQ_u3_u1_1196));\
if (has_undefined_bit(&EQ_u3_u1_1196)) {fprintf(stderr, "Error: variable EQ_u3_u1_1196 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1196));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1196)){bit_vector_cast_to_bit_vector(0, &(MUX_1199), &(p2_valid));\
}else {bit_vector_clear(&konst_1198);\
bit_vector_cast_to_bit_vector(0, &(MUX_1199), &(konst_1198));\
}bit_vector_or(&(MUX_1193), &(MUX_1199), &(OR_u1_u1_1200));\
bit_vector_clear(&konst_1202);\
konst_1202.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1202), &(EQ_u3_u1_1203));\
if (has_undefined_bit(&EQ_u3_u1_1203)) {fprintf(stderr, "Error: variable EQ_u3_u1_1203 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1203));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1203)){bit_vector_cast_to_bit_vector(0, &(MUX_1206), &(p3_valid));\
}else {bit_vector_clear(&konst_1205);\
bit_vector_cast_to_bit_vector(0, &(MUX_1206), &(konst_1205));\
}bit_vector_clear(&konst_1208);\
konst_1208.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1208), &(EQ_u3_u1_1209));\
if (has_undefined_bit(&EQ_u3_u1_1209)) {fprintf(stderr, "Error: variable EQ_u3_u1_1209 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1209));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1209)){bit_vector_cast_to_bit_vector(0, &(MUX_1212), &(p4_valid));\
}else {bit_vector_clear(&konst_1211);\
bit_vector_cast_to_bit_vector(0, &(MUX_1212), &(konst_1211));\
}bit_vector_or(&(MUX_1206), &(MUX_1212), &(OR_u1_u1_1213));\
bit_vector_or(&(OR_u1_u1_1200), &(OR_u1_u1_1213), &(OR_u1_u1_1214));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1214));\
;

#define _outputPort_2_Daemon_assign_stmt_1219_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;

#define _outputPort_2_Daemon_stmt_1227_c_macro_ uint32_t _outputPort_2_Daemon_stmt_1227_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"started_new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(started_new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1227_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_2_Daemon_branch_block_stmt_959_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1233_c_export_decl_macro_ __declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_queue,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_queue,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(new_packet_length,16);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_3_Daemon_merge_stmt_1235_c_preamble_macro_ uint8_t merge_stmt_1235_entry_flag;\
merge_stmt_1235_entry_flag = do_while_entry_flag;\
goto merge_stmt_1235_run;\
merge_stmt_1235_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1236_c_macro_ __declare_static_bit_vector(konst_1238,16);\
bit_vector_clear(&konst_1238);\
__declare_static_bit_vector(type_cast_1239,16);\
bit_vector_clear(&type_cast_1239);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
__declare_static_bit_vector(konst_1238,16);\
bit_vector_clear(&konst_1238);\
__declare_static_bit_vector(type_cast_1239,16);\
bit_vector_clear(&type_cast_1239);\
bit_vector_clear(&konst_1238);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1239), &(konst_1238));\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(type_cast_1239));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1241_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1245,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1245));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1245));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1246_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1250,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1250));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1250));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1251_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1255,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1255));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1255));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1256_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1260,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1260));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1260));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1261_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1265_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(next_priority_queue));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(ONE_3));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1235_c_postamble_macro_ merge_stmt_1235_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1274_c_macro_ __declare_static_bit_vector(konst_1272,33);\
bit_vector_clear(&konst_1272);\
konst_1272.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1273,1);\
bit_vector_clear(&konst_1272);\
konst_1272.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1272), &(BITSEL_u33_u1_1273));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1273));\
;

#define _outputPort_3_Daemon_assign_stmt_1279_c_macro_ __declare_static_bit_vector(konst_1277,33);\
bit_vector_clear(&konst_1277);\
konst_1277.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1278,1);\
bit_vector_clear(&konst_1277);\
konst_1277.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1277), &(BITSEL_u33_u1_1278));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1278));\
;

#define _outputPort_3_Daemon_assign_stmt_1284_c_macro_ __declare_static_bit_vector(konst_1282,33);\
bit_vector_clear(&konst_1282);\
konst_1282.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1283,1);\
bit_vector_clear(&konst_1282);\
konst_1282.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1282), &(BITSEL_u33_u1_1283));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1283));\
;

#define _outputPort_3_Daemon_assign_stmt_1289_c_macro_ __declare_static_bit_vector(konst_1287,33);\
bit_vector_clear(&konst_1287);\
konst_1287.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1288,1);\
bit_vector_clear(&konst_1287);\
konst_1287.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1287), &(BITSEL_u33_u1_1288));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1288));\
;

#define _outputPort_3_Daemon_stmt_1301_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1301_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1301_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_3_Daemon_assign_stmt_1330_c_macro_ __declare_static_bit_vector(konst_1304,3);\
bit_vector_clear(&konst_1304);\
konst_1304.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1305,1);\
__declare_static_bit_vector(konst_1307,1);\
bit_vector_clear(&konst_1307);\
__declare_static_bit_vector(MUX_1308,1);\
__declare_static_bit_vector(konst_1310,3);\
bit_vector_clear(&konst_1310);\
konst_1310.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1311,1);\
__declare_static_bit_vector(konst_1313,1);\
bit_vector_clear(&konst_1313);\
__declare_static_bit_vector(MUX_1314,1);\
__declare_static_bit_vector(OR_u1_u1_1315,1);\
__declare_static_bit_vector(konst_1317,3);\
bit_vector_clear(&konst_1317);\
konst_1317.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1318,1);\
__declare_static_bit_vector(konst_1320,1);\
bit_vector_clear(&konst_1320);\
__declare_static_bit_vector(MUX_1321,1);\
__declare_static_bit_vector(konst_1323,3);\
bit_vector_clear(&konst_1323);\
konst_1323.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1324,1);\
__declare_static_bit_vector(konst_1326,1);\
bit_vector_clear(&konst_1326);\
__declare_static_bit_vector(MUX_1327,1);\
__declare_static_bit_vector(OR_u1_u1_1328,1);\
__declare_static_bit_vector(OR_u1_u1_1329,1);\
bit_vector_clear(&konst_1304);\
konst_1304.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1304), &(EQ_u3_u1_1305));\
if (has_undefined_bit(&EQ_u3_u1_1305)) {fprintf(stderr, "Error: variable EQ_u3_u1_1305 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1305));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1305)){bit_vector_cast_to_bit_vector(0, &(MUX_1308), &(p1_valid));\
}else {bit_vector_clear(&konst_1307);\
bit_vector_cast_to_bit_vector(0, &(MUX_1308), &(konst_1307));\
}bit_vector_clear(&konst_1310);\
konst_1310.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1310), &(EQ_u3_u1_1311));\
if (has_undefined_bit(&EQ_u3_u1_1311)) {fprintf(stderr, "Error: variable EQ_u3_u1_1311 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1311));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1311)){bit_vector_cast_to_bit_vector(0, &(MUX_1314), &(p2_valid));\
}else {bit_vector_clear(&konst_1313);\
bit_vector_cast_to_bit_vector(0, &(MUX_1314), &(konst_1313));\
}bit_vector_or(&(MUX_1308), &(MUX_1314), &(OR_u1_u1_1315));\
bit_vector_clear(&konst_1317);\
konst_1317.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1317), &(EQ_u3_u1_1318));\
if (has_undefined_bit(&EQ_u3_u1_1318)) {fprintf(stderr, "Error: variable EQ_u3_u1_1318 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1318));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1318)){bit_vector_cast_to_bit_vector(0, &(MUX_1321), &(p3_valid));\
}else {bit_vector_clear(&konst_1320);\
bit_vector_cast_to_bit_vector(0, &(MUX_1321), &(konst_1320));\
}bit_vector_clear(&konst_1323);\
konst_1323.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1323), &(EQ_u3_u1_1324));\
if (has_undefined_bit(&EQ_u3_u1_1324)) {fprintf(stderr, "Error: variable EQ_u3_u1_1324 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1324));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1324)){bit_vector_cast_to_bit_vector(0, &(MUX_1327), &(p4_valid));\
}else {bit_vector_clear(&konst_1326);\
bit_vector_cast_to_bit_vector(0, &(MUX_1327), &(konst_1326));\
}bit_vector_or(&(MUX_1321), &(MUX_1327), &(OR_u1_u1_1328));\
bit_vector_or(&(OR_u1_u1_1315), &(OR_u1_u1_1328), &(OR_u1_u1_1329));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1329));\
;

#define _outputPort_3_Daemon_call_stmt_1340_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_queue),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_queue));\
;

#define _outputPort_3_Daemon_assign_stmt_1349_c_macro_ __declare_static_bit_vector(konst_1343,3);\
bit_vector_clear(&konst_1343);\
__declare_static_bit_vector(NEQ_u3_u1_1344,1);\
__declare_static_bit_vector(konst_1346,16);\
bit_vector_clear(&konst_1346);\
__declare_static_bit_vector(EQ_u16_u1_1347,1);\
__declare_static_bit_vector(AND_u1_u1_1348,1);\
bit_vector_clear(&konst_1343);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1343), &NEQ_u3_u1_1344);\
bit_vector_clear(&konst_1346);\
bit_vector_equal(0, &(down_counter), &(konst_1346), &(EQ_u16_u1_1347));\
bit_vector_and(&(NEQ_u3_u1_1344), &(EQ_u16_u1_1347), &(AND_u1_u1_1348));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1348));\
;

#define _outputPort_3_Daemon_assign_stmt_1382_c_macro_ __declare_static_bit_vector(konst_1352,3);\
bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1353,1);\
__declare_static_bit_vector(slice_1355,16);\
__declare_static_bit_vector(konst_1356,16);\
bit_vector_clear(&konst_1356);\
__declare_static_bit_vector(MUX_1357,16);\
__declare_static_bit_vector(konst_1359,3);\
bit_vector_clear(&konst_1359);\
konst_1359.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1360,1);\
__declare_static_bit_vector(slice_1362,16);\
__declare_static_bit_vector(konst_1363,16);\
bit_vector_clear(&konst_1363);\
__declare_static_bit_vector(MUX_1364,16);\
__declare_static_bit_vector(OR_u16_u16_1365,16);\
__declare_static_bit_vector(konst_1367,3);\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1368,1);\
__declare_static_bit_vector(slice_1370,16);\
__declare_static_bit_vector(konst_1371,16);\
bit_vector_clear(&konst_1371);\
__declare_static_bit_vector(MUX_1372,16);\
__declare_static_bit_vector(konst_1374,3);\
bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1375,1);\
__declare_static_bit_vector(slice_1377,16);\
__declare_static_bit_vector(konst_1378,16);\
bit_vector_clear(&konst_1378);\
__declare_static_bit_vector(MUX_1379,16);\
__declare_static_bit_vector(OR_u16_u16_1380,16);\
__declare_static_bit_vector(OR_u16_u16_1381,16);\
bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1352), &(EQ_u3_u1_1353));\
if (has_undefined_bit(&EQ_u3_u1_1353)) {fprintf(stderr, "Error: variable EQ_u3_u1_1353 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1353));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1353)){bit_vector_slice(&(pkt_1_e_word), &(slice_1355), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1357), &(slice_1355));\
}else {bit_vector_clear(&konst_1356);\
bit_vector_cast_to_bit_vector(0, &(MUX_1357), &(konst_1356));\
}bit_vector_clear(&konst_1359);\
konst_1359.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1359), &(EQ_u3_u1_1360));\
if (has_undefined_bit(&EQ_u3_u1_1360)) {fprintf(stderr, "Error: variable EQ_u3_u1_1360 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1360));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1360)){bit_vector_slice(&(pkt_2_e_word), &(slice_1362), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1364), &(slice_1362));\
}else {bit_vector_clear(&konst_1363);\
bit_vector_cast_to_bit_vector(0, &(MUX_1364), &(konst_1363));\
}bit_vector_or(&(MUX_1357), &(MUX_1364), &(OR_u16_u16_1365));\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1367), &(EQ_u3_u1_1368));\
if (has_undefined_bit(&EQ_u3_u1_1368)) {fprintf(stderr, "Error: variable EQ_u3_u1_1368 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1368));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1368)){bit_vector_slice(&(pkt_3_e_word), &(slice_1370), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1372), &(slice_1370));\
}else {bit_vector_clear(&konst_1371);\
bit_vector_cast_to_bit_vector(0, &(MUX_1372), &(konst_1371));\
}bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1374), &(EQ_u3_u1_1375));\
if (has_undefined_bit(&EQ_u3_u1_1375)) {fprintf(stderr, "Error: variable EQ_u3_u1_1375 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1375));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1375)){bit_vector_slice(&(pkt_4_e_word), &(slice_1377), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1379), &(slice_1377));\
}else {bit_vector_clear(&konst_1378);\
bit_vector_cast_to_bit_vector(0, &(MUX_1379), &(konst_1378));\
}bit_vector_or(&(MUX_1372), &(MUX_1379), &(OR_u16_u16_1380));\
bit_vector_or(&(OR_u16_u16_1365), &(OR_u16_u16_1380), &(OR_u16_u16_1381));\
bit_vector_cast_to_bit_vector(0, &(new_packet_length), &(OR_u16_u16_1381));\
;

#define _outputPort_3_Daemon_assign_stmt_1395_c_macro_ __declare_static_bit_vector(konst_1386,16);\
bit_vector_clear(&konst_1386);\
konst_1386.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1387,16);\
__declare_static_bit_vector(konst_1390,16);\
bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1391,16);\
__declare_static_bit_vector(MUX_1393,16);\
__declare_static_bit_vector(MUX_1394,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1386);\
konst_1386.val.byte_array[0] = 1;\
bit_vector_minus( &(new_packet_length), &(konst_1386), &(SUB_u16_u16_1387));\
bit_vector_cast_to_bit_vector(0, &(MUX_1394), &(SUB_u16_u16_1387));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1390), &(SUB_u16_u16_1391));\
bit_vector_cast_to_bit_vector(0, &(MUX_1393), &(SUB_u16_u16_1391));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1393), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1394), &(MUX_1393));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1394));\
;

#define _outputPort_3_Daemon_assign_stmt_1403_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1398,1);\
__declare_static_bit_vector(konst_1400,3);\
bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1401,1);\
__declare_static_bit_vector(OR_u1_u1_1402,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1398));\
bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1400), &(EQ_u3_u1_1401));\
bit_vector_or(&(NOT_u1_u1_1398), &(EQ_u3_u1_1401), &(OR_u1_u1_1402));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1402));\
;

#define _outputPort_3_Daemon_assign_stmt_1411_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1406,1);\
__declare_static_bit_vector(konst_1408,3);\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1409,1);\
__declare_static_bit_vector(OR_u1_u1_1410,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1406));\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1408), &(EQ_u3_u1_1409));\
bit_vector_or(&(NOT_u1_u1_1406), &(EQ_u3_u1_1409), &(OR_u1_u1_1410));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1410));\
;

#define _outputPort_3_Daemon_assign_stmt_1419_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1414,1);\
__declare_static_bit_vector(konst_1416,3);\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1417,1);\
__declare_static_bit_vector(OR_u1_u1_1418,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1414));\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1416), &(EQ_u3_u1_1417));\
bit_vector_or(&(NOT_u1_u1_1414), &(EQ_u3_u1_1417), &(OR_u1_u1_1418));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1418));\
;

#define _outputPort_3_Daemon_assign_stmt_1427_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1422,1);\
__declare_static_bit_vector(konst_1424,3);\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1425,1);\
__declare_static_bit_vector(OR_u1_u1_1426,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1422));\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1424), &(EQ_u3_u1_1425));\
bit_vector_or(&(NOT_u1_u1_1422), &(EQ_u3_u1_1425), &(OR_u1_u1_1426));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1426));\
;

#define _outputPort_3_Daemon_assign_stmt_1460_c_macro_ __declare_static_bit_vector(konst_1430,3);\
bit_vector_clear(&konst_1430);\
konst_1430.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1431,1);\
__declare_static_bit_vector(slice_1433,32);\
__declare_static_bit_vector(konst_1434,32);\
bit_vector_clear(&konst_1434);\
__declare_static_bit_vector(MUX_1435,32);\
__declare_static_bit_vector(konst_1437,3);\
bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1438,1);\
__declare_static_bit_vector(slice_1440,32);\
__declare_static_bit_vector(konst_1441,32);\
bit_vector_clear(&konst_1441);\
__declare_static_bit_vector(MUX_1442,32);\
__declare_static_bit_vector(OR_u32_u32_1443,32);\
__declare_static_bit_vector(konst_1445,3);\
bit_vector_clear(&konst_1445);\
konst_1445.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1446,1);\
__declare_static_bit_vector(slice_1448,32);\
__declare_static_bit_vector(konst_1449,32);\
bit_vector_clear(&konst_1449);\
__declare_static_bit_vector(MUX_1450,32);\
__declare_static_bit_vector(konst_1452,3);\
bit_vector_clear(&konst_1452);\
konst_1452.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1453,1);\
__declare_static_bit_vector(slice_1455,32);\
__declare_static_bit_vector(konst_1456,32);\
bit_vector_clear(&konst_1456);\
__declare_static_bit_vector(MUX_1457,32);\
__declare_static_bit_vector(OR_u32_u32_1458,32);\
__declare_static_bit_vector(OR_u32_u32_1459,32);\
bit_vector_clear(&konst_1430);\
konst_1430.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1430), &(EQ_u3_u1_1431));\
if (has_undefined_bit(&EQ_u3_u1_1431)) {fprintf(stderr, "Error: variable EQ_u3_u1_1431 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1431));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1431)){bit_vector_slice(&(pkt_1_e_word), &(slice_1433), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1435), &(slice_1433));\
}else {bit_vector_clear(&konst_1434);\
bit_vector_cast_to_bit_vector(0, &(MUX_1435), &(konst_1434));\
}bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1437), &(EQ_u3_u1_1438));\
if (has_undefined_bit(&EQ_u3_u1_1438)) {fprintf(stderr, "Error: variable EQ_u3_u1_1438 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1438));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1438)){bit_vector_slice(&(pkt_2_e_word), &(slice_1440), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1442), &(slice_1440));\
}else {bit_vector_clear(&konst_1441);\
bit_vector_cast_to_bit_vector(0, &(MUX_1442), &(konst_1441));\
}bit_vector_or(&(MUX_1435), &(MUX_1442), &(OR_u32_u32_1443));\
bit_vector_clear(&konst_1445);\
konst_1445.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1445), &(EQ_u3_u1_1446));\
if (has_undefined_bit(&EQ_u3_u1_1446)) {fprintf(stderr, "Error: variable EQ_u3_u1_1446 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1446));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1446)){bit_vector_slice(&(pkt_3_e_word), &(slice_1448), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1450), &(slice_1448));\
}else {bit_vector_clear(&konst_1449);\
bit_vector_cast_to_bit_vector(0, &(MUX_1450), &(konst_1449));\
}bit_vector_clear(&konst_1452);\
konst_1452.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1452), &(EQ_u3_u1_1453));\
if (has_undefined_bit(&EQ_u3_u1_1453)) {fprintf(stderr, "Error: variable EQ_u3_u1_1453 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1453));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1453)){bit_vector_slice(&(pkt_4_e_word), &(slice_1455), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1457), &(slice_1455));\
}else {bit_vector_clear(&konst_1456);\
bit_vector_cast_to_bit_vector(0, &(MUX_1457), &(konst_1456));\
}bit_vector_or(&(MUX_1450), &(MUX_1457), &(OR_u32_u32_1458));\
bit_vector_or(&(OR_u32_u32_1443), &(OR_u32_u32_1458), &(OR_u32_u32_1459));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1459));\
;

#define _outputPort_3_Daemon_assign_stmt_1489_c_macro_ __declare_static_bit_vector(konst_1463,3);\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1464,1);\
__declare_static_bit_vector(konst_1466,1);\
bit_vector_clear(&konst_1466);\
__declare_static_bit_vector(MUX_1467,1);\
__declare_static_bit_vector(konst_1469,3);\
bit_vector_clear(&konst_1469);\
konst_1469.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1470,1);\
__declare_static_bit_vector(konst_1472,1);\
bit_vector_clear(&konst_1472);\
__declare_static_bit_vector(MUX_1473,1);\
__declare_static_bit_vector(OR_u1_u1_1474,1);\
__declare_static_bit_vector(konst_1476,3);\
bit_vector_clear(&konst_1476);\
konst_1476.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1477,1);\
__declare_static_bit_vector(konst_1479,1);\
bit_vector_clear(&konst_1479);\
__declare_static_bit_vector(MUX_1480,1);\
__declare_static_bit_vector(konst_1482,3);\
bit_vector_clear(&konst_1482);\
konst_1482.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1483,1);\
__declare_static_bit_vector(konst_1485,1);\
bit_vector_clear(&konst_1485);\
__declare_static_bit_vector(MUX_1486,1);\
__declare_static_bit_vector(OR_u1_u1_1487,1);\
__declare_static_bit_vector(OR_u1_u1_1488,1);\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1463), &(EQ_u3_u1_1464));\
if (has_undefined_bit(&EQ_u3_u1_1464)) {fprintf(stderr, "Error: variable EQ_u3_u1_1464 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1464));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1464)){bit_vector_cast_to_bit_vector(0, &(MUX_1467), &(p1_valid));\
}else {bit_vector_clear(&konst_1466);\
bit_vector_cast_to_bit_vector(0, &(MUX_1467), &(konst_1466));\
}bit_vector_clear(&konst_1469);\
konst_1469.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1469), &(EQ_u3_u1_1470));\
if (has_undefined_bit(&EQ_u3_u1_1470)) {fprintf(stderr, "Error: variable EQ_u3_u1_1470 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1470));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1470)){bit_vector_cast_to_bit_vector(0, &(MUX_1473), &(p2_valid));\
}else {bit_vector_clear(&konst_1472);\
bit_vector_cast_to_bit_vector(0, &(MUX_1473), &(konst_1472));\
}bit_vector_or(&(MUX_1467), &(MUX_1473), &(OR_u1_u1_1474));\
bit_vector_clear(&konst_1476);\
konst_1476.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1476), &(EQ_u3_u1_1477));\
if (has_undefined_bit(&EQ_u3_u1_1477)) {fprintf(stderr, "Error: variable EQ_u3_u1_1477 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1477));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1477)){bit_vector_cast_to_bit_vector(0, &(MUX_1480), &(p3_valid));\
}else {bit_vector_clear(&konst_1479);\
bit_vector_cast_to_bit_vector(0, &(MUX_1480), &(konst_1479));\
}bit_vector_clear(&konst_1482);\
konst_1482.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1482), &(EQ_u3_u1_1483));\
if (has_undefined_bit(&EQ_u3_u1_1483)) {fprintf(stderr, "Error: variable EQ_u3_u1_1483 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1483));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1483)){bit_vector_cast_to_bit_vector(0, &(MUX_1486), &(p4_valid));\
}else {bit_vector_clear(&konst_1485);\
bit_vector_cast_to_bit_vector(0, &(MUX_1486), &(konst_1485));\
}bit_vector_or(&(MUX_1480), &(MUX_1486), &(OR_u1_u1_1487));\
bit_vector_or(&(OR_u1_u1_1474), &(OR_u1_u1_1487), &(OR_u1_u1_1488));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1488));\
;

#define _outputPort_3_Daemon_assign_stmt_1493_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_3",&(data_to_out));\
}
;

#define _outputPort_3_Daemon_stmt_1501_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1501_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"started_new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(started_new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1501_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_3_Daemon_branch_block_stmt_1233_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1507_c_export_decl_macro_ __declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_queue,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_queue,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(new_packet_length,16);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_4_Daemon_merge_stmt_1509_c_preamble_macro_ uint8_t merge_stmt_1509_entry_flag;\
merge_stmt_1509_entry_flag = do_while_entry_flag;\
goto merge_stmt_1509_run;\
merge_stmt_1509_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1510_c_macro_ __declare_static_bit_vector(konst_1512,16);\
bit_vector_clear(&konst_1512);\
__declare_static_bit_vector(type_cast_1513,16);\
bit_vector_clear(&type_cast_1513);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
__declare_static_bit_vector(konst_1512,16);\
bit_vector_clear(&konst_1512);\
__declare_static_bit_vector(type_cast_1513,16);\
bit_vector_clear(&type_cast_1513);\
bit_vector_clear(&konst_1512);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1513), &(konst_1512));\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(type_cast_1513));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1515_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1519,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1519));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1519));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1520_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1524,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1524));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1524));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1525_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1529,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1529));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1529));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1530_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1534,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1534));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1534));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1535_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1539_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(next_priority_queue));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &(ONE_3));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1509_c_postamble_macro_ merge_stmt_1509_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1548_c_macro_ __declare_static_bit_vector(konst_1546,33);\
bit_vector_clear(&konst_1546);\
konst_1546.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1547,1);\
bit_vector_clear(&konst_1546);\
konst_1546.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1546), &(BITSEL_u33_u1_1547));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1547));\
;

#define _outputPort_4_Daemon_assign_stmt_1553_c_macro_ __declare_static_bit_vector(konst_1551,33);\
bit_vector_clear(&konst_1551);\
konst_1551.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1552,1);\
bit_vector_clear(&konst_1551);\
konst_1551.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1551), &(BITSEL_u33_u1_1552));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1552));\
;

#define _outputPort_4_Daemon_assign_stmt_1558_c_macro_ __declare_static_bit_vector(konst_1556,33);\
bit_vector_clear(&konst_1556);\
konst_1556.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1557,1);\
bit_vector_clear(&konst_1556);\
konst_1556.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1556), &(BITSEL_u33_u1_1557));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1557));\
;

#define _outputPort_4_Daemon_assign_stmt_1563_c_macro_ __declare_static_bit_vector(konst_1561,33);\
bit_vector_clear(&konst_1561);\
konst_1561.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1562,1);\
bit_vector_clear(&konst_1561);\
konst_1561.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1561), &(BITSEL_u33_u1_1562));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1562));\
;

#define _outputPort_4_Daemon_stmt_1575_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1575_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1575_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_4_Daemon_assign_stmt_1604_c_macro_ __declare_static_bit_vector(konst_1578,3);\
bit_vector_clear(&konst_1578);\
konst_1578.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1579,1);\
__declare_static_bit_vector(konst_1581,1);\
bit_vector_clear(&konst_1581);\
__declare_static_bit_vector(MUX_1582,1);\
__declare_static_bit_vector(konst_1584,3);\
bit_vector_clear(&konst_1584);\
konst_1584.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1585,1);\
__declare_static_bit_vector(konst_1587,1);\
bit_vector_clear(&konst_1587);\
__declare_static_bit_vector(MUX_1588,1);\
__declare_static_bit_vector(OR_u1_u1_1589,1);\
__declare_static_bit_vector(konst_1591,3);\
bit_vector_clear(&konst_1591);\
konst_1591.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1592,1);\
__declare_static_bit_vector(konst_1594,1);\
bit_vector_clear(&konst_1594);\
__declare_static_bit_vector(MUX_1595,1);\
__declare_static_bit_vector(konst_1597,3);\
bit_vector_clear(&konst_1597);\
konst_1597.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1598,1);\
__declare_static_bit_vector(konst_1600,1);\
bit_vector_clear(&konst_1600);\
__declare_static_bit_vector(MUX_1601,1);\
__declare_static_bit_vector(OR_u1_u1_1602,1);\
__declare_static_bit_vector(OR_u1_u1_1603,1);\
bit_vector_clear(&konst_1578);\
konst_1578.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1578), &(EQ_u3_u1_1579));\
if (has_undefined_bit(&EQ_u3_u1_1579)) {fprintf(stderr, "Error: variable EQ_u3_u1_1579 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1579));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1579)){bit_vector_cast_to_bit_vector(0, &(MUX_1582), &(p1_valid));\
}else {bit_vector_clear(&konst_1581);\
bit_vector_cast_to_bit_vector(0, &(MUX_1582), &(konst_1581));\
}bit_vector_clear(&konst_1584);\
konst_1584.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1584), &(EQ_u3_u1_1585));\
if (has_undefined_bit(&EQ_u3_u1_1585)) {fprintf(stderr, "Error: variable EQ_u3_u1_1585 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1585));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1585)){bit_vector_cast_to_bit_vector(0, &(MUX_1588), &(p2_valid));\
}else {bit_vector_clear(&konst_1587);\
bit_vector_cast_to_bit_vector(0, &(MUX_1588), &(konst_1587));\
}bit_vector_or(&(MUX_1582), &(MUX_1588), &(OR_u1_u1_1589));\
bit_vector_clear(&konst_1591);\
konst_1591.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1591), &(EQ_u3_u1_1592));\
if (has_undefined_bit(&EQ_u3_u1_1592)) {fprintf(stderr, "Error: variable EQ_u3_u1_1592 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1592));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1592)){bit_vector_cast_to_bit_vector(0, &(MUX_1595), &(p3_valid));\
}else {bit_vector_clear(&konst_1594);\
bit_vector_cast_to_bit_vector(0, &(MUX_1595), &(konst_1594));\
}bit_vector_clear(&konst_1597);\
konst_1597.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1597), &(EQ_u3_u1_1598));\
if (has_undefined_bit(&EQ_u3_u1_1598)) {fprintf(stderr, "Error: variable EQ_u3_u1_1598 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1598));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1598)){bit_vector_cast_to_bit_vector(0, &(MUX_1601), &(p4_valid));\
}else {bit_vector_clear(&konst_1600);\
bit_vector_cast_to_bit_vector(0, &(MUX_1601), &(konst_1600));\
}bit_vector_or(&(MUX_1595), &(MUX_1601), &(OR_u1_u1_1602));\
bit_vector_or(&(OR_u1_u1_1589), &(OR_u1_u1_1602), &(OR_u1_u1_1603));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1603));\
;

#define _outputPort_4_Daemon_call_stmt_1614_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_queue),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_queue));\
;

#define _outputPort_4_Daemon_assign_stmt_1623_c_macro_ __declare_static_bit_vector(konst_1617,3);\
bit_vector_clear(&konst_1617);\
__declare_static_bit_vector(NEQ_u3_u1_1618,1);\
__declare_static_bit_vector(konst_1620,16);\
bit_vector_clear(&konst_1620);\
__declare_static_bit_vector(EQ_u16_u1_1621,1);\
__declare_static_bit_vector(AND_u1_u1_1622,1);\
bit_vector_clear(&konst_1617);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1617), &NEQ_u3_u1_1618);\
bit_vector_clear(&konst_1620);\
bit_vector_equal(0, &(down_counter), &(konst_1620), &(EQ_u16_u1_1621));\
bit_vector_and(&(NEQ_u3_u1_1618), &(EQ_u16_u1_1621), &(AND_u1_u1_1622));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1622));\
;

#define _outputPort_4_Daemon_assign_stmt_1656_c_macro_ __declare_static_bit_vector(konst_1626,3);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1627,1);\
__declare_static_bit_vector(slice_1629,16);\
__declare_static_bit_vector(konst_1630,16);\
bit_vector_clear(&konst_1630);\
__declare_static_bit_vector(MUX_1631,16);\
__declare_static_bit_vector(konst_1633,3);\
bit_vector_clear(&konst_1633);\
konst_1633.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1634,1);\
__declare_static_bit_vector(slice_1636,16);\
__declare_static_bit_vector(konst_1637,16);\
bit_vector_clear(&konst_1637);\
__declare_static_bit_vector(MUX_1638,16);\
__declare_static_bit_vector(OR_u16_u16_1639,16);\
__declare_static_bit_vector(konst_1641,3);\
bit_vector_clear(&konst_1641);\
konst_1641.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1642,1);\
__declare_static_bit_vector(slice_1644,16);\
__declare_static_bit_vector(konst_1645,16);\
bit_vector_clear(&konst_1645);\
__declare_static_bit_vector(MUX_1646,16);\
__declare_static_bit_vector(konst_1648,3);\
bit_vector_clear(&konst_1648);\
konst_1648.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1649,1);\
__declare_static_bit_vector(slice_1651,16);\
__declare_static_bit_vector(konst_1652,16);\
bit_vector_clear(&konst_1652);\
__declare_static_bit_vector(MUX_1653,16);\
__declare_static_bit_vector(OR_u16_u16_1654,16);\
__declare_static_bit_vector(OR_u16_u16_1655,16);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1626), &(EQ_u3_u1_1627));\
if (has_undefined_bit(&EQ_u3_u1_1627)) {fprintf(stderr, "Error: variable EQ_u3_u1_1627 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1627));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1627)){bit_vector_slice(&(pkt_1_e_word), &(slice_1629), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1631), &(slice_1629));\
}else {bit_vector_clear(&konst_1630);\
bit_vector_cast_to_bit_vector(0, &(MUX_1631), &(konst_1630));\
}bit_vector_clear(&konst_1633);\
konst_1633.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1633), &(EQ_u3_u1_1634));\
if (has_undefined_bit(&EQ_u3_u1_1634)) {fprintf(stderr, "Error: variable EQ_u3_u1_1634 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1634));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1634)){bit_vector_slice(&(pkt_2_e_word), &(slice_1636), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1638), &(slice_1636));\
}else {bit_vector_clear(&konst_1637);\
bit_vector_cast_to_bit_vector(0, &(MUX_1638), &(konst_1637));\
}bit_vector_or(&(MUX_1631), &(MUX_1638), &(OR_u16_u16_1639));\
bit_vector_clear(&konst_1641);\
konst_1641.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1641), &(EQ_u3_u1_1642));\
if (has_undefined_bit(&EQ_u3_u1_1642)) {fprintf(stderr, "Error: variable EQ_u3_u1_1642 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1642));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1642)){bit_vector_slice(&(pkt_3_e_word), &(slice_1644), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1646), &(slice_1644));\
}else {bit_vector_clear(&konst_1645);\
bit_vector_cast_to_bit_vector(0, &(MUX_1646), &(konst_1645));\
}bit_vector_clear(&konst_1648);\
konst_1648.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1648), &(EQ_u3_u1_1649));\
if (has_undefined_bit(&EQ_u3_u1_1649)) {fprintf(stderr, "Error: variable EQ_u3_u1_1649 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1649));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1649)){bit_vector_slice(&(pkt_4_e_word), &(slice_1651), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1653), &(slice_1651));\
}else {bit_vector_clear(&konst_1652);\
bit_vector_cast_to_bit_vector(0, &(MUX_1653), &(konst_1652));\
}bit_vector_or(&(MUX_1646), &(MUX_1653), &(OR_u16_u16_1654));\
bit_vector_or(&(OR_u16_u16_1639), &(OR_u16_u16_1654), &(OR_u16_u16_1655));\
bit_vector_cast_to_bit_vector(0, &(new_packet_length), &(OR_u16_u16_1655));\
;

#define _outputPort_4_Daemon_assign_stmt_1669_c_macro_ __declare_static_bit_vector(konst_1660,16);\
bit_vector_clear(&konst_1660);\
konst_1660.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1661,16);\
__declare_static_bit_vector(konst_1664,16);\
bit_vector_clear(&konst_1664);\
konst_1664.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1665,16);\
__declare_static_bit_vector(MUX_1667,16);\
__declare_static_bit_vector(MUX_1668,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1660);\
konst_1660.val.byte_array[0] = 1;\
bit_vector_minus( &(new_packet_length), &(konst_1660), &(SUB_u16_u16_1661));\
bit_vector_cast_to_bit_vector(0, &(MUX_1668), &(SUB_u16_u16_1661));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1664);\
konst_1664.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1664), &(SUB_u16_u16_1665));\
bit_vector_cast_to_bit_vector(0, &(MUX_1667), &(SUB_u16_u16_1665));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1667), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1668), &(MUX_1667));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1668));\
;

#define _outputPort_4_Daemon_assign_stmt_1677_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1672,1);\
__declare_static_bit_vector(konst_1674,3);\
bit_vector_clear(&konst_1674);\
konst_1674.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1675,1);\
__declare_static_bit_vector(OR_u1_u1_1676,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1672));\
bit_vector_clear(&konst_1674);\
konst_1674.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1674), &(EQ_u3_u1_1675));\
bit_vector_or(&(NOT_u1_u1_1672), &(EQ_u3_u1_1675), &(OR_u1_u1_1676));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1676));\
;

#define _outputPort_4_Daemon_assign_stmt_1685_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1680,1);\
__declare_static_bit_vector(konst_1682,3);\
bit_vector_clear(&konst_1682);\
konst_1682.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1683,1);\
__declare_static_bit_vector(OR_u1_u1_1684,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1680));\
bit_vector_clear(&konst_1682);\
konst_1682.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1682), &(EQ_u3_u1_1683));\
bit_vector_or(&(NOT_u1_u1_1680), &(EQ_u3_u1_1683), &(OR_u1_u1_1684));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1684));\
;

#define _outputPort_4_Daemon_assign_stmt_1693_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1688,1);\
__declare_static_bit_vector(konst_1690,3);\
bit_vector_clear(&konst_1690);\
konst_1690.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1691,1);\
__declare_static_bit_vector(OR_u1_u1_1692,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1688));\
bit_vector_clear(&konst_1690);\
konst_1690.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1690), &(EQ_u3_u1_1691));\
bit_vector_or(&(NOT_u1_u1_1688), &(EQ_u3_u1_1691), &(OR_u1_u1_1692));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1692));\
;

#define _outputPort_4_Daemon_assign_stmt_1701_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1696,1);\
__declare_static_bit_vector(konst_1698,3);\
bit_vector_clear(&konst_1698);\
konst_1698.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1699,1);\
__declare_static_bit_vector(OR_u1_u1_1700,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1696));\
bit_vector_clear(&konst_1698);\
konst_1698.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1698), &(EQ_u3_u1_1699));\
bit_vector_or(&(NOT_u1_u1_1696), &(EQ_u3_u1_1699), &(OR_u1_u1_1700));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1700));\
;

#define _outputPort_4_Daemon_assign_stmt_1734_c_macro_ __declare_static_bit_vector(konst_1704,3);\
bit_vector_clear(&konst_1704);\
konst_1704.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1705,1);\
__declare_static_bit_vector(slice_1707,32);\
__declare_static_bit_vector(konst_1708,32);\
bit_vector_clear(&konst_1708);\
__declare_static_bit_vector(MUX_1709,32);\
__declare_static_bit_vector(konst_1711,3);\
bit_vector_clear(&konst_1711);\
konst_1711.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1712,1);\
__declare_static_bit_vector(slice_1714,32);\
__declare_static_bit_vector(konst_1715,32);\
bit_vector_clear(&konst_1715);\
__declare_static_bit_vector(MUX_1716,32);\
__declare_static_bit_vector(OR_u32_u32_1717,32);\
__declare_static_bit_vector(konst_1719,3);\
bit_vector_clear(&konst_1719);\
konst_1719.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1720,1);\
__declare_static_bit_vector(slice_1722,32);\
__declare_static_bit_vector(konst_1723,32);\
bit_vector_clear(&konst_1723);\
__declare_static_bit_vector(MUX_1724,32);\
__declare_static_bit_vector(konst_1726,3);\
bit_vector_clear(&konst_1726);\
konst_1726.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1727,1);\
__declare_static_bit_vector(slice_1729,32);\
__declare_static_bit_vector(konst_1730,32);\
bit_vector_clear(&konst_1730);\
__declare_static_bit_vector(MUX_1731,32);\
__declare_static_bit_vector(OR_u32_u32_1732,32);\
__declare_static_bit_vector(OR_u32_u32_1733,32);\
bit_vector_clear(&konst_1704);\
konst_1704.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1704), &(EQ_u3_u1_1705));\
if (has_undefined_bit(&EQ_u3_u1_1705)) {fprintf(stderr, "Error: variable EQ_u3_u1_1705 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1705));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1705)){bit_vector_slice(&(pkt_1_e_word), &(slice_1707), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1709), &(slice_1707));\
}else {bit_vector_clear(&konst_1708);\
bit_vector_cast_to_bit_vector(0, &(MUX_1709), &(konst_1708));\
}bit_vector_clear(&konst_1711);\
konst_1711.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1711), &(EQ_u3_u1_1712));\
if (has_undefined_bit(&EQ_u3_u1_1712)) {fprintf(stderr, "Error: variable EQ_u3_u1_1712 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1712));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1712)){bit_vector_slice(&(pkt_2_e_word), &(slice_1714), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1716), &(slice_1714));\
}else {bit_vector_clear(&konst_1715);\
bit_vector_cast_to_bit_vector(0, &(MUX_1716), &(konst_1715));\
}bit_vector_or(&(MUX_1709), &(MUX_1716), &(OR_u32_u32_1717));\
bit_vector_clear(&konst_1719);\
konst_1719.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1719), &(EQ_u3_u1_1720));\
if (has_undefined_bit(&EQ_u3_u1_1720)) {fprintf(stderr, "Error: variable EQ_u3_u1_1720 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1720));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1720)){bit_vector_slice(&(pkt_3_e_word), &(slice_1722), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1724), &(slice_1722));\
}else {bit_vector_clear(&konst_1723);\
bit_vector_cast_to_bit_vector(0, &(MUX_1724), &(konst_1723));\
}bit_vector_clear(&konst_1726);\
konst_1726.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1726), &(EQ_u3_u1_1727));\
if (has_undefined_bit(&EQ_u3_u1_1727)) {fprintf(stderr, "Error: variable EQ_u3_u1_1727 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1727));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1727)){bit_vector_slice(&(pkt_4_e_word), &(slice_1729), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1731), &(slice_1729));\
}else {bit_vector_clear(&konst_1730);\
bit_vector_cast_to_bit_vector(0, &(MUX_1731), &(konst_1730));\
}bit_vector_or(&(MUX_1724), &(MUX_1731), &(OR_u32_u32_1732));\
bit_vector_or(&(OR_u32_u32_1717), &(OR_u32_u32_1732), &(OR_u32_u32_1733));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1733));\
;

#define _outputPort_4_Daemon_assign_stmt_1763_c_macro_ __declare_static_bit_vector(konst_1737,3);\
bit_vector_clear(&konst_1737);\
konst_1737.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1738,1);\
__declare_static_bit_vector(konst_1740,1);\
bit_vector_clear(&konst_1740);\
__declare_static_bit_vector(MUX_1741,1);\
__declare_static_bit_vector(konst_1743,3);\
bit_vector_clear(&konst_1743);\
konst_1743.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1744,1);\
__declare_static_bit_vector(konst_1746,1);\
bit_vector_clear(&konst_1746);\
__declare_static_bit_vector(MUX_1747,1);\
__declare_static_bit_vector(OR_u1_u1_1748,1);\
__declare_static_bit_vector(konst_1750,3);\
bit_vector_clear(&konst_1750);\
konst_1750.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1751,1);\
__declare_static_bit_vector(konst_1753,1);\
bit_vector_clear(&konst_1753);\
__declare_static_bit_vector(MUX_1754,1);\
__declare_static_bit_vector(konst_1756,3);\
bit_vector_clear(&konst_1756);\
konst_1756.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1757,1);\
__declare_static_bit_vector(konst_1759,1);\
bit_vector_clear(&konst_1759);\
__declare_static_bit_vector(MUX_1760,1);\
__declare_static_bit_vector(OR_u1_u1_1761,1);\
__declare_static_bit_vector(OR_u1_u1_1762,1);\
bit_vector_clear(&konst_1737);\
konst_1737.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1737), &(EQ_u3_u1_1738));\
if (has_undefined_bit(&EQ_u3_u1_1738)) {fprintf(stderr, "Error: variable EQ_u3_u1_1738 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1738));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1738)){bit_vector_cast_to_bit_vector(0, &(MUX_1741), &(p1_valid));\
}else {bit_vector_clear(&konst_1740);\
bit_vector_cast_to_bit_vector(0, &(MUX_1741), &(konst_1740));\
}bit_vector_clear(&konst_1743);\
konst_1743.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1743), &(EQ_u3_u1_1744));\
if (has_undefined_bit(&EQ_u3_u1_1744)) {fprintf(stderr, "Error: variable EQ_u3_u1_1744 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1744));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1744)){bit_vector_cast_to_bit_vector(0, &(MUX_1747), &(p2_valid));\
}else {bit_vector_clear(&konst_1746);\
bit_vector_cast_to_bit_vector(0, &(MUX_1747), &(konst_1746));\
}bit_vector_or(&(MUX_1741), &(MUX_1747), &(OR_u1_u1_1748));\
bit_vector_clear(&konst_1750);\
konst_1750.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1750), &(EQ_u3_u1_1751));\
if (has_undefined_bit(&EQ_u3_u1_1751)) {fprintf(stderr, "Error: variable EQ_u3_u1_1751 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1751));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1751)){bit_vector_cast_to_bit_vector(0, &(MUX_1754), &(p3_valid));\
}else {bit_vector_clear(&konst_1753);\
bit_vector_cast_to_bit_vector(0, &(MUX_1754), &(konst_1753));\
}bit_vector_clear(&konst_1756);\
konst_1756.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1756), &(EQ_u3_u1_1757));\
if (has_undefined_bit(&EQ_u3_u1_1757)) {fprintf(stderr, "Error: variable EQ_u3_u1_1757 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1757));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1757)){bit_vector_cast_to_bit_vector(0, &(MUX_1760), &(p4_valid));\
}else {bit_vector_clear(&konst_1759);\
bit_vector_cast_to_bit_vector(0, &(MUX_1760), &(konst_1759));\
}bit_vector_or(&(MUX_1754), &(MUX_1760), &(OR_u1_u1_1761));\
bit_vector_or(&(OR_u1_u1_1748), &(OR_u1_u1_1761), &(OR_u1_u1_1762));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1762));\
;

#define _outputPort_4_Daemon_assign_stmt_1767_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;

#define _outputPort_4_Daemon_stmt_1775_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1775_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"started_new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(started_new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1775_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_4_Daemon_branch_block_stmt_1507_c_export_apply_macro_ ;

#define _outputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _prioritySelect_inner_inarg_prep_macro__ __declare_static_bit_vector(down_counter,16);\
bit_vector_cast_to_bit_vector(0, &(down_counter), &((*__pdown_counter)));\
__declare_static_bit_vector(active_packet,3);\
bit_vector_cast_to_bit_vector(0, &(active_packet), &((*__pactive_packet)));\
__declare_static_bit_vector(priority_queue,3);\
bit_vector_cast_to_bit_vector(0, &(priority_queue), &((*__ppriority_queue)));\
__declare_static_bit_vector(p1_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &((*__pp1_valid)));\
__declare_static_bit_vector(p2_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &((*__pp2_valid)));\
__declare_static_bit_vector(p3_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &((*__pp3_valid)));\
__declare_static_bit_vector(p4_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &((*__pp4_valid)));\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_queue,3);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(select_1,1);\
__declare_static_bit_vector(select_2,1);\
__declare_static_bit_vector(select_3,1);\
__declare_static_bit_vector(select_4,1);\
__declare_static_bit_vector(temp_next_priority_queue,3);\
__declare_static_bit_vector(is_select_done,1);\

#define _prioritySelect_assign_stmt_522_c_macro_ __declare_static_bit_vector(konst_520,16);\
bit_vector_clear(&konst_520);\
__declare_static_bit_vector(EQ_u16_u1_521,1);\
bit_vector_clear(&konst_520);\
bit_vector_equal(0, &(down_counter), &(konst_520), &(EQ_u16_u1_521));\
bit_vector_cast_to_bit_vector(0, &(d0), &(EQ_u16_u1_521));\
;

#define _prioritySelect_assign_stmt_540_c_macro_ __declare_static_bit_vector(AND_u1_u1_526,1);\
__declare_static_bit_vector(konst_528,3);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_529,1);\
__declare_static_bit_vector(NOT_u1_u1_531,1);\
__declare_static_bit_vector(NOT_u1_u1_533,1);\
__declare_static_bit_vector(AND_u1_u1_534,1);\
__declare_static_bit_vector(NOT_u1_u1_536,1);\
__declare_static_bit_vector(AND_u1_u1_537,1);\
__declare_static_bit_vector(OR_u1_u1_538,1);\
__declare_static_bit_vector(AND_u1_u1_539,1);\
bit_vector_and(&(d0), &(p1_valid), &(AND_u1_u1_526));\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 1;\
bit_vector_equal(0, &(priority_queue), &(konst_528), &(EQ_u3_u1_529));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_531));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_533));\
bit_vector_and(&(NOT_u1_u1_531), &(NOT_u1_u1_533), &(AND_u1_u1_534));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_536));\
bit_vector_and(&(AND_u1_u1_534), &(NOT_u1_u1_536), &(AND_u1_u1_537));\
bit_vector_or(&(EQ_u3_u1_529), &(AND_u1_u1_537), &(OR_u1_u1_538));\
bit_vector_and(&(AND_u1_u1_526), &(OR_u1_u1_538), &(AND_u1_u1_539));\
bit_vector_cast_to_bit_vector(0, &(select_1), &(AND_u1_u1_539));\
;

#define _prioritySelect_assign_stmt_558_c_macro_ __declare_static_bit_vector(AND_u1_u1_544,1);\
__declare_static_bit_vector(konst_546,3);\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_547,1);\
__declare_static_bit_vector(NOT_u1_u1_549,1);\
__declare_static_bit_vector(NOT_u1_u1_551,1);\
__declare_static_bit_vector(AND_u1_u1_552,1);\
__declare_static_bit_vector(NOT_u1_u1_554,1);\
__declare_static_bit_vector(AND_u1_u1_555,1);\
__declare_static_bit_vector(OR_u1_u1_556,1);\
__declare_static_bit_vector(AND_u1_u1_557,1);\
bit_vector_and(&(d0), &(p2_valid), &(AND_u1_u1_544));\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 2;\
bit_vector_equal(0, &(priority_queue), &(konst_546), &(EQ_u3_u1_547));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_549));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_551));\
bit_vector_and(&(NOT_u1_u1_549), &(NOT_u1_u1_551), &(AND_u1_u1_552));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_554));\
bit_vector_and(&(AND_u1_u1_552), &(NOT_u1_u1_554), &(AND_u1_u1_555));\
bit_vector_or(&(EQ_u3_u1_547), &(AND_u1_u1_555), &(OR_u1_u1_556));\
bit_vector_and(&(AND_u1_u1_544), &(OR_u1_u1_556), &(AND_u1_u1_557));\
bit_vector_cast_to_bit_vector(0, &(select_2), &(AND_u1_u1_557));\
;

#define _prioritySelect_assign_stmt_576_c_macro_ __declare_static_bit_vector(AND_u1_u1_562,1);\
__declare_static_bit_vector(konst_564,3);\
bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_565,1);\
__declare_static_bit_vector(NOT_u1_u1_567,1);\
__declare_static_bit_vector(NOT_u1_u1_569,1);\
__declare_static_bit_vector(AND_u1_u1_570,1);\
__declare_static_bit_vector(NOT_u1_u1_572,1);\
__declare_static_bit_vector(AND_u1_u1_573,1);\
__declare_static_bit_vector(OR_u1_u1_574,1);\
__declare_static_bit_vector(AND_u1_u1_575,1);\
bit_vector_and(&(d0), &(p3_valid), &(AND_u1_u1_562));\
bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 3;\
bit_vector_equal(0, &(priority_queue), &(konst_564), &(EQ_u3_u1_565));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_567));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_569));\
bit_vector_and(&(NOT_u1_u1_567), &(NOT_u1_u1_569), &(AND_u1_u1_570));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_572));\
bit_vector_and(&(AND_u1_u1_570), &(NOT_u1_u1_572), &(AND_u1_u1_573));\
bit_vector_or(&(EQ_u3_u1_565), &(AND_u1_u1_573), &(OR_u1_u1_574));\
bit_vector_and(&(AND_u1_u1_562), &(OR_u1_u1_574), &(AND_u1_u1_575));\
bit_vector_cast_to_bit_vector(0, &(select_3), &(AND_u1_u1_575));\
;

#define _prioritySelect_assign_stmt_594_c_macro_ __declare_static_bit_vector(AND_u1_u1_580,1);\
__declare_static_bit_vector(konst_582,3);\
bit_vector_clear(&konst_582);\
konst_582.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_583,1);\
__declare_static_bit_vector(NOT_u1_u1_585,1);\
__declare_static_bit_vector(NOT_u1_u1_587,1);\
__declare_static_bit_vector(AND_u1_u1_588,1);\
__declare_static_bit_vector(NOT_u1_u1_590,1);\
__declare_static_bit_vector(AND_u1_u1_591,1);\
__declare_static_bit_vector(OR_u1_u1_592,1);\
__declare_static_bit_vector(AND_u1_u1_593,1);\
bit_vector_and(&(d0), &(p4_valid), &(AND_u1_u1_580));\
bit_vector_clear(&konst_582);\
konst_582.val.byte_array[0] = 4;\
bit_vector_equal(0, &(priority_queue), &(konst_582), &(EQ_u3_u1_583));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_585));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_587));\
bit_vector_and(&(NOT_u1_u1_585), &(NOT_u1_u1_587), &(AND_u1_u1_588));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_590));\
bit_vector_and(&(AND_u1_u1_588), &(NOT_u1_u1_590), &(AND_u1_u1_591));\
bit_vector_or(&(EQ_u3_u1_583), &(AND_u1_u1_591), &(OR_u1_u1_592));\
bit_vector_and(&(AND_u1_u1_580), &(OR_u1_u1_592), &(AND_u1_u1_593));\
bit_vector_cast_to_bit_vector(0, &(select_4), &(AND_u1_u1_593));\
;

#define _prioritySelect_assign_stmt_621_c_macro_ __declare_static_bit_vector(NOT_u1_u1_597,1);\
__declare_static_bit_vector(konst_599,3);\
bit_vector_clear(&konst_599);\
__declare_static_bit_vector(MUX_600,3);\
__declare_static_bit_vector(konst_602,3);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_603,3);\
bit_vector_clear(&konst_603);\
__declare_static_bit_vector(MUX_604,3);\
__declare_static_bit_vector(OR_u3_u3_605,3);\
__declare_static_bit_vector(konst_607,3);\
bit_vector_clear(&konst_607);\
konst_607.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_608,3);\
bit_vector_clear(&konst_608);\
__declare_static_bit_vector(MUX_609,3);\
__declare_static_bit_vector(OR_u3_u3_610,3);\
__declare_static_bit_vector(konst_612,3);\
bit_vector_clear(&konst_612);\
konst_612.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_613,3);\
bit_vector_clear(&konst_613);\
__declare_static_bit_vector(MUX_614,3);\
__declare_static_bit_vector(konst_616,3);\
bit_vector_clear(&konst_616);\
konst_616.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_617,3);\
bit_vector_clear(&konst_617);\
__declare_static_bit_vector(MUX_618,3);\
__declare_static_bit_vector(OR_u3_u3_619,3);\
__declare_static_bit_vector(OR_u3_u3_620,3);\
bit_vector_not( &(d0), &(NOT_u1_u1_597));\
if (has_undefined_bit(&NOT_u1_u1_597)) {fprintf(stderr, "Error: variable NOT_u1_u1_597 has undefined value (%s) at test point.\n", to_string(&NOT_u1_u1_597));assert(0);} \
if(bit_vector_to_uint64(0, &NOT_u1_u1_597)){bit_vector_cast_to_bit_vector(0, &(MUX_600), &(active_packet));\
}else {bit_vector_clear(&konst_599);\
bit_vector_cast_to_bit_vector(0, &(MUX_600), &(konst_599));\
}if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_604), &(konst_602));\
}else {bit_vector_clear(&konst_603);\
bit_vector_cast_to_bit_vector(0, &(MUX_604), &(konst_603));\
}bit_vector_or(&(MUX_600), &(MUX_604), &(OR_u3_u3_605));\
if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_607);\
konst_607.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_609), &(konst_607));\
}else {bit_vector_clear(&konst_608);\
bit_vector_cast_to_bit_vector(0, &(MUX_609), &(konst_608));\
}bit_vector_or(&(OR_u3_u3_605), &(MUX_609), &(OR_u3_u3_610));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_612);\
konst_612.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_614), &(konst_612));\
}else {bit_vector_clear(&konst_613);\
bit_vector_cast_to_bit_vector(0, &(MUX_614), &(konst_613));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_616);\
konst_616.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_618), &(konst_616));\
}else {bit_vector_clear(&konst_617);\
bit_vector_cast_to_bit_vector(0, &(MUX_618), &(konst_617));\
}bit_vector_or(&(MUX_614), &(MUX_618), &(OR_u3_u3_619));\
bit_vector_or(&(OR_u3_u3_610), &(OR_u3_u3_619), &(OR_u3_u3_620));\
bit_vector_cast_to_bit_vector(0, &(next_active_packet), &(OR_u3_u3_620));\
;

#define _prioritySelect_assign_stmt_657_c_macro_ __declare_static_bit_vector(konst_624,3);\
bit_vector_clear(&konst_624);\
__declare_static_bit_vector(EQ_u3_u1_625,1);\
__declare_static_bit_vector(konst_626,3);\
bit_vector_clear(&konst_626);\
konst_626.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_627,3);\
bit_vector_clear(&konst_627);\
__declare_static_bit_vector(MUX_628,3);\
__declare_static_bit_vector(konst_630,3);\
bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_631,1);\
__declare_static_bit_vector(konst_632,3);\
bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_633,3);\
bit_vector_clear(&konst_633);\
__declare_static_bit_vector(MUX_634,3);\
__declare_static_bit_vector(OR_u3_u3_635,3);\
__declare_static_bit_vector(konst_637,3);\
bit_vector_clear(&konst_637);\
konst_637.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_638,1);\
__declare_static_bit_vector(konst_639,3);\
bit_vector_clear(&konst_639);\
konst_639.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_640,3);\
bit_vector_clear(&konst_640);\
__declare_static_bit_vector(MUX_641,3);\
__declare_static_bit_vector(OR_u3_u3_642,3);\
__declare_static_bit_vector(konst_644,3);\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_645,1);\
__declare_static_bit_vector(konst_646,3);\
bit_vector_clear(&konst_646);\
konst_646.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_647,3);\
bit_vector_clear(&konst_647);\
__declare_static_bit_vector(MUX_648,3);\
__declare_static_bit_vector(konst_650,3);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_651,1);\
__declare_static_bit_vector(konst_652,3);\
bit_vector_clear(&konst_652);\
konst_652.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_653,3);\
bit_vector_clear(&konst_653);\
__declare_static_bit_vector(MUX_654,3);\
__declare_static_bit_vector(OR_u3_u3_655,3);\
__declare_static_bit_vector(OR_u3_u3_656,3);\
bit_vector_clear(&konst_624);\
bit_vector_equal(0, &(priority_queue), &(konst_624), &(EQ_u3_u1_625));\
if (has_undefined_bit(&EQ_u3_u1_625)) {fprintf(stderr, "Error: variable EQ_u3_u1_625 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_625));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_625)){bit_vector_clear(&konst_626);\
konst_626.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_628), &(konst_626));\
}else {bit_vector_clear(&konst_627);\
bit_vector_cast_to_bit_vector(0, &(MUX_628), &(konst_627));\
}bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 1;\
bit_vector_equal(0, &(priority_queue), &(konst_630), &(EQ_u3_u1_631));\
if (has_undefined_bit(&EQ_u3_u1_631)) {fprintf(stderr, "Error: variable EQ_u3_u1_631 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_631));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_631)){bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_634), &(konst_632));\
}else {bit_vector_clear(&konst_633);\
bit_vector_cast_to_bit_vector(0, &(MUX_634), &(konst_633));\
}bit_vector_or(&(MUX_628), &(MUX_634), &(OR_u3_u3_635));\
bit_vector_clear(&konst_637);\
konst_637.val.byte_array[0] = 2;\
bit_vector_equal(0, &(priority_queue), &(konst_637), &(EQ_u3_u1_638));\
if (has_undefined_bit(&EQ_u3_u1_638)) {fprintf(stderr, "Error: variable EQ_u3_u1_638 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_638));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_638)){bit_vector_clear(&konst_639);\
konst_639.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_641), &(konst_639));\
}else {bit_vector_clear(&konst_640);\
bit_vector_cast_to_bit_vector(0, &(MUX_641), &(konst_640));\
}bit_vector_or(&(OR_u3_u3_635), &(MUX_641), &(OR_u3_u3_642));\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 3;\
bit_vector_equal(0, &(priority_queue), &(konst_644), &(EQ_u3_u1_645));\
if (has_undefined_bit(&EQ_u3_u1_645)) {fprintf(stderr, "Error: variable EQ_u3_u1_645 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_645));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_645)){bit_vector_clear(&konst_646);\
konst_646.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_648), &(konst_646));\
}else {bit_vector_clear(&konst_647);\
bit_vector_cast_to_bit_vector(0, &(MUX_648), &(konst_647));\
}bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 4;\
bit_vector_equal(0, &(priority_queue), &(konst_650), &(EQ_u3_u1_651));\
if (has_undefined_bit(&EQ_u3_u1_651)) {fprintf(stderr, "Error: variable EQ_u3_u1_651 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_651));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_651)){bit_vector_clear(&konst_652);\
konst_652.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_654), &(konst_652));\
}else {bit_vector_clear(&konst_653);\
bit_vector_cast_to_bit_vector(0, &(MUX_654), &(konst_653));\
}bit_vector_or(&(MUX_648), &(MUX_654), &(OR_u3_u3_655));\
bit_vector_or(&(OR_u3_u3_642), &(OR_u3_u3_655), &(OR_u3_u3_656));\
bit_vector_cast_to_bit_vector(0, &(temp_next_priority_queue), &(OR_u3_u3_656));\
;

#define _prioritySelect_assign_stmt_666_c_macro_ __declare_static_bit_vector(OR_u1_u1_661,1);\
__declare_static_bit_vector(OR_u1_u1_664,1);\
__declare_static_bit_vector(OR_u1_u1_665,1);\
bit_vector_or(&(select_1), &(select_2), &(OR_u1_u1_661));\
bit_vector_or(&(select_3), &(select_4), &(OR_u1_u1_664));\
bit_vector_or(&(OR_u1_u1_661), &(OR_u1_u1_664), &(OR_u1_u1_665));\
bit_vector_cast_to_bit_vector(0, &(is_select_done), &(OR_u1_u1_665));\
;

#define _prioritySelect_assign_stmt_672_c_macro_ __declare_static_bit_vector(MUX_671,3);\
if (has_undefined_bit(&is_select_done)) {fprintf(stderr, "Error: variable is_select_done has undefined value (%s) at test point.\n", to_string(&is_select_done));assert(0);} \
if(bit_vector_to_uint64(0, &is_select_done)){bit_vector_cast_to_bit_vector(0, &(MUX_671), &(temp_next_priority_queue));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_671), &(priority_queue));\
}bit_vector_cast_to_bit_vector(0, &(next_priority_queue), &(MUX_671));\
;

#define _prioritySelect_stmt_682_c_macro_ uint32_t _prioritySelect_stmt_682_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]prioritySelect_function>\t%s\n",_prioritySelect_stmt_682_c_macro___print_counter,"d0");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"select_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(select_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"select_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(select_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"select_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(select_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"select_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(select_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"temp_next_priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(temp_next_priority_queue)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"is_select_done");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(is_select_done)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]prioritySelect_function>\t\t%s\t\t",_prioritySelect_stmt_682_c_macro___print_counter,"next_priority_queue");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_priority_queue)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_priority_queue)), &(next_priority_queue));\
;
