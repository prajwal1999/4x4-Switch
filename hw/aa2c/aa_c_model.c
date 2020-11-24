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
MUTEX_DECL(_global_storage_initializer__series_block_stmt_57_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_57_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_57_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _inputPort_1_Daemon_()
{
MUTEX_DECL(_inputPort_1_Daemon_series_block_stmt_60_c_mutex_);
MUTEX_LOCK(_inputPort_1_Daemon_series_block_stmt_60_c_mutex_);
_inputPort_1_Daemon_inner_inarg_prep_macro__; 
_inputPort_1_Daemon_branch_block_stmt_61_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 72
__declare_static_bit_vector(konst_153,1);\
bit_vector_clear(&konst_153);\
konst_153.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 74
_inputPort_1_Daemon_merge_stmt_63_c_preamble_macro_; 
// 			$phi count_down := 			  next_count_down $on   $loopback 			  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_inputPort_1_Daemon_phi_stmt_64_c_macro_; 
// 			$phi input_word := 			  in_data_1 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_1_Daemon_phi_stmt_70_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_1_Daemon_phi_stmt_73_c_macro_; 
_inputPort_1_Daemon_merge_stmt_63_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_82_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_86_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_90_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_94_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_1_Daemon_assign_stmt_104_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_1_Daemon_assign_stmt_110_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_1_Daemon_assign_stmt_115_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_120_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_1_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_124_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_129_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_1_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_133_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_138_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_1_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_142_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_147_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_1_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_151_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_153);\
konst_153.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_153)) break;
} 
}
_inputPort_1_Daemon_branch_block_stmt_61_c_export_apply_macro_;
}
_inputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_1_Daemon_series_block_stmt_60_c_mutex_);
}
void inputPort_1_Daemon()
{
_inputPort_1_Daemon_outer_arg_decl_macro__;
_inputPort_1_Daemon_();
_inputPort_1_Daemon_outer_op_xfer_macro__;
}


void _inputPort_2_Daemon_()
{
MUTEX_DECL(_inputPort_2_Daemon_series_block_stmt_156_c_mutex_);
MUTEX_LOCK(_inputPort_2_Daemon_series_block_stmt_156_c_mutex_);
_inputPort_2_Daemon_inner_inarg_prep_macro__; 
_inputPort_2_Daemon_branch_block_stmt_157_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 107
__declare_static_bit_vector(konst_248,1);\
bit_vector_clear(&konst_248);\
konst_248.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 109
_inputPort_2_Daemon_merge_stmt_159_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_2_Daemon_phi_stmt_160_c_macro_; 
// 			$phi input_word := 			  in_data_2 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_2_Daemon_phi_stmt_165_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_2_Daemon_phi_stmt_168_c_macro_; 
_inputPort_2_Daemon_merge_stmt_159_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_177_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_181_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_185_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_189_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_2_Daemon_assign_stmt_199_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_2_Daemon_assign_stmt_205_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_2_Daemon_assign_stmt_210_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_215_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_2_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_219_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_224_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_2_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_228_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_233_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_2_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_237_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_242_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_2_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_246_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_248);\
konst_248.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_248)) break;
} 
}
_inputPort_2_Daemon_branch_block_stmt_157_c_export_apply_macro_;
}
_inputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_2_Daemon_series_block_stmt_156_c_mutex_);
}
void inputPort_2_Daemon()
{
_inputPort_2_Daemon_outer_arg_decl_macro__;
_inputPort_2_Daemon_();
_inputPort_2_Daemon_outer_op_xfer_macro__;
}


void _inputPort_3_Daemon_()
{
MUTEX_DECL(_inputPort_3_Daemon_series_block_stmt_251_c_mutex_);
MUTEX_LOCK(_inputPort_3_Daemon_series_block_stmt_251_c_mutex_);
_inputPort_3_Daemon_inner_inarg_prep_macro__; 
_inputPort_3_Daemon_branch_block_stmt_252_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 142
__declare_static_bit_vector(konst_343,1);\
bit_vector_clear(&konst_343);\
konst_343.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 144
_inputPort_3_Daemon_merge_stmt_254_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_3_Daemon_phi_stmt_255_c_macro_; 
// 			$phi input_word := 			  in_data_3 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_3_Daemon_phi_stmt_260_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_3_Daemon_phi_stmt_263_c_macro_; 
_inputPort_3_Daemon_merge_stmt_254_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_272_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_276_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_280_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_284_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_3_Daemon_assign_stmt_294_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_3_Daemon_assign_stmt_300_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_3_Daemon_assign_stmt_305_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_310_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_3_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_314_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_319_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_3_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_323_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_328_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_3_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_332_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_337_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_3_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_341_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_343);\
konst_343.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_343)) break;
} 
}
_inputPort_3_Daemon_branch_block_stmt_252_c_export_apply_macro_;
}
_inputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_3_Daemon_series_block_stmt_251_c_mutex_);
}
void inputPort_3_Daemon()
{
_inputPort_3_Daemon_outer_arg_decl_macro__;
_inputPort_3_Daemon_();
_inputPort_3_Daemon_outer_op_xfer_macro__;
}


void _inputPort_4_Daemon_()
{
MUTEX_DECL(_inputPort_4_Daemon_series_block_stmt_346_c_mutex_);
MUTEX_LOCK(_inputPort_4_Daemon_series_block_stmt_346_c_mutex_);
_inputPort_4_Daemon_inner_inarg_prep_macro__; 
_inputPort_4_Daemon_branch_block_stmt_347_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 177
__declare_static_bit_vector(konst_438,1);\
bit_vector_clear(&konst_438);\
konst_438.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 179
_inputPort_4_Daemon_merge_stmt_349_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_4_Daemon_phi_stmt_350_c_macro_; 
// 			$phi input_word := 			  in_data_4 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_4_Daemon_phi_stmt_355_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_4_Daemon_phi_stmt_358_c_macro_; 
_inputPort_4_Daemon_merge_stmt_349_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_367_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_371_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_375_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_379_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_4_Daemon_assign_stmt_389_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_4_Daemon_assign_stmt_395_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_4_Daemon_assign_stmt_400_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_405_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_4_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_409_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_414_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_4_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_418_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_423_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_4_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_427_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_432_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_4_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_436_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_438);\
konst_438.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_438)) break;
} 
}
_inputPort_4_Daemon_branch_block_stmt_347_c_export_apply_macro_;
}
_inputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_4_Daemon_series_block_stmt_346_c_mutex_);
}
void inputPort_4_Daemon()
{
_inputPort_4_Daemon_outer_arg_decl_macro__;
_inputPort_4_Daemon_();
_inputPort_4_Daemon_outer_op_xfer_macro__;
}


void _outputPort_1_Daemon_()
{
MUTEX_DECL(_outputPort_1_Daemon_series_block_stmt_579_c_mutex_);
MUTEX_LOCK(_outputPort_1_Daemon_series_block_stmt_579_c_mutex_);
_outputPort_1_Daemon_inner_inarg_prep_macro__; 
_outputPort_1_Daemon_branch_block_stmt_580_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 225
__declare_static_bit_vector(konst_799,1);\
bit_vector_clear(&konst_799);\
konst_799.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 227
_outputPort_1_Daemon_merge_stmt_582_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_1_Daemon_phi_stmt_583_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_587_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_592_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_597_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_602_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_607_c_macro_; 
// 			$phi priority_pkt := 			  ZERO_3 $on   $entry 			  next_priority_pkt $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_611_c_macro_; 
_outputPort_1_Daemon_merge_stmt_582_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_620_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_625_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_630_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_635_c_macro_; 
// $report (outputPort_1_Daemon state_summary 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_1_Daemon_stmt_644_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_673_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_pkt p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_pkt ) 
_outputPort_1_Daemon_call_stmt_683_c_macro_; 
// 			$volatile started_new_packet := (next_active_packet != 0 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_688_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_1_Daemon_assign_stmt_699_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (active_packet == 1 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_707_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (active_packet == 2 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_715_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (active_packet == 3 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_723_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (active_packet == 4 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_731_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_764_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_793_c_macro_; 
// 			$guard (send_flag) out_data_1 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_1_Daemon_assign_stmt_797_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_799);\
konst_799.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_799)) break;
} 
}
_outputPort_1_Daemon_branch_block_stmt_580_c_export_apply_macro_;
}
_outputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_1_Daemon_series_block_stmt_579_c_mutex_);
}
void outputPort_1_Daemon()
{
_outputPort_1_Daemon_outer_arg_decl_macro__;
_outputPort_1_Daemon_();
_outputPort_1_Daemon_outer_op_xfer_macro__;
}


void _outputPort_2_Daemon_()
{
MUTEX_DECL(_outputPort_2_Daemon_series_block_stmt_802_c_mutex_);
MUTEX_LOCK(_outputPort_2_Daemon_series_block_stmt_802_c_mutex_);
_outputPort_2_Daemon_inner_inarg_prep_macro__; 
_outputPort_2_Daemon_branch_block_stmt_803_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 269
__declare_static_bit_vector(konst_1022,1);\
bit_vector_clear(&konst_1022);\
konst_1022.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 271
_outputPort_2_Daemon_merge_stmt_805_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_2_Daemon_phi_stmt_806_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_810_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_815_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_820_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_825_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_830_c_macro_; 
// 			$phi priority_pkt := 			  ZERO_3 $on   $entry 			  next_priority_pkt $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_834_c_macro_; 
_outputPort_2_Daemon_merge_stmt_805_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_843_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_848_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_853_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_858_c_macro_; 
// $report (outputPort_2_Daemon state_summary 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_2_Daemon_stmt_867_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_896_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_pkt p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_pkt ) 
_outputPort_2_Daemon_call_stmt_906_c_macro_; 
// 			$volatile started_new_packet := (next_active_packet != 0 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_911_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_2_Daemon_assign_stmt_922_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (active_packet == 1 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_930_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (active_packet == 2 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_938_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (active_packet == 3 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_946_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (active_packet == 4 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_954_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_987_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1016_c_macro_; 
// 			$guard (send_flag) out_data_2 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_2_Daemon_assign_stmt_1020_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1022);\
konst_1022.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1022)) break;
} 
}
_outputPort_2_Daemon_branch_block_stmt_803_c_export_apply_macro_;
}
_outputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_2_Daemon_series_block_stmt_802_c_mutex_);
}
void outputPort_2_Daemon()
{
_outputPort_2_Daemon_outer_arg_decl_macro__;
_outputPort_2_Daemon_();
_outputPort_2_Daemon_outer_op_xfer_macro__;
}


void _outputPort_3_Daemon_()
{
MUTEX_DECL(_outputPort_3_Daemon_series_block_stmt_1025_c_mutex_);
MUTEX_LOCK(_outputPort_3_Daemon_series_block_stmt_1025_c_mutex_);
_outputPort_3_Daemon_inner_inarg_prep_macro__; 
_outputPort_3_Daemon_branch_block_stmt_1026_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 313
__declare_static_bit_vector(konst_1245,1);\
bit_vector_clear(&konst_1245);\
konst_1245.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 315
_outputPort_3_Daemon_merge_stmt_1028_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_3_Daemon_phi_stmt_1029_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1033_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1038_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1043_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1048_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1053_c_macro_; 
// 			$phi priority_pkt := 			  ZERO_3 $on   $entry 			  next_priority_pkt $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1057_c_macro_; 
_outputPort_3_Daemon_merge_stmt_1028_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1066_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1071_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1076_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1081_c_macro_; 
// $report (outputPort_3_Daemon state_summary 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_3_Daemon_stmt_1090_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1119_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_pkt p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_pkt ) 
_outputPort_3_Daemon_call_stmt_1129_c_macro_; 
// 			$volatile started_new_packet := (next_active_packet != 0 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1134_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_3_Daemon_assign_stmt_1145_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (active_packet == 1 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1153_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (active_packet == 2 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1161_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (active_packet == 3 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1169_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (active_packet == 4 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1177_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1210_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1239_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_3_Daemon_assign_stmt_1243_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1245);\
konst_1245.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1245)) break;
} 
}
_outputPort_3_Daemon_branch_block_stmt_1026_c_export_apply_macro_;
}
_outputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_3_Daemon_series_block_stmt_1025_c_mutex_);
}
void outputPort_3_Daemon()
{
_outputPort_3_Daemon_outer_arg_decl_macro__;
_outputPort_3_Daemon_();
_outputPort_3_Daemon_outer_op_xfer_macro__;
}


void _outputPort_4_Daemon_()
{
MUTEX_DECL(_outputPort_4_Daemon_series_block_stmt_1248_c_mutex_);
MUTEX_LOCK(_outputPort_4_Daemon_series_block_stmt_1248_c_mutex_);
_outputPort_4_Daemon_inner_inarg_prep_macro__; 
_outputPort_4_Daemon_branch_block_stmt_1249_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch2x2.linked.aa, line 357
__declare_static_bit_vector(konst_1468,1);\
bit_vector_clear(&konst_1468);\
konst_1468.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch2x2.linked.aa, line 359
_outputPort_4_Daemon_merge_stmt_1251_c_preamble_macro_; 
// 			$phi down_counter := 			  ZERO_8 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<8>
_outputPort_4_Daemon_phi_stmt_1252_c_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1256_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1261_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1266_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1271_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1276_c_macro_; 
// 			$phi priority_pkt := 			  ZERO_3 $on   $entry 			  next_priority_pkt $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1280_c_macro_; 
_outputPort_4_Daemon_merge_stmt_1251_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1289_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1294_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1299_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1304_c_macro_; 
// $report (outputPort_4_Daemon state_summary 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_4_Daemon_stmt_1313_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1342_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet priority_pkt p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_priority_pkt ) 
_outputPort_4_Daemon_call_stmt_1352_c_macro_; 
// 			$volatile started_new_packet := (next_active_packet != 0 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1357_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet 63   ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_4_Daemon_assign_stmt_1368_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (active_packet == 1 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1376_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (active_packet == 2 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1384_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (active_packet == 3 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1392_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (active_packet == 4 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1400_c_macro_; 
// 			$volatile data_to_out := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 31 0 )   _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1433_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1462_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_4_Daemon_assign_stmt_1466_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1468);\
konst_1468.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1468)) break;
} 
}
_outputPort_4_Daemon_branch_block_stmt_1249_c_export_apply_macro_;
}
_outputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_4_Daemon_series_block_stmt_1248_c_mutex_);
}
void outputPort_4_Daemon()
{
_outputPort_4_Daemon_outer_arg_decl_macro__;
_outputPort_4_Daemon_();
_outputPort_4_Daemon_outer_op_xfer_macro__;
}


void _prioritySelect_(bit_vector* __pdown_counter, bit_vector* __pactive_packet, bit_vector* __ppriority_pkt, bit_vector* __pp1_valid, bit_vector* __pp2_valid, bit_vector* __pp3_valid, bit_vector* __pp4_valid, bit_vector*  __pnext_active_packet, bit_vector*  __pnext_priority_pkt)
{
MUTEX_DECL(_prioritySelect_series_block_stmt_441_c_mutex_);
MUTEX_LOCK(_prioritySelect_series_block_stmt_441_c_mutex_);
_prioritySelect_inner_inarg_prep_macro__; 
// 	d0 := (down_counter == 0 ) $buffering 1
_prioritySelect_assign_stmt_455_c_macro_; 
// 	select_1 := ((d0 & p1_valid) & ((priority_pkt == 1 ) | ((( ~ p2_valid ) & ( ~ p3_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_473_c_macro_; 
// 	select_2 := ((d0 & p2_valid) & ((priority_pkt == 2 ) | ((( ~ p1_valid ) & ( ~ p3_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_491_c_macro_; 
// 	select_3 := ((d0 & p3_valid) & ((priority_pkt == 3 ) | ((( ~ p1_valid ) & ( ~ p2_valid )) & ( ~ p4_valid )))) $buffering 1
_prioritySelect_assign_stmt_509_c_macro_; 
// 	select_4 := ((d0 & p4_valid) & ((priority_pkt == 4 ) | ((( ~ p1_valid ) & ( ~ p2_valid )) & ( ~ p3_valid )))) $buffering 1
_prioritySelect_assign_stmt_527_c_macro_; 
// 	next_active_packet := ((( $mux select_1 1   _b0  )  | ( $mux select_2 2   _b0  ) ) | (( $mux select_3 3   _b0  )  | ( $mux select_4 4   _b0  ) )) $buffering 1
_prioritySelect_assign_stmt_548_c_macro_; 
// 	next_priority_pkt := ((( $mux (priority_pkt == 1 ) 2   _b0  )  | ( $mux (priority_pkt == 2 ) 3   _b0  ) ) | (( $mux (priority_pkt == 3 ) 4   _b0  )  | ( $mux (priority_pkt == 4 ) 1   _b0  ) )) $buffering 1
_prioritySelect_assign_stmt_577_c_macro_; 
_prioritySelect_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_prioritySelect_series_block_stmt_441_c_mutex_);
}
DEFINE_THREAD(inputPort_1_Daemon);
PTHREAD_DECL(inputPort_1_Daemon);
DEFINE_THREAD(inputPort_2_Daemon);
PTHREAD_DECL(inputPort_2_Daemon);
DEFINE_THREAD(outputPort_1_Daemon);
PTHREAD_DECL(outputPort_1_Daemon);
DEFINE_THREAD(outputPort_2_Daemon);
PTHREAD_DECL(outputPort_2_Daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(inputPort_1_Daemon);
PTHREAD_CREATE(inputPort_2_Daemon);
PTHREAD_CREATE(outputPort_1_Daemon);
PTHREAD_CREATE(outputPort_2_Daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(inputPort_1_Daemon);
PTHREAD_CANCEL(inputPort_2_Daemon);
PTHREAD_CANCEL(outputPort_1_Daemon);
PTHREAD_CANCEL(outputPort_2_Daemon);
}
