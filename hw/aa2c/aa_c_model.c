#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <aa_c_model_internal.h>
#include <aa_c_model.h>
FILE* __report_log_file__ = NULL;
int __trace_on__ = 0;
void _set_trace_file(FILE* fp) {
__report_log_file__ = fp;
}
bit_vector _ONE_1;
#define ONE_1 (_ONE_1)

bit_vector _ONE_2;
#define ONE_2 (_ONE_2)

bit_vector _ONE_3;
#define ONE_3 (_ONE_3)

bit_vector _ONE_33;
#define ONE_33 (_ONE_33)

bit_vector _ONE_8;
#define ONE_8 (_ONE_8)

bit_vector _ZERO_1;
#define ZERO_1 (_ZERO_1)

bit_vector _ZERO_2;
#define ZERO_2 (_ZERO_2)

bit_vector _ZERO_3;
#define ZERO_3 (_ZERO_3)

bit_vector _ZERO_33;
#define ZERO_33 (_ZERO_33)

bit_vector _ZERO_8;
#define ZERO_8 (_ZERO_8)

void __init_aa_globals__() 
{
init_static_bit_vector(&(ONE_1), 1);\
bit_vector_clear(&ONE_1);\
ONE_1.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_2), 2);\
bit_vector_clear(&ONE_2);\
ONE_2.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_3), 3);\
bit_vector_clear(&ONE_3);\
ONE_3.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_33), 33);\
bit_vector_clear(&ONE_33);\
ONE_33.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_8), 8);\
bit_vector_clear(&ONE_8);\
ONE_8.val.byte_array[0] = 1;\
init_static_bit_vector(&(ZERO_1), 1);\
bit_vector_clear(&ZERO_1);\
init_static_bit_vector(&(ZERO_2), 2);\
bit_vector_clear(&ZERO_2);\
init_static_bit_vector(&(ZERO_3), 3);\
bit_vector_clear(&ZERO_3);\
init_static_bit_vector(&(ZERO_33), 33);\
bit_vector_clear(&ZERO_33);\
init_static_bit_vector(&(ZERO_8), 8);\
bit_vector_clear(&ZERO_8);\
register_pipe("in_data_1", 2, 32, 0);\
register_pipe("in_data_2", 2, 32, 0);\
register_pipe("in_data_3", 2, 32, 0);\
register_pipe("in_data_4", 2, 32, 0);\
register_pipe("noblock_obuf_1_1", 640, 8, 2);\
register_pipe("noblock_obuf_1_2", 640, 8, 2);\
register_pipe("noblock_obuf_1_3", 640, 8, 2);\
register_pipe("noblock_obuf_1_4", 640, 8, 2);\
register_pipe("noblock_obuf_2_1", 640, 8, 2);\
register_pipe("noblock_obuf_2_2", 640, 8, 2);\
register_pipe("noblock_obuf_2_3", 640, 8, 2);\
register_pipe("noblock_obuf_2_4", 640, 8, 2);\
register_pipe("noblock_obuf_3_1", 640, 8, 2);\
register_pipe("noblock_obuf_3_2", 640, 8, 2);\
register_pipe("noblock_obuf_3_3", 640, 8, 2);\
register_pipe("noblock_obuf_3_4", 640, 8, 2);\
register_pipe("noblock_obuf_4_1", 640, 8, 2);\
register_pipe("noblock_obuf_4_2", 640, 8, 2);\
register_pipe("noblock_obuf_4_3", 640, 8, 2);\
register_pipe("noblock_obuf_4_4", 640, 8, 2);\
register_pipe("out_data_1", 2, 32, 0);\
register_pipe("out_data_2", 2, 32, 0);\
register_pipe("out_data_3", 2, 32, 0);\
register_pipe("out_data_4", 2, 32, 0);\
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_60_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_60_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_60_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _inputPort_1_Daemon_()
{
MUTEX_DECL(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
MUTEX_LOCK(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
_inputPort_1_Daemon_inner_inarg_prep_macro__; 
_inputPort_1_Daemon_branch_block_stmt_64_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 73
__declare_static_bit_vector(konst_172,1);\
bit_vector_clear(&konst_172);\
konst_172.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 75
_inputPort_1_Daemon_merge_stmt_66_c_preamble_macro_; 
// 			$phi count_down := 			  next_count_down $on   $loopback 			  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_inputPort_1_Daemon_phi_stmt_67_c_macro_; 
// 			$phi input_word := 			  in_data_1 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_1_Daemon_phi_stmt_73_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_1_Daemon_phi_stmt_76_c_macro_; 
_inputPort_1_Daemon_merge_stmt_66_c_postamble_macro_; 
// $report (inputPort_1_Daemon received_input_word 			 input_word input_word )
_inputPort_1_Daemon_stmt_82_c_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_87_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_91_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_95_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_99_c_macro_; 
// $report (inputPort_1_Daemon new_packet_summary 			 dest_id dest_id 			 pkt_length pkt_length 			 seq_id seq_id )
_inputPort_1_Daemon_stmt_103_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_1_Daemon_assign_stmt_113_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_1_Daemon_assign_stmt_119_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_1_Daemon_assign_stmt_124_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_129_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_1_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_133_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_138_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_1_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_142_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_147_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_1_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_151_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_156_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_1_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_160_c_macro_; 
// $report (inputPort_1_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_1_Daemon_stmt_170_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_172);\
konst_172.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_172)) break;
} 
}
_inputPort_1_Daemon_branch_block_stmt_64_c_export_apply_macro_;
}
_inputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_1_Daemon_series_block_stmt_63_c_mutex_);
}
void inputPort_1_Daemon()
{
_inputPort_1_Daemon_outer_arg_decl_macro__;
_inputPort_1_Daemon_();
_inputPort_1_Daemon_outer_op_xfer_macro__;
}


void _inputPort_2_Daemon_()
{
MUTEX_DECL(_inputPort_2_Daemon_series_block_stmt_175_c_mutex_);
MUTEX_LOCK(_inputPort_2_Daemon_series_block_stmt_175_c_mutex_);
_inputPort_2_Daemon_inner_inarg_prep_macro__; 
_inputPort_2_Daemon_branch_block_stmt_176_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 111
__declare_static_bit_vector(konst_283,1);\
bit_vector_clear(&konst_283);\
konst_283.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 113
_inputPort_2_Daemon_merge_stmt_178_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_2_Daemon_phi_stmt_179_c_macro_; 
// 			$phi input_word := 			  in_data_2 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_2_Daemon_phi_stmt_184_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_2_Daemon_phi_stmt_187_c_macro_; 
_inputPort_2_Daemon_merge_stmt_178_c_postamble_macro_; 
// $report (inputPort_2_Daemon received_input_word 			 input_word input_word )
_inputPort_2_Daemon_stmt_193_c_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_198_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_202_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_206_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_210_c_macro_; 
// $report (inputPort_2_Daemon new_packet_summary 			 dest_id dest_id 			 pkt_length pkt_length 			 seq_id seq_id )
_inputPort_2_Daemon_stmt_214_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_2_Daemon_assign_stmt_224_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_2_Daemon_assign_stmt_230_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_2_Daemon_assign_stmt_235_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_240_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_2_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_244_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_249_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_2_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_253_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_258_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_2_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_262_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_267_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_2_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_271_c_macro_; 
// $report (inputPort_2_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_2_Daemon_stmt_281_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_283);\
konst_283.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_283)) break;
} 
}
_inputPort_2_Daemon_branch_block_stmt_176_c_export_apply_macro_;
}
_inputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_2_Daemon_series_block_stmt_175_c_mutex_);
}
void inputPort_2_Daemon()
{
_inputPort_2_Daemon_outer_arg_decl_macro__;
_inputPort_2_Daemon_();
_inputPort_2_Daemon_outer_op_xfer_macro__;
}


void _inputPort_3_Daemon_()
{
MUTEX_DECL(_inputPort_3_Daemon_series_block_stmt_286_c_mutex_);
MUTEX_LOCK(_inputPort_3_Daemon_series_block_stmt_286_c_mutex_);
_inputPort_3_Daemon_inner_inarg_prep_macro__; 
_inputPort_3_Daemon_branch_block_stmt_287_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 149
__declare_static_bit_vector(konst_394,1);\
bit_vector_clear(&konst_394);\
konst_394.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 151
_inputPort_3_Daemon_merge_stmt_289_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_3_Daemon_phi_stmt_290_c_macro_; 
// 			$phi input_word := 			  in_data_3 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_3_Daemon_phi_stmt_295_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_3_Daemon_phi_stmt_298_c_macro_; 
_inputPort_3_Daemon_merge_stmt_289_c_postamble_macro_; 
// $report (inputPort_3_Daemon received_input_word 			 input_word input_word )
_inputPort_3_Daemon_stmt_304_c_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_309_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_313_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_317_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_321_c_macro_; 
// $report (inputPort_3_Daemon new_packet_summary 			 dest_id dest_id 			 pkt_length pkt_length 			 seq_id seq_id )
_inputPort_3_Daemon_stmt_325_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_3_Daemon_assign_stmt_335_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_3_Daemon_assign_stmt_341_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_3_Daemon_assign_stmt_346_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_351_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_3_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_355_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_360_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_3_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_364_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_369_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_3_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_373_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_378_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_3_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_382_c_macro_; 
// $report (inputPort_3_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_3_Daemon_stmt_392_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_394);\
konst_394.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_394)) break;
} 
}
_inputPort_3_Daemon_branch_block_stmt_287_c_export_apply_macro_;
}
_inputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_3_Daemon_series_block_stmt_286_c_mutex_);
}
void inputPort_3_Daemon()
{
_inputPort_3_Daemon_outer_arg_decl_macro__;
_inputPort_3_Daemon_();
_inputPort_3_Daemon_outer_op_xfer_macro__;
}


void _inputPort_4_Daemon_()
{
MUTEX_DECL(_inputPort_4_Daemon_series_block_stmt_397_c_mutex_);
MUTEX_LOCK(_inputPort_4_Daemon_series_block_stmt_397_c_mutex_);
_inputPort_4_Daemon_inner_inarg_prep_macro__; 
_inputPort_4_Daemon_branch_block_stmt_398_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 187
__declare_static_bit_vector(konst_505,1);\
bit_vector_clear(&konst_505);\
konst_505.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 189
_inputPort_4_Daemon_merge_stmt_400_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_4_Daemon_phi_stmt_401_c_macro_; 
// 			$phi input_word := 			  in_data_4 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_4_Daemon_phi_stmt_406_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_4_Daemon_phi_stmt_409_c_macro_; 
_inputPort_4_Daemon_merge_stmt_400_c_postamble_macro_; 
// $report (inputPort_4_Daemon received_input_word 			 input_word input_word )
_inputPort_4_Daemon_stmt_415_c_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_420_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_424_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_428_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_432_c_macro_; 
// $report (inputPort_4_Daemon new_packet_summary 			 dest_id dest_id 			 pkt_length pkt_length 			 seq_id seq_id )
_inputPort_4_Daemon_stmt_436_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_4_Daemon_assign_stmt_446_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_4_Daemon_assign_stmt_452_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_4_Daemon_assign_stmt_457_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_462_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_4_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_466_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_471_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_4_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_475_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_480_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_4_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_484_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_489_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_4_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_493_c_macro_; 
// $report (inputPort_4_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_4_Daemon_stmt_503_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_505);\
konst_505.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_505)) break;
} 
}
_inputPort_4_Daemon_branch_block_stmt_398_c_export_apply_macro_;
}
_inputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_4_Daemon_series_block_stmt_397_c_mutex_);
}
void inputPort_4_Daemon()
{
_inputPort_4_Daemon_outer_arg_decl_macro__;
_inputPort_4_Daemon_();
_inputPort_4_Daemon_outer_op_xfer_macro__;
}


void _outputPort_1_Daemon_()
{
MUTEX_DECL(_outputPort_1_Daemon_series_block_stmt_684_c_mutex_);
MUTEX_LOCK(_outputPort_1_Daemon_series_block_stmt_684_c_mutex_);
_outputPort_1_Daemon_inner_inarg_prep_macro__; 
_outputPort_1_Daemon_branch_block_stmt_685_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 241
__declare_static_bit_vector(konst_955,1);\
bit_vector_clear(&konst_955);\
konst_955.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 243
_outputPort_1_Daemon_merge_stmt_687_c_preamble_macro_; 
// 			$phi down_counter := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_1_Daemon_phi_stmt_688_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_693_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_698_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_703_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_708_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_713_c_macro_; 
// 			$phi priority_queue := 			  ONE_3 $on   $entry 			  next_priority_queue $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_717_c_macro_; 
_outputPort_1_Daemon_merge_stmt_687_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_726_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_731_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_736_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_741_c_macro_; 
// $report (outputPort_1_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 priority_queue priority_queue 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_1_Daemon_stmt_753_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_782_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_queue p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_queue ) 
_outputPort_1_Daemon_call_stmt_792_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_801_c_macro_; 
// 			$volatile new_packet_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_834_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (new_packet_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_1_Daemon_assign_stmt_847_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_855_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_863_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_871_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_879_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_912_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_941_c_macro_; 
// 			$guard (send_flag) out_data_1 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_1_Daemon_assign_stmt_945_c_macro_; 
// $report (outputPort_1_Daemon send_information 			 started_new_packet started_new_packet 			 next_active_packet next_active_packet 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid )
_outputPort_1_Daemon_stmt_953_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_955);\
konst_955.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_955)) break;
} 
}
_outputPort_1_Daemon_branch_block_stmt_685_c_export_apply_macro_;
}
_outputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_1_Daemon_series_block_stmt_684_c_mutex_);
}
void outputPort_1_Daemon()
{
_outputPort_1_Daemon_outer_arg_decl_macro__;
_outputPort_1_Daemon_();
_outputPort_1_Daemon_outer_op_xfer_macro__;
}


void _outputPort_2_Daemon_()
{
MUTEX_DECL(_outputPort_2_Daemon_series_block_stmt_958_c_mutex_);
MUTEX_LOCK(_outputPort_2_Daemon_series_block_stmt_958_c_mutex_);
_outputPort_2_Daemon_inner_inarg_prep_macro__; 
_outputPort_2_Daemon_branch_block_stmt_959_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 287
__declare_static_bit_vector(konst_1229,1);\
bit_vector_clear(&konst_1229);\
konst_1229.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 289
_outputPort_2_Daemon_merge_stmt_961_c_preamble_macro_; 
// 			$phi down_counter := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_2_Daemon_phi_stmt_962_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_967_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_972_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_977_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_982_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_987_c_macro_; 
// 			$phi priority_queue := 			  ONE_3 $on   $entry 			  next_priority_queue $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_991_c_macro_; 
_outputPort_2_Daemon_merge_stmt_961_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_1000_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_1005_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_1010_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_1015_c_macro_; 
// $report (outputPort_2_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 priority_queue priority_queue 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_2_Daemon_stmt_1027_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1056_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_queue p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_queue ) 
_outputPort_2_Daemon_call_stmt_1066_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1075_c_macro_; 
// 			$volatile new_packet_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1108_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (new_packet_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_2_Daemon_assign_stmt_1121_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1129_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1137_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1145_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1153_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1186_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1215_c_macro_; 
// 			$guard (send_flag) out_data_2 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_2_Daemon_assign_stmt_1219_c_macro_; 
// $report (outputPort_2_Daemon send_information 			 started_new_packet started_new_packet 			 next_active_packet next_active_packet 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid )
_outputPort_2_Daemon_stmt_1227_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1229);\
konst_1229.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1229)) break;
} 
}
_outputPort_2_Daemon_branch_block_stmt_959_c_export_apply_macro_;
}
_outputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_2_Daemon_series_block_stmt_958_c_mutex_);
}
void outputPort_2_Daemon()
{
_outputPort_2_Daemon_outer_arg_decl_macro__;
_outputPort_2_Daemon_();
_outputPort_2_Daemon_outer_op_xfer_macro__;
}


void _outputPort_3_Daemon_()
{
MUTEX_DECL(_outputPort_3_Daemon_series_block_stmt_1232_c_mutex_);
MUTEX_LOCK(_outputPort_3_Daemon_series_block_stmt_1232_c_mutex_);
_outputPort_3_Daemon_inner_inarg_prep_macro__; 
_outputPort_3_Daemon_branch_block_stmt_1233_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 333
__declare_static_bit_vector(konst_1503,1);\
bit_vector_clear(&konst_1503);\
konst_1503.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 335
_outputPort_3_Daemon_merge_stmt_1235_c_preamble_macro_; 
// 			$phi down_counter := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_3_Daemon_phi_stmt_1236_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1241_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1246_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1251_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1256_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1261_c_macro_; 
// 			$phi priority_queue := 			  ONE_3 $on   $entry 			  next_priority_queue $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1265_c_macro_; 
_outputPort_3_Daemon_merge_stmt_1235_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1274_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1279_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1284_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1289_c_macro_; 
// $report (outputPort_3_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 priority_queue priority_queue 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_3_Daemon_stmt_1301_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1330_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_queue p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_queue ) 
_outputPort_3_Daemon_call_stmt_1340_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1349_c_macro_; 
// 			$volatile new_packet_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1382_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (new_packet_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_3_Daemon_assign_stmt_1395_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1403_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1411_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1419_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1427_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1460_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1489_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_3_Daemon_assign_stmt_1493_c_macro_; 
// $report (outputPort_3_Daemon send_information 			 started_new_packet started_new_packet 			 next_active_packet next_active_packet 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid )
_outputPort_3_Daemon_stmt_1501_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1503);\
konst_1503.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1503)) break;
} 
}
_outputPort_3_Daemon_branch_block_stmt_1233_c_export_apply_macro_;
}
_outputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_3_Daemon_series_block_stmt_1232_c_mutex_);
}
void outputPort_3_Daemon()
{
_outputPort_3_Daemon_outer_arg_decl_macro__;
_outputPort_3_Daemon_();
_outputPort_3_Daemon_outer_op_xfer_macro__;
}


void _outputPort_4_Daemon_()
{
MUTEX_DECL(_outputPort_4_Daemon_series_block_stmt_1506_c_mutex_);
MUTEX_LOCK(_outputPort_4_Daemon_series_block_stmt_1506_c_mutex_);
_outputPort_4_Daemon_inner_inarg_prep_macro__; 
_outputPort_4_Daemon_branch_block_stmt_1507_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 379
__declare_static_bit_vector(konst_1777,1);\
bit_vector_clear(&konst_1777);\
konst_1777.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 381
_outputPort_4_Daemon_merge_stmt_1509_c_preamble_macro_; 
// 			$phi down_counter := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_4_Daemon_phi_stmt_1510_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1515_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1520_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1525_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1530_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1535_c_macro_; 
// 			$phi priority_queue := 			  ONE_3 $on   $entry 			  next_priority_queue $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1539_c_macro_; 
_outputPort_4_Daemon_merge_stmt_1509_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1548_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1553_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1558_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1563_c_macro_; 
// $report (outputPort_4_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 priority_queue priority_queue 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_4_Daemon_stmt_1575_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1604_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_queue p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_queue ) 
_outputPort_4_Daemon_call_stmt_1614_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1623_c_macro_; 
// 			$volatile new_packet_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1656_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (new_packet_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_4_Daemon_assign_stmt_1669_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1677_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1685_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1693_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1701_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1734_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1763_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_4_Daemon_assign_stmt_1767_c_macro_; 
// $report (outputPort_4_Daemon send_information 			 started_new_packet started_new_packet 			 next_active_packet next_active_packet 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid )
_outputPort_4_Daemon_stmt_1775_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1777);\
konst_1777.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1777)) break;
} 
}
_outputPort_4_Daemon_branch_block_stmt_1507_c_export_apply_macro_;
}
_outputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_4_Daemon_series_block_stmt_1506_c_mutex_);
}
void outputPort_4_Daemon()
{
_outputPort_4_Daemon_outer_arg_decl_macro__;
_outputPort_4_Daemon_();
_outputPort_4_Daemon_outer_op_xfer_macro__;
}


void _prioritySelect_(bit_vector* __pdown_counter, bit_vector* __pactive_packet, bit_vector* __ppriority_queue, bit_vector* __pp1_valid, bit_vector* __pp2_valid, bit_vector* __pp3_valid, bit_vector* __pp4_valid, bit_vector*  __pnext_active_packet, bit_vector*  __pnext_priority_queue)
{
MUTEX_DECL(_prioritySelect_series_block_stmt_508_c_mutex_);
MUTEX_LOCK(_prioritySelect_series_block_stmt_508_c_mutex_);
_prioritySelect_inner_inarg_prep_macro__; 
// 	d0 := (down_counter == 0 ) $buffering 1
_prioritySelect_assign_stmt_522_c_macro_; 
// 	select_1 := ((d0 & p1_valid) & ((priority_queue == 1 ) | ((( ~ p2_valid ) & ( ~ p3_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_540_c_macro_; 
// 	select_2 := ((d0 & p2_valid) & ((priority_queue == 2 ) | ((( ~ p1_valid ) & ( ~ p3_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_558_c_macro_; 
// 	select_3 := ((d0 & p3_valid) & ((priority_queue == 3 ) | ((( ~ p1_valid ) & ( ~ p2_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_576_c_macro_; 
// 	select_4 := ((d0 & p4_valid) & ((priority_queue == 4 ) | ((( ~ p1_valid ) & ( ~ p2_valid )) & ( ~ p3_valid )))) $buffering 1
_prioritySelect_assign_stmt_594_c_macro_; 
// 	next_active_packet := (((( $mux ( ~ d0 ) active_packet  _b0  )  | ( $mux select_1 1   _b0  ) ) | ( $mux select_2 2   _b0  ) ) | (( $mux select_3 3   _b0  )  | ( $mux select_4 4   _b0  ) )) $buffering 1
_prioritySelect_assign_stmt_621_c_macro_; 
// 	$volatile temp_next_priority_queue := (((( $mux (priority_queue == 0 ) 1   _b0  )  | ( $mux (priority_queue == 1 ) 2   _b0  ) ) | ( $mux (priority_queue == 2 ) 3   _b0  ) ) | (( $mux (priority_queue == 3 ) 4   _b0  )  | ( $mux (priority_queue == 4 ) 1   _b0  ) )) $buffering 1
_prioritySelect_assign_stmt_657_c_macro_; 
// 	$volatile is_select_done := ((select_1 | select_2) | (select_3 | select_4)) $buffering 1
_prioritySelect_assign_stmt_666_c_macro_; 
// 	next_priority_queue := ( $mux is_select_done temp_next_priority_queue  priority_queue )  $buffering 1
_prioritySelect_assign_stmt_672_c_macro_; 
// $report (prioritySelect_function d0 	 select_1 select_1 	 select_2 select_2 	 select_3 select_3 	 select_4 select_4 	 next_active_packet next_active_packet 	 priority_queue priority_queue 	 temp_next_priority_queue temp_next_priority_queue 	 is_select_done is_select_done 	 next_priority_queue next_priority_queue )
_prioritySelect_stmt_682_c_macro_; 
_prioritySelect_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_prioritySelect_series_block_stmt_508_c_mutex_);
}
DEFINE_THREAD(inputPort_1_Daemon);
PTHREAD_DECL(inputPort_1_Daemon);
DEFINE_THREAD(inputPort_2_Daemon);
PTHREAD_DECL(inputPort_2_Daemon);
DEFINE_THREAD(inputPort_3_Daemon);
PTHREAD_DECL(inputPort_3_Daemon);
DEFINE_THREAD(inputPort_4_Daemon);
PTHREAD_DECL(inputPort_4_Daemon);
DEFINE_THREAD(outputPort_1_Daemon);
PTHREAD_DECL(outputPort_1_Daemon);
DEFINE_THREAD(outputPort_2_Daemon);
PTHREAD_DECL(outputPort_2_Daemon);
DEFINE_THREAD(outputPort_3_Daemon);
PTHREAD_DECL(outputPort_3_Daemon);
DEFINE_THREAD(outputPort_4_Daemon);
PTHREAD_DECL(outputPort_4_Daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(inputPort_1_Daemon);
PTHREAD_CREATE(inputPort_2_Daemon);
PTHREAD_CREATE(inputPort_3_Daemon);
PTHREAD_CREATE(inputPort_4_Daemon);
PTHREAD_CREATE(outputPort_1_Daemon);
PTHREAD_CREATE(outputPort_2_Daemon);
PTHREAD_CREATE(outputPort_3_Daemon);
PTHREAD_CREATE(outputPort_4_Daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(inputPort_1_Daemon);
PTHREAD_CANCEL(inputPort_2_Daemon);
PTHREAD_CANCEL(inputPort_3_Daemon);
PTHREAD_CANCEL(inputPort_4_Daemon);
PTHREAD_CANCEL(outputPort_1_Daemon);
PTHREAD_CANCEL(outputPort_2_Daemon);
PTHREAD_CANCEL(outputPort_3_Daemon);
PTHREAD_CANCEL(outputPort_4_Daemon);
}
