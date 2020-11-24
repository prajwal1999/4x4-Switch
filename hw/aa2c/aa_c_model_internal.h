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
#define _inputPort_1_Daemon_branch_block_stmt_61_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
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


#define _inputPort_1_Daemon_merge_stmt_63_c_preamble_macro_ uint8_t merge_stmt_63_entry_flag;\
merge_stmt_63_entry_flag = do_while_entry_flag;\
goto merge_stmt_63_run;\
merge_stmt_63_run: ;\

#define _inputPort_1_Daemon_phi_stmt_64_c_macro_ __declare_static_bit_vector(konst_68,16);\
bit_vector_clear(&konst_68);\
__declare_static_bit_vector(type_cast_69,16);\
bit_vector_clear(&type_cast_69);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_68,16);\
bit_vector_clear(&konst_68);\
__declare_static_bit_vector(type_cast_69,16);\
bit_vector_clear(&type_cast_69);\
bit_vector_clear(&konst_68);\
bit_vector_bitcast_to_bit_vector( &(type_cast_69), &(konst_68));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_69));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_70_c_macro_ __declare_static_bit_vector(RPIPE_in_data_1_72,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_72));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_72));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_1_72,32);\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_72));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_72));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_73_c_macro_ __declare_static_bit_vector(konst_75,8);\
bit_vector_clear(&konst_75);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_75,8);\
bit_vector_clear(&konst_75);\
bit_vector_clear(&konst_75);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_75));\
}\
;
;

#define _inputPort_1_Daemon_merge_stmt_63_c_postamble_macro_ merge_stmt_63_entry_flag = 0;

#define _inputPort_1_Daemon_assign_stmt_82_c_macro_ __declare_static_bit_vector(konst_80,16);\
bit_vector_clear(&konst_80);\
__declare_static_bit_vector(EQ_u16_u1_81,1);\
bit_vector_clear(&konst_80);\
bit_vector_equal(0, &(count_down), &(konst_80), &(EQ_u16_u1_81));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_81));\
;

#define _inputPort_1_Daemon_assign_stmt_86_c_macro_ __declare_static_bit_vector(slice_85,8);\
bit_vector_slice(&(input_word), &(slice_85), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_85));\
;

#define _inputPort_1_Daemon_assign_stmt_90_c_macro_ __declare_static_bit_vector(slice_89,16);\
bit_vector_slice(&(input_word), &(slice_89), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_89));\
;

#define _inputPort_1_Daemon_assign_stmt_94_c_macro_ __declare_static_bit_vector(slice_93,8);\
bit_vector_slice(&(input_word), &(slice_93), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_93));\
;

#define _inputPort_1_Daemon_assign_stmt_104_c_macro_ __declare_static_bit_vector(konst_98,16);\
bit_vector_clear(&konst_98);\
konst_98.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_99,16);\
__declare_static_bit_vector(konst_101,16);\
bit_vector_clear(&konst_101);\
konst_101.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_102,16);\
__declare_static_bit_vector(MUX_103,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_98);\
konst_98.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_98), &(SUB_u16_u16_99));\
bit_vector_cast_to_bit_vector(0, &(MUX_103), &(SUB_u16_u16_99));\
}else {bit_vector_clear(&konst_101);\
konst_101.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_101), &(SUB_u16_u16_102));\
bit_vector_cast_to_bit_vector(0, &(MUX_103), &(SUB_u16_u16_102));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_103));\
;

#define _inputPort_1_Daemon_assign_stmt_110_c_macro_ __declare_static_bit_vector(MUX_109,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_109), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_109), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_109));\
;

#define _inputPort_1_Daemon_assign_stmt_115_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_114,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_114));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_114));\
;

#define _inputPort_1_Daemon_assign_stmt_120_c_macro_ __declare_static_bit_vector(konst_118,8);\
bit_vector_clear(&konst_118);\
konst_118.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_119,1);\
bit_vector_clear(&konst_118);\
konst_118.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_118), &(EQ_u8_u1_119));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_119));\
;

#define _inputPort_1_Daemon_assign_stmt_124_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_1_1",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_129_c_macro_ __declare_static_bit_vector(konst_127,8);\
bit_vector_clear(&konst_127);\
konst_127.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_128,1);\
bit_vector_clear(&konst_127);\
konst_127.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_127), &(EQ_u8_u1_128));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_128));\
;

#define _inputPort_1_Daemon_assign_stmt_133_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_1_2",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_138_c_macro_ __declare_static_bit_vector(konst_136,8);\
bit_vector_clear(&konst_136);\
konst_136.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_137,1);\
bit_vector_clear(&konst_136);\
konst_136.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_136), &(EQ_u8_u1_137));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_137));\
;

#define _inputPort_1_Daemon_assign_stmt_142_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_1_3",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_147_c_macro_ __declare_static_bit_vector(konst_145,8);\
bit_vector_clear(&konst_145);\
konst_145.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_146,1);\
bit_vector_clear(&konst_145);\
konst_145.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_145), &(EQ_u8_u1_146));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_146));\
;

#define _inputPort_1_Daemon_assign_stmt_151_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_1_4",&(data_to_outport));\
}
;
;

#define _inputPort_1_Daemon_branch_block_stmt_61_c_export_apply_macro_ ;

#define _inputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_2_Daemon_branch_block_stmt_157_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
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


#define _inputPort_2_Daemon_merge_stmt_159_c_preamble_macro_ uint8_t merge_stmt_159_entry_flag;\
merge_stmt_159_entry_flag = do_while_entry_flag;\
goto merge_stmt_159_run;\
merge_stmt_159_run: ;\

#define _inputPort_2_Daemon_phi_stmt_160_c_macro_ __declare_static_bit_vector(konst_162,16);\
bit_vector_clear(&konst_162);\
__declare_static_bit_vector(type_cast_163,16);\
bit_vector_clear(&type_cast_163);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_162,16);\
bit_vector_clear(&konst_162);\
__declare_static_bit_vector(type_cast_163,16);\
bit_vector_clear(&type_cast_163);\
bit_vector_clear(&konst_162);\
bit_vector_bitcast_to_bit_vector( &(type_cast_163), &(konst_162));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_163));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_165_c_macro_ __declare_static_bit_vector(RPIPE_in_data_2_167,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_167));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_167));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_2_167,32);\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_167));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_167));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_168_c_macro_ __declare_static_bit_vector(konst_170,8);\
bit_vector_clear(&konst_170);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_170,8);\
bit_vector_clear(&konst_170);\
bit_vector_clear(&konst_170);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_170));\
}\
;
;

#define _inputPort_2_Daemon_merge_stmt_159_c_postamble_macro_ merge_stmt_159_entry_flag = 0;

#define _inputPort_2_Daemon_assign_stmt_177_c_macro_ __declare_static_bit_vector(konst_175,16);\
bit_vector_clear(&konst_175);\
__declare_static_bit_vector(EQ_u16_u1_176,1);\
bit_vector_clear(&konst_175);\
bit_vector_equal(0, &(count_down), &(konst_175), &(EQ_u16_u1_176));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_176));\
;

#define _inputPort_2_Daemon_assign_stmt_181_c_macro_ __declare_static_bit_vector(slice_180,8);\
bit_vector_slice(&(input_word), &(slice_180), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_180));\
;

#define _inputPort_2_Daemon_assign_stmt_185_c_macro_ __declare_static_bit_vector(slice_184,16);\
bit_vector_slice(&(input_word), &(slice_184), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_184));\
;

#define _inputPort_2_Daemon_assign_stmt_189_c_macro_ __declare_static_bit_vector(slice_188,8);\
bit_vector_slice(&(input_word), &(slice_188), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_188));\
;

#define _inputPort_2_Daemon_assign_stmt_199_c_macro_ __declare_static_bit_vector(konst_193,16);\
bit_vector_clear(&konst_193);\
konst_193.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_194,16);\
__declare_static_bit_vector(konst_196,16);\
bit_vector_clear(&konst_196);\
konst_196.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_197,16);\
__declare_static_bit_vector(MUX_198,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_193);\
konst_193.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_193), &(SUB_u16_u16_194));\
bit_vector_cast_to_bit_vector(0, &(MUX_198), &(SUB_u16_u16_194));\
}else {bit_vector_clear(&konst_196);\
konst_196.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_196), &(SUB_u16_u16_197));\
bit_vector_cast_to_bit_vector(0, &(MUX_198), &(SUB_u16_u16_197));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_198));\
;

#define _inputPort_2_Daemon_assign_stmt_205_c_macro_ __declare_static_bit_vector(MUX_204,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_204), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_204), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_204));\
;

#define _inputPort_2_Daemon_assign_stmt_210_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_209,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_209));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_209));\
;

#define _inputPort_2_Daemon_assign_stmt_215_c_macro_ __declare_static_bit_vector(konst_213,8);\
bit_vector_clear(&konst_213);\
konst_213.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_214,1);\
bit_vector_clear(&konst_213);\
konst_213.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_213), &(EQ_u8_u1_214));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_214));\
;

#define _inputPort_2_Daemon_assign_stmt_219_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_2_1",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_224_c_macro_ __declare_static_bit_vector(konst_222,8);\
bit_vector_clear(&konst_222);\
konst_222.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_223,1);\
bit_vector_clear(&konst_222);\
konst_222.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_222), &(EQ_u8_u1_223));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_223));\
;

#define _inputPort_2_Daemon_assign_stmt_228_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_2_2",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_233_c_macro_ __declare_static_bit_vector(konst_231,8);\
bit_vector_clear(&konst_231);\
konst_231.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_232,1);\
bit_vector_clear(&konst_231);\
konst_231.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_231), &(EQ_u8_u1_232));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_232));\
;

#define _inputPort_2_Daemon_assign_stmt_237_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_2_3",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_242_c_macro_ __declare_static_bit_vector(konst_240,8);\
bit_vector_clear(&konst_240);\
konst_240.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_241,1);\
bit_vector_clear(&konst_240);\
konst_240.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_240), &(EQ_u8_u1_241));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_241));\
;

#define _inputPort_2_Daemon_assign_stmt_246_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_2_4",&(data_to_outport));\
}
;
;

#define _inputPort_2_Daemon_branch_block_stmt_157_c_export_apply_macro_ ;

#define _inputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_3_Daemon_branch_block_stmt_252_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
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


#define _inputPort_3_Daemon_merge_stmt_254_c_preamble_macro_ uint8_t merge_stmt_254_entry_flag;\
merge_stmt_254_entry_flag = do_while_entry_flag;\
goto merge_stmt_254_run;\
merge_stmt_254_run: ;\

#define _inputPort_3_Daemon_phi_stmt_255_c_macro_ __declare_static_bit_vector(konst_257,16);\
bit_vector_clear(&konst_257);\
__declare_static_bit_vector(type_cast_258,16);\
bit_vector_clear(&type_cast_258);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_257,16);\
bit_vector_clear(&konst_257);\
__declare_static_bit_vector(type_cast_258,16);\
bit_vector_clear(&type_cast_258);\
bit_vector_clear(&konst_257);\
bit_vector_bitcast_to_bit_vector( &(type_cast_258), &(konst_257));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_258));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_260_c_macro_ __declare_static_bit_vector(RPIPE_in_data_3_262,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_262));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_262));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_3_262,32);\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_262));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_262));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_263_c_macro_ __declare_static_bit_vector(konst_265,8);\
bit_vector_clear(&konst_265);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_265,8);\
bit_vector_clear(&konst_265);\
bit_vector_clear(&konst_265);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_265));\
}\
;
;

#define _inputPort_3_Daemon_merge_stmt_254_c_postamble_macro_ merge_stmt_254_entry_flag = 0;

#define _inputPort_3_Daemon_assign_stmt_272_c_macro_ __declare_static_bit_vector(konst_270,16);\
bit_vector_clear(&konst_270);\
__declare_static_bit_vector(EQ_u16_u1_271,1);\
bit_vector_clear(&konst_270);\
bit_vector_equal(0, &(count_down), &(konst_270), &(EQ_u16_u1_271));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_271));\
;

#define _inputPort_3_Daemon_assign_stmt_276_c_macro_ __declare_static_bit_vector(slice_275,8);\
bit_vector_slice(&(input_word), &(slice_275), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_275));\
;

#define _inputPort_3_Daemon_assign_stmt_280_c_macro_ __declare_static_bit_vector(slice_279,16);\
bit_vector_slice(&(input_word), &(slice_279), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_279));\
;

#define _inputPort_3_Daemon_assign_stmt_284_c_macro_ __declare_static_bit_vector(slice_283,8);\
bit_vector_slice(&(input_word), &(slice_283), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_283));\
;

#define _inputPort_3_Daemon_assign_stmt_294_c_macro_ __declare_static_bit_vector(konst_288,16);\
bit_vector_clear(&konst_288);\
konst_288.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_289,16);\
__declare_static_bit_vector(konst_291,16);\
bit_vector_clear(&konst_291);\
konst_291.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_292,16);\
__declare_static_bit_vector(MUX_293,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_288);\
konst_288.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_288), &(SUB_u16_u16_289));\
bit_vector_cast_to_bit_vector(0, &(MUX_293), &(SUB_u16_u16_289));\
}else {bit_vector_clear(&konst_291);\
konst_291.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_291), &(SUB_u16_u16_292));\
bit_vector_cast_to_bit_vector(0, &(MUX_293), &(SUB_u16_u16_292));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_293));\
;

#define _inputPort_3_Daemon_assign_stmt_300_c_macro_ __declare_static_bit_vector(MUX_299,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_299), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_299), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_299));\
;

#define _inputPort_3_Daemon_assign_stmt_305_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_304,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_304));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_304));\
;

#define _inputPort_3_Daemon_assign_stmt_310_c_macro_ __declare_static_bit_vector(konst_308,8);\
bit_vector_clear(&konst_308);\
konst_308.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_309,1);\
bit_vector_clear(&konst_308);\
konst_308.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_308), &(EQ_u8_u1_309));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_309));\
;

#define _inputPort_3_Daemon_assign_stmt_314_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_3_1",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_319_c_macro_ __declare_static_bit_vector(konst_317,8);\
bit_vector_clear(&konst_317);\
konst_317.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_318,1);\
bit_vector_clear(&konst_317);\
konst_317.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_317), &(EQ_u8_u1_318));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_318));\
;

#define _inputPort_3_Daemon_assign_stmt_323_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_3_2",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_328_c_macro_ __declare_static_bit_vector(konst_326,8);\
bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_327,1);\
bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_326), &(EQ_u8_u1_327));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_327));\
;

#define _inputPort_3_Daemon_assign_stmt_332_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_3_3",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_337_c_macro_ __declare_static_bit_vector(konst_335,8);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_336,1);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_335), &(EQ_u8_u1_336));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_336));\
;

#define _inputPort_3_Daemon_assign_stmt_341_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_3_4",&(data_to_outport));\
}
;
;

#define _inputPort_3_Daemon_branch_block_stmt_252_c_export_apply_macro_ ;

#define _inputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_4_Daemon_branch_block_stmt_347_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
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


#define _inputPort_4_Daemon_merge_stmt_349_c_preamble_macro_ uint8_t merge_stmt_349_entry_flag;\
merge_stmt_349_entry_flag = do_while_entry_flag;\
goto merge_stmt_349_run;\
merge_stmt_349_run: ;\

#define _inputPort_4_Daemon_phi_stmt_350_c_macro_ __declare_static_bit_vector(konst_352,16);\
bit_vector_clear(&konst_352);\
__declare_static_bit_vector(type_cast_353,16);\
bit_vector_clear(&type_cast_353);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_352,16);\
bit_vector_clear(&konst_352);\
__declare_static_bit_vector(type_cast_353,16);\
bit_vector_clear(&type_cast_353);\
bit_vector_clear(&konst_352);\
bit_vector_bitcast_to_bit_vector( &(type_cast_353), &(konst_352));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_353));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_355_c_macro_ __declare_static_bit_vector(RPIPE_in_data_4_357,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_357));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_357));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_4_357,32);\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_357));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_357));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_358_c_macro_ __declare_static_bit_vector(konst_360,8);\
bit_vector_clear(&konst_360);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_360,8);\
bit_vector_clear(&konst_360);\
bit_vector_clear(&konst_360);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_360));\
}\
;
;

#define _inputPort_4_Daemon_merge_stmt_349_c_postamble_macro_ merge_stmt_349_entry_flag = 0;

#define _inputPort_4_Daemon_assign_stmt_367_c_macro_ __declare_static_bit_vector(konst_365,16);\
bit_vector_clear(&konst_365);\
__declare_static_bit_vector(EQ_u16_u1_366,1);\
bit_vector_clear(&konst_365);\
bit_vector_equal(0, &(count_down), &(konst_365), &(EQ_u16_u1_366));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_366));\
;

#define _inputPort_4_Daemon_assign_stmt_371_c_macro_ __declare_static_bit_vector(slice_370,8);\
bit_vector_slice(&(input_word), &(slice_370), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_370));\
;

#define _inputPort_4_Daemon_assign_stmt_375_c_macro_ __declare_static_bit_vector(slice_374,16);\
bit_vector_slice(&(input_word), &(slice_374), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_374));\
;

#define _inputPort_4_Daemon_assign_stmt_379_c_macro_ __declare_static_bit_vector(slice_378,8);\
bit_vector_slice(&(input_word), &(slice_378), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_378));\
;

#define _inputPort_4_Daemon_assign_stmt_389_c_macro_ __declare_static_bit_vector(konst_383,16);\
bit_vector_clear(&konst_383);\
konst_383.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_384,16);\
__declare_static_bit_vector(konst_386,16);\
bit_vector_clear(&konst_386);\
konst_386.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_387,16);\
__declare_static_bit_vector(MUX_388,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_383);\
konst_383.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_383), &(SUB_u16_u16_384));\
bit_vector_cast_to_bit_vector(0, &(MUX_388), &(SUB_u16_u16_384));\
}else {bit_vector_clear(&konst_386);\
konst_386.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_386), &(SUB_u16_u16_387));\
bit_vector_cast_to_bit_vector(0, &(MUX_388), &(SUB_u16_u16_387));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_388));\
;

#define _inputPort_4_Daemon_assign_stmt_395_c_macro_ __declare_static_bit_vector(MUX_394,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_394), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_394), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_394));\
;

#define _inputPort_4_Daemon_assign_stmt_400_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_399,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_399));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_399));\
;

#define _inputPort_4_Daemon_assign_stmt_405_c_macro_ __declare_static_bit_vector(konst_403,8);\
bit_vector_clear(&konst_403);\
konst_403.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_404,1);\
bit_vector_clear(&konst_403);\
konst_403.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_403), &(EQ_u8_u1_404));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_404));\
;

#define _inputPort_4_Daemon_assign_stmt_409_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_4_1",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_414_c_macro_ __declare_static_bit_vector(konst_412,8);\
bit_vector_clear(&konst_412);\
konst_412.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_413,1);\
bit_vector_clear(&konst_412);\
konst_412.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_412), &(EQ_u8_u1_413));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_413));\
;

#define _inputPort_4_Daemon_assign_stmt_418_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_4_2",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_423_c_macro_ __declare_static_bit_vector(konst_421,8);\
bit_vector_clear(&konst_421);\
konst_421.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_422,1);\
bit_vector_clear(&konst_421);\
konst_421.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_421), &(EQ_u8_u1_422));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_422));\
;

#define _inputPort_4_Daemon_assign_stmt_427_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_4_3",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_432_c_macro_ __declare_static_bit_vector(konst_430,8);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_431,1);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_430), &(EQ_u8_u1_431));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_431));\
;

#define _inputPort_4_Daemon_assign_stmt_436_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_4_4",&(data_to_outport));\
}
;
;

#define _inputPort_4_Daemon_branch_block_stmt_347_c_export_apply_macro_ ;

#define _inputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_1_Daemon_branch_block_stmt_580_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_pkt,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_pkt,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_1_Daemon_merge_stmt_582_c_preamble_macro_ uint8_t merge_stmt_582_entry_flag;\
merge_stmt_582_entry_flag = do_while_entry_flag;\
goto merge_stmt_582_run;\
merge_stmt_582_run: ;\

#define _outputPort_1_Daemon_phi_stmt_583_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_587_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_591,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_591));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_591));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_592_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_596,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_596));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_596));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_597_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_601,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_601));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_601));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_602_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_606,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_606));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_606));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_607_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_611_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(next_priority_pkt));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(ZERO_3));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_582_c_postamble_macro_ merge_stmt_582_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_620_c_macro_ __declare_static_bit_vector(konst_618,33);\
bit_vector_clear(&konst_618);\
konst_618.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_619,1);\
bit_vector_clear(&konst_618);\
konst_618.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_618), &(BITSEL_u33_u1_619));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_619));\
;

#define _outputPort_1_Daemon_assign_stmt_625_c_macro_ __declare_static_bit_vector(konst_623,33);\
bit_vector_clear(&konst_623);\
konst_623.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_624,1);\
bit_vector_clear(&konst_623);\
konst_623.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_623), &(BITSEL_u33_u1_624));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_624));\
;

#define _outputPort_1_Daemon_assign_stmt_630_c_macro_ __declare_static_bit_vector(konst_628,33);\
bit_vector_clear(&konst_628);\
konst_628.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_629,1);\
bit_vector_clear(&konst_628);\
konst_628.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_628), &(BITSEL_u33_u1_629));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_629));\
;

#define _outputPort_1_Daemon_assign_stmt_635_c_macro_ __declare_static_bit_vector(konst_633,33);\
bit_vector_clear(&konst_633);\
konst_633.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_634,1);\
bit_vector_clear(&konst_633);\
konst_633.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_633), &(BITSEL_u33_u1_634));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_634));\
;

#define _outputPort_1_Daemon_stmt_644_c_macro_ uint32_t _outputPort_1_Daemon_stmt_644_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_644_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_1_Daemon_assign_stmt_673_c_macro_ __declare_static_bit_vector(konst_647,3);\
bit_vector_clear(&konst_647);\
konst_647.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_648,1);\
__declare_static_bit_vector(konst_650,1);\
bit_vector_clear(&konst_650);\
__declare_static_bit_vector(MUX_651,1);\
__declare_static_bit_vector(konst_653,3);\
bit_vector_clear(&konst_653);\
konst_653.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_654,1);\
__declare_static_bit_vector(konst_656,1);\
bit_vector_clear(&konst_656);\
__declare_static_bit_vector(MUX_657,1);\
__declare_static_bit_vector(OR_u1_u1_658,1);\
__declare_static_bit_vector(konst_660,3);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_661,1);\
__declare_static_bit_vector(konst_663,1);\
bit_vector_clear(&konst_663);\
__declare_static_bit_vector(MUX_664,1);\
__declare_static_bit_vector(konst_666,3);\
bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_667,1);\
__declare_static_bit_vector(konst_669,1);\
bit_vector_clear(&konst_669);\
__declare_static_bit_vector(MUX_670,1);\
__declare_static_bit_vector(OR_u1_u1_671,1);\
__declare_static_bit_vector(OR_u1_u1_672,1);\
bit_vector_clear(&konst_647);\
konst_647.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_647), &(EQ_u3_u1_648));\
if (has_undefined_bit(&EQ_u3_u1_648)) {fprintf(stderr, "Error: variable EQ_u3_u1_648 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_648));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_648)){bit_vector_cast_to_bit_vector(0, &(MUX_651), &(p1_valid));\
}else {bit_vector_clear(&konst_650);\
bit_vector_cast_to_bit_vector(0, &(MUX_651), &(konst_650));\
}bit_vector_clear(&konst_653);\
konst_653.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_653), &(EQ_u3_u1_654));\
if (has_undefined_bit(&EQ_u3_u1_654)) {fprintf(stderr, "Error: variable EQ_u3_u1_654 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_654));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_654)){bit_vector_cast_to_bit_vector(0, &(MUX_657), &(p2_valid));\
}else {bit_vector_clear(&konst_656);\
bit_vector_cast_to_bit_vector(0, &(MUX_657), &(konst_656));\
}bit_vector_or(&(MUX_651), &(MUX_657), &(OR_u1_u1_658));\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_660), &(EQ_u3_u1_661));\
if (has_undefined_bit(&EQ_u3_u1_661)) {fprintf(stderr, "Error: variable EQ_u3_u1_661 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_661));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_661)){bit_vector_cast_to_bit_vector(0, &(MUX_664), &(p3_valid));\
}else {bit_vector_clear(&konst_663);\
bit_vector_cast_to_bit_vector(0, &(MUX_664), &(konst_663));\
}bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_666), &(EQ_u3_u1_667));\
if (has_undefined_bit(&EQ_u3_u1_667)) {fprintf(stderr, "Error: variable EQ_u3_u1_667 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_667));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_667)){bit_vector_cast_to_bit_vector(0, &(MUX_670), &(p4_valid));\
}else {bit_vector_clear(&konst_669);\
bit_vector_cast_to_bit_vector(0, &(MUX_670), &(konst_669));\
}bit_vector_or(&(MUX_664), &(MUX_670), &(OR_u1_u1_671));\
bit_vector_or(&(OR_u1_u1_658), &(OR_u1_u1_671), &(OR_u1_u1_672));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_672));\
;

#define _outputPort_1_Daemon_call_stmt_683_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_pkt),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_pkt));\
;

#define _outputPort_1_Daemon_assign_stmt_688_c_macro_ __declare_static_bit_vector(konst_686,3);\
bit_vector_clear(&konst_686);\
__declare_static_bit_vector(NEQ_u3_u1_687,1);\
bit_vector_clear(&konst_686);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_686), &NEQ_u3_u1_687);\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(NEQ_u3_u1_687));\
;

#define _outputPort_1_Daemon_assign_stmt_699_c_macro_ __declare_static_bit_vector(konst_691,8);\
bit_vector_clear(&konst_691);\
konst_691.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_694,8);\
bit_vector_clear(&konst_694);\
konst_694.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_695,8);\
__declare_static_bit_vector(MUX_697,8);\
__declare_static_bit_vector(MUX_698,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_691);\
konst_691.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_698), &(konst_691));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_694);\
konst_694.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_694), &(SUB_u8_u8_695));\
bit_vector_cast_to_bit_vector(0, &(MUX_697), &(SUB_u8_u8_695));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_697), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_698), &(MUX_697));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_698));\
;

#define _outputPort_1_Daemon_assign_stmt_707_c_macro_ __declare_static_bit_vector(NOT_u1_u1_702,1);\
__declare_static_bit_vector(konst_704,3);\
bit_vector_clear(&konst_704);\
konst_704.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_705,1);\
__declare_static_bit_vector(OR_u1_u1_706,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_702));\
bit_vector_clear(&konst_704);\
konst_704.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_704), &(EQ_u3_u1_705));\
bit_vector_or(&(NOT_u1_u1_702), &(EQ_u3_u1_705), &(OR_u1_u1_706));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_706));\
;

#define _outputPort_1_Daemon_assign_stmt_715_c_macro_ __declare_static_bit_vector(NOT_u1_u1_710,1);\
__declare_static_bit_vector(konst_712,3);\
bit_vector_clear(&konst_712);\
konst_712.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_713,1);\
__declare_static_bit_vector(OR_u1_u1_714,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_710));\
bit_vector_clear(&konst_712);\
konst_712.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_712), &(EQ_u3_u1_713));\
bit_vector_or(&(NOT_u1_u1_710), &(EQ_u3_u1_713), &(OR_u1_u1_714));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_714));\
;

#define _outputPort_1_Daemon_assign_stmt_723_c_macro_ __declare_static_bit_vector(NOT_u1_u1_718,1);\
__declare_static_bit_vector(konst_720,3);\
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_721,1);\
__declare_static_bit_vector(OR_u1_u1_722,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_718));\
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_720), &(EQ_u3_u1_721));\
bit_vector_or(&(NOT_u1_u1_718), &(EQ_u3_u1_721), &(OR_u1_u1_722));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_722));\
;

#define _outputPort_1_Daemon_assign_stmt_731_c_macro_ __declare_static_bit_vector(NOT_u1_u1_726,1);\
__declare_static_bit_vector(konst_728,3);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_729,1);\
__declare_static_bit_vector(OR_u1_u1_730,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_726));\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_728), &(EQ_u3_u1_729));\
bit_vector_or(&(NOT_u1_u1_726), &(EQ_u3_u1_729), &(OR_u1_u1_730));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_730));\
;

#define _outputPort_1_Daemon_assign_stmt_764_c_macro_ __declare_static_bit_vector(konst_734,3);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_735,1);\
__declare_static_bit_vector(slice_737,32);\
__declare_static_bit_vector(konst_738,32);\
bit_vector_clear(&konst_738);\
__declare_static_bit_vector(MUX_739,32);\
__declare_static_bit_vector(konst_741,3);\
bit_vector_clear(&konst_741);\
konst_741.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_742,1);\
__declare_static_bit_vector(slice_744,32);\
__declare_static_bit_vector(konst_745,32);\
bit_vector_clear(&konst_745);\
__declare_static_bit_vector(MUX_746,32);\
__declare_static_bit_vector(OR_u32_u32_747,32);\
__declare_static_bit_vector(konst_749,3);\
bit_vector_clear(&konst_749);\
konst_749.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_750,1);\
__declare_static_bit_vector(slice_752,32);\
__declare_static_bit_vector(konst_753,32);\
bit_vector_clear(&konst_753);\
__declare_static_bit_vector(MUX_754,32);\
__declare_static_bit_vector(konst_756,3);\
bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_757,1);\
__declare_static_bit_vector(slice_759,32);\
__declare_static_bit_vector(konst_760,32);\
bit_vector_clear(&konst_760);\
__declare_static_bit_vector(MUX_761,32);\
__declare_static_bit_vector(OR_u32_u32_762,32);\
__declare_static_bit_vector(OR_u32_u32_763,32);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_734), &(EQ_u3_u1_735));\
if (has_undefined_bit(&EQ_u3_u1_735)) {fprintf(stderr, "Error: variable EQ_u3_u1_735 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_735));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_735)){bit_vector_slice(&(pkt_1_e_word), &(slice_737), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_739), &(slice_737));\
}else {bit_vector_clear(&konst_738);\
bit_vector_cast_to_bit_vector(0, &(MUX_739), &(konst_738));\
}bit_vector_clear(&konst_741);\
konst_741.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_741), &(EQ_u3_u1_742));\
if (has_undefined_bit(&EQ_u3_u1_742)) {fprintf(stderr, "Error: variable EQ_u3_u1_742 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_742));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_742)){bit_vector_slice(&(pkt_2_e_word), &(slice_744), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_746), &(slice_744));\
}else {bit_vector_clear(&konst_745);\
bit_vector_cast_to_bit_vector(0, &(MUX_746), &(konst_745));\
}bit_vector_or(&(MUX_739), &(MUX_746), &(OR_u32_u32_747));\
bit_vector_clear(&konst_749);\
konst_749.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_749), &(EQ_u3_u1_750));\
if (has_undefined_bit(&EQ_u3_u1_750)) {fprintf(stderr, "Error: variable EQ_u3_u1_750 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_750));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_750)){bit_vector_slice(&(pkt_3_e_word), &(slice_752), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_754), &(slice_752));\
}else {bit_vector_clear(&konst_753);\
bit_vector_cast_to_bit_vector(0, &(MUX_754), &(konst_753));\
}bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_756), &(EQ_u3_u1_757));\
if (has_undefined_bit(&EQ_u3_u1_757)) {fprintf(stderr, "Error: variable EQ_u3_u1_757 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_757));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_757)){bit_vector_slice(&(pkt_4_e_word), &(slice_759), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_761), &(slice_759));\
}else {bit_vector_clear(&konst_760);\
bit_vector_cast_to_bit_vector(0, &(MUX_761), &(konst_760));\
}bit_vector_or(&(MUX_754), &(MUX_761), &(OR_u32_u32_762));\
bit_vector_or(&(OR_u32_u32_747), &(OR_u32_u32_762), &(OR_u32_u32_763));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_763));\
;

#define _outputPort_1_Daemon_assign_stmt_793_c_macro_ __declare_static_bit_vector(konst_767,3);\
bit_vector_clear(&konst_767);\
konst_767.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_768,1);\
__declare_static_bit_vector(konst_770,1);\
bit_vector_clear(&konst_770);\
__declare_static_bit_vector(MUX_771,1);\
__declare_static_bit_vector(konst_773,3);\
bit_vector_clear(&konst_773);\
konst_773.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_774,1);\
__declare_static_bit_vector(konst_776,1);\
bit_vector_clear(&konst_776);\
__declare_static_bit_vector(MUX_777,1);\
__declare_static_bit_vector(OR_u1_u1_778,1);\
__declare_static_bit_vector(konst_780,3);\
bit_vector_clear(&konst_780);\
konst_780.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_781,1);\
__declare_static_bit_vector(konst_783,1);\
bit_vector_clear(&konst_783);\
__declare_static_bit_vector(MUX_784,1);\
__declare_static_bit_vector(konst_786,3);\
bit_vector_clear(&konst_786);\
konst_786.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_787,1);\
__declare_static_bit_vector(konst_789,1);\
bit_vector_clear(&konst_789);\
__declare_static_bit_vector(MUX_790,1);\
__declare_static_bit_vector(OR_u1_u1_791,1);\
__declare_static_bit_vector(OR_u1_u1_792,1);\
bit_vector_clear(&konst_767);\
konst_767.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_767), &(EQ_u3_u1_768));\
if (has_undefined_bit(&EQ_u3_u1_768)) {fprintf(stderr, "Error: variable EQ_u3_u1_768 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_768));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_768)){bit_vector_cast_to_bit_vector(0, &(MUX_771), &(p1_valid));\
}else {bit_vector_clear(&konst_770);\
bit_vector_cast_to_bit_vector(0, &(MUX_771), &(konst_770));\
}bit_vector_clear(&konst_773);\
konst_773.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_773), &(EQ_u3_u1_774));\
if (has_undefined_bit(&EQ_u3_u1_774)) {fprintf(stderr, "Error: variable EQ_u3_u1_774 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_774));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_774)){bit_vector_cast_to_bit_vector(0, &(MUX_777), &(p2_valid));\
}else {bit_vector_clear(&konst_776);\
bit_vector_cast_to_bit_vector(0, &(MUX_777), &(konst_776));\
}bit_vector_or(&(MUX_771), &(MUX_777), &(OR_u1_u1_778));\
bit_vector_clear(&konst_780);\
konst_780.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_780), &(EQ_u3_u1_781));\
if (has_undefined_bit(&EQ_u3_u1_781)) {fprintf(stderr, "Error: variable EQ_u3_u1_781 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_781));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_781)){bit_vector_cast_to_bit_vector(0, &(MUX_784), &(p3_valid));\
}else {bit_vector_clear(&konst_783);\
bit_vector_cast_to_bit_vector(0, &(MUX_784), &(konst_783));\
}bit_vector_clear(&konst_786);\
konst_786.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_786), &(EQ_u3_u1_787));\
if (has_undefined_bit(&EQ_u3_u1_787)) {fprintf(stderr, "Error: variable EQ_u3_u1_787 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_787));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_787)){bit_vector_cast_to_bit_vector(0, &(MUX_790), &(p4_valid));\
}else {bit_vector_clear(&konst_789);\
bit_vector_cast_to_bit_vector(0, &(MUX_790), &(konst_789));\
}bit_vector_or(&(MUX_784), &(MUX_790), &(OR_u1_u1_791));\
bit_vector_or(&(OR_u1_u1_778), &(OR_u1_u1_791), &(OR_u1_u1_792));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_792));\
;

#define _outputPort_1_Daemon_assign_stmt_797_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;
;

#define _outputPort_1_Daemon_branch_block_stmt_580_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_803_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_pkt,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_pkt,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_2_Daemon_merge_stmt_805_c_preamble_macro_ uint8_t merge_stmt_805_entry_flag;\
merge_stmt_805_entry_flag = do_while_entry_flag;\
goto merge_stmt_805_run;\
merge_stmt_805_run: ;\

#define _outputPort_2_Daemon_phi_stmt_806_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_810_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_814,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_814));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_814));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_815_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_819,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_819));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_819));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_820_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_824,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_824));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_824));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_825_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_829,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_829));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_829));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_830_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_834_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(next_priority_pkt));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(ZERO_3));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_805_c_postamble_macro_ merge_stmt_805_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_843_c_macro_ __declare_static_bit_vector(konst_841,33);\
bit_vector_clear(&konst_841);\
konst_841.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_842,1);\
bit_vector_clear(&konst_841);\
konst_841.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_841), &(BITSEL_u33_u1_842));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_842));\
;

#define _outputPort_2_Daemon_assign_stmt_848_c_macro_ __declare_static_bit_vector(konst_846,33);\
bit_vector_clear(&konst_846);\
konst_846.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_847,1);\
bit_vector_clear(&konst_846);\
konst_846.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_846), &(BITSEL_u33_u1_847));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_847));\
;

#define _outputPort_2_Daemon_assign_stmt_853_c_macro_ __declare_static_bit_vector(konst_851,33);\
bit_vector_clear(&konst_851);\
konst_851.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_852,1);\
bit_vector_clear(&konst_851);\
konst_851.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_851), &(BITSEL_u33_u1_852));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_852));\
;

#define _outputPort_2_Daemon_assign_stmt_858_c_macro_ __declare_static_bit_vector(konst_856,33);\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_857,1);\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_856), &(BITSEL_u33_u1_857));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_857));\
;

#define _outputPort_2_Daemon_stmt_867_c_macro_ uint32_t _outputPort_2_Daemon_stmt_867_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_867_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_2_Daemon_assign_stmt_896_c_macro_ __declare_static_bit_vector(konst_870,3);\
bit_vector_clear(&konst_870);\
konst_870.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_871,1);\
__declare_static_bit_vector(konst_873,1);\
bit_vector_clear(&konst_873);\
__declare_static_bit_vector(MUX_874,1);\
__declare_static_bit_vector(konst_876,3);\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_877,1);\
__declare_static_bit_vector(konst_879,1);\
bit_vector_clear(&konst_879);\
__declare_static_bit_vector(MUX_880,1);\
__declare_static_bit_vector(OR_u1_u1_881,1);\
__declare_static_bit_vector(konst_883,3);\
bit_vector_clear(&konst_883);\
konst_883.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_884,1);\
__declare_static_bit_vector(konst_886,1);\
bit_vector_clear(&konst_886);\
__declare_static_bit_vector(MUX_887,1);\
__declare_static_bit_vector(konst_889,3);\
bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_890,1);\
__declare_static_bit_vector(konst_892,1);\
bit_vector_clear(&konst_892);\
__declare_static_bit_vector(MUX_893,1);\
__declare_static_bit_vector(OR_u1_u1_894,1);\
__declare_static_bit_vector(OR_u1_u1_895,1);\
bit_vector_clear(&konst_870);\
konst_870.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_870), &(EQ_u3_u1_871));\
if (has_undefined_bit(&EQ_u3_u1_871)) {fprintf(stderr, "Error: variable EQ_u3_u1_871 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_871));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_871)){bit_vector_cast_to_bit_vector(0, &(MUX_874), &(p1_valid));\
}else {bit_vector_clear(&konst_873);\
bit_vector_cast_to_bit_vector(0, &(MUX_874), &(konst_873));\
}bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_876), &(EQ_u3_u1_877));\
if (has_undefined_bit(&EQ_u3_u1_877)) {fprintf(stderr, "Error: variable EQ_u3_u1_877 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_877));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_877)){bit_vector_cast_to_bit_vector(0, &(MUX_880), &(p2_valid));\
}else {bit_vector_clear(&konst_879);\
bit_vector_cast_to_bit_vector(0, &(MUX_880), &(konst_879));\
}bit_vector_or(&(MUX_874), &(MUX_880), &(OR_u1_u1_881));\
bit_vector_clear(&konst_883);\
konst_883.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_883), &(EQ_u3_u1_884));\
if (has_undefined_bit(&EQ_u3_u1_884)) {fprintf(stderr, "Error: variable EQ_u3_u1_884 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_884));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_884)){bit_vector_cast_to_bit_vector(0, &(MUX_887), &(p3_valid));\
}else {bit_vector_clear(&konst_886);\
bit_vector_cast_to_bit_vector(0, &(MUX_887), &(konst_886));\
}bit_vector_clear(&konst_889);\
konst_889.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_889), &(EQ_u3_u1_890));\
if (has_undefined_bit(&EQ_u3_u1_890)) {fprintf(stderr, "Error: variable EQ_u3_u1_890 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_890));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_890)){bit_vector_cast_to_bit_vector(0, &(MUX_893), &(p4_valid));\
}else {bit_vector_clear(&konst_892);\
bit_vector_cast_to_bit_vector(0, &(MUX_893), &(konst_892));\
}bit_vector_or(&(MUX_887), &(MUX_893), &(OR_u1_u1_894));\
bit_vector_or(&(OR_u1_u1_881), &(OR_u1_u1_894), &(OR_u1_u1_895));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_895));\
;

#define _outputPort_2_Daemon_call_stmt_906_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_pkt),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_pkt));\
;

#define _outputPort_2_Daemon_assign_stmt_911_c_macro_ __declare_static_bit_vector(konst_909,3);\
bit_vector_clear(&konst_909);\
__declare_static_bit_vector(NEQ_u3_u1_910,1);\
bit_vector_clear(&konst_909);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_909), &NEQ_u3_u1_910);\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(NEQ_u3_u1_910));\
;

#define _outputPort_2_Daemon_assign_stmt_922_c_macro_ __declare_static_bit_vector(konst_914,8);\
bit_vector_clear(&konst_914);\
konst_914.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_917,8);\
bit_vector_clear(&konst_917);\
konst_917.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_918,8);\
__declare_static_bit_vector(MUX_920,8);\
__declare_static_bit_vector(MUX_921,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_914);\
konst_914.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_921), &(konst_914));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_917);\
konst_917.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_917), &(SUB_u8_u8_918));\
bit_vector_cast_to_bit_vector(0, &(MUX_920), &(SUB_u8_u8_918));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_920), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_921), &(MUX_920));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_921));\
;

#define _outputPort_2_Daemon_assign_stmt_930_c_macro_ __declare_static_bit_vector(NOT_u1_u1_925,1);\
__declare_static_bit_vector(konst_927,3);\
bit_vector_clear(&konst_927);\
konst_927.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_928,1);\
__declare_static_bit_vector(OR_u1_u1_929,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_925));\
bit_vector_clear(&konst_927);\
konst_927.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_927), &(EQ_u3_u1_928));\
bit_vector_or(&(NOT_u1_u1_925), &(EQ_u3_u1_928), &(OR_u1_u1_929));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_929));\
;

#define _outputPort_2_Daemon_assign_stmt_938_c_macro_ __declare_static_bit_vector(NOT_u1_u1_933,1);\
__declare_static_bit_vector(konst_935,3);\
bit_vector_clear(&konst_935);\
konst_935.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_936,1);\
__declare_static_bit_vector(OR_u1_u1_937,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_933));\
bit_vector_clear(&konst_935);\
konst_935.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_935), &(EQ_u3_u1_936));\
bit_vector_or(&(NOT_u1_u1_933), &(EQ_u3_u1_936), &(OR_u1_u1_937));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_937));\
;

#define _outputPort_2_Daemon_assign_stmt_946_c_macro_ __declare_static_bit_vector(NOT_u1_u1_941,1);\
__declare_static_bit_vector(konst_943,3);\
bit_vector_clear(&konst_943);\
konst_943.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_944,1);\
__declare_static_bit_vector(OR_u1_u1_945,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_941));\
bit_vector_clear(&konst_943);\
konst_943.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_943), &(EQ_u3_u1_944));\
bit_vector_or(&(NOT_u1_u1_941), &(EQ_u3_u1_944), &(OR_u1_u1_945));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_945));\
;

#define _outputPort_2_Daemon_assign_stmt_954_c_macro_ __declare_static_bit_vector(NOT_u1_u1_949,1);\
__declare_static_bit_vector(konst_951,3);\
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_952,1);\
__declare_static_bit_vector(OR_u1_u1_953,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_949));\
bit_vector_clear(&konst_951);\
konst_951.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_951), &(EQ_u3_u1_952));\
bit_vector_or(&(NOT_u1_u1_949), &(EQ_u3_u1_952), &(OR_u1_u1_953));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_953));\
;

#define _outputPort_2_Daemon_assign_stmt_987_c_macro_ __declare_static_bit_vector(konst_957,3);\
bit_vector_clear(&konst_957);\
konst_957.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_958,1);\
__declare_static_bit_vector(slice_960,32);\
__declare_static_bit_vector(konst_961,32);\
bit_vector_clear(&konst_961);\
__declare_static_bit_vector(MUX_962,32);\
__declare_static_bit_vector(konst_964,3);\
bit_vector_clear(&konst_964);\
konst_964.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_965,1);\
__declare_static_bit_vector(slice_967,32);\
__declare_static_bit_vector(konst_968,32);\
bit_vector_clear(&konst_968);\
__declare_static_bit_vector(MUX_969,32);\
__declare_static_bit_vector(OR_u32_u32_970,32);\
__declare_static_bit_vector(konst_972,3);\
bit_vector_clear(&konst_972);\
konst_972.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_973,1);\
__declare_static_bit_vector(slice_975,32);\
__declare_static_bit_vector(konst_976,32);\
bit_vector_clear(&konst_976);\
__declare_static_bit_vector(MUX_977,32);\
__declare_static_bit_vector(konst_979,3);\
bit_vector_clear(&konst_979);\
konst_979.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_980,1);\
__declare_static_bit_vector(slice_982,32);\
__declare_static_bit_vector(konst_983,32);\
bit_vector_clear(&konst_983);\
__declare_static_bit_vector(MUX_984,32);\
__declare_static_bit_vector(OR_u32_u32_985,32);\
__declare_static_bit_vector(OR_u32_u32_986,32);\
bit_vector_clear(&konst_957);\
konst_957.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_957), &(EQ_u3_u1_958));\
if (has_undefined_bit(&EQ_u3_u1_958)) {fprintf(stderr, "Error: variable EQ_u3_u1_958 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_958));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_958)){bit_vector_slice(&(pkt_1_e_word), &(slice_960), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_962), &(slice_960));\
}else {bit_vector_clear(&konst_961);\
bit_vector_cast_to_bit_vector(0, &(MUX_962), &(konst_961));\
}bit_vector_clear(&konst_964);\
konst_964.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_964), &(EQ_u3_u1_965));\
if (has_undefined_bit(&EQ_u3_u1_965)) {fprintf(stderr, "Error: variable EQ_u3_u1_965 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_965));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_965)){bit_vector_slice(&(pkt_2_e_word), &(slice_967), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_969), &(slice_967));\
}else {bit_vector_clear(&konst_968);\
bit_vector_cast_to_bit_vector(0, &(MUX_969), &(konst_968));\
}bit_vector_or(&(MUX_962), &(MUX_969), &(OR_u32_u32_970));\
bit_vector_clear(&konst_972);\
konst_972.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_972), &(EQ_u3_u1_973));\
if (has_undefined_bit(&EQ_u3_u1_973)) {fprintf(stderr, "Error: variable EQ_u3_u1_973 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_973));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_973)){bit_vector_slice(&(pkt_3_e_word), &(slice_975), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_977), &(slice_975));\
}else {bit_vector_clear(&konst_976);\
bit_vector_cast_to_bit_vector(0, &(MUX_977), &(konst_976));\
}bit_vector_clear(&konst_979);\
konst_979.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_979), &(EQ_u3_u1_980));\
if (has_undefined_bit(&EQ_u3_u1_980)) {fprintf(stderr, "Error: variable EQ_u3_u1_980 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_980));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_980)){bit_vector_slice(&(pkt_4_e_word), &(slice_982), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_984), &(slice_982));\
}else {bit_vector_clear(&konst_983);\
bit_vector_cast_to_bit_vector(0, &(MUX_984), &(konst_983));\
}bit_vector_or(&(MUX_977), &(MUX_984), &(OR_u32_u32_985));\
bit_vector_or(&(OR_u32_u32_970), &(OR_u32_u32_985), &(OR_u32_u32_986));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_986));\
;

#define _outputPort_2_Daemon_assign_stmt_1016_c_macro_ __declare_static_bit_vector(konst_990,3);\
bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_991,1);\
__declare_static_bit_vector(konst_993,1);\
bit_vector_clear(&konst_993);\
__declare_static_bit_vector(MUX_994,1);\
__declare_static_bit_vector(konst_996,3);\
bit_vector_clear(&konst_996);\
konst_996.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_997,1);\
__declare_static_bit_vector(konst_999,1);\
bit_vector_clear(&konst_999);\
__declare_static_bit_vector(MUX_1000,1);\
__declare_static_bit_vector(OR_u1_u1_1001,1);\
__declare_static_bit_vector(konst_1003,3);\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1004,1);\
__declare_static_bit_vector(konst_1006,1);\
bit_vector_clear(&konst_1006);\
__declare_static_bit_vector(MUX_1007,1);\
__declare_static_bit_vector(konst_1009,3);\
bit_vector_clear(&konst_1009);\
konst_1009.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1010,1);\
__declare_static_bit_vector(konst_1012,1);\
bit_vector_clear(&konst_1012);\
__declare_static_bit_vector(MUX_1013,1);\
__declare_static_bit_vector(OR_u1_u1_1014,1);\
__declare_static_bit_vector(OR_u1_u1_1015,1);\
bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_990), &(EQ_u3_u1_991));\
if (has_undefined_bit(&EQ_u3_u1_991)) {fprintf(stderr, "Error: variable EQ_u3_u1_991 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_991));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_991)){bit_vector_cast_to_bit_vector(0, &(MUX_994), &(p1_valid));\
}else {bit_vector_clear(&konst_993);\
bit_vector_cast_to_bit_vector(0, &(MUX_994), &(konst_993));\
}bit_vector_clear(&konst_996);\
konst_996.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_996), &(EQ_u3_u1_997));\
if (has_undefined_bit(&EQ_u3_u1_997)) {fprintf(stderr, "Error: variable EQ_u3_u1_997 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_997));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_997)){bit_vector_cast_to_bit_vector(0, &(MUX_1000), &(p2_valid));\
}else {bit_vector_clear(&konst_999);\
bit_vector_cast_to_bit_vector(0, &(MUX_1000), &(konst_999));\
}bit_vector_or(&(MUX_994), &(MUX_1000), &(OR_u1_u1_1001));\
bit_vector_clear(&konst_1003);\
konst_1003.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1003), &(EQ_u3_u1_1004));\
if (has_undefined_bit(&EQ_u3_u1_1004)) {fprintf(stderr, "Error: variable EQ_u3_u1_1004 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1004));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1004)){bit_vector_cast_to_bit_vector(0, &(MUX_1007), &(p3_valid));\
}else {bit_vector_clear(&konst_1006);\
bit_vector_cast_to_bit_vector(0, &(MUX_1007), &(konst_1006));\
}bit_vector_clear(&konst_1009);\
konst_1009.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1009), &(EQ_u3_u1_1010));\
if (has_undefined_bit(&EQ_u3_u1_1010)) {fprintf(stderr, "Error: variable EQ_u3_u1_1010 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1010));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1010)){bit_vector_cast_to_bit_vector(0, &(MUX_1013), &(p4_valid));\
}else {bit_vector_clear(&konst_1012);\
bit_vector_cast_to_bit_vector(0, &(MUX_1013), &(konst_1012));\
}bit_vector_or(&(MUX_1007), &(MUX_1013), &(OR_u1_u1_1014));\
bit_vector_or(&(OR_u1_u1_1001), &(OR_u1_u1_1014), &(OR_u1_u1_1015));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1015));\
;

#define _outputPort_2_Daemon_assign_stmt_1020_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;
;

#define _outputPort_2_Daemon_branch_block_stmt_803_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1026_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_pkt,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_pkt,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_3_Daemon_merge_stmt_1028_c_preamble_macro_ uint8_t merge_stmt_1028_entry_flag;\
merge_stmt_1028_entry_flag = do_while_entry_flag;\
goto merge_stmt_1028_run;\
merge_stmt_1028_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1029_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1033_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1037,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1037));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1037));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1038_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1042,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1042));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1042));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1043_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1047,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1047));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1047));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1048_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1052,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1052));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1052));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1053_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1057_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(next_priority_pkt));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(ZERO_3));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1028_c_postamble_macro_ merge_stmt_1028_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1066_c_macro_ __declare_static_bit_vector(konst_1064,33);\
bit_vector_clear(&konst_1064);\
konst_1064.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1065,1);\
bit_vector_clear(&konst_1064);\
konst_1064.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1064), &(BITSEL_u33_u1_1065));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1065));\
;

#define _outputPort_3_Daemon_assign_stmt_1071_c_macro_ __declare_static_bit_vector(konst_1069,33);\
bit_vector_clear(&konst_1069);\
konst_1069.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1070,1);\
bit_vector_clear(&konst_1069);\
konst_1069.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1069), &(BITSEL_u33_u1_1070));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1070));\
;

#define _outputPort_3_Daemon_assign_stmt_1076_c_macro_ __declare_static_bit_vector(konst_1074,33);\
bit_vector_clear(&konst_1074);\
konst_1074.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1075,1);\
bit_vector_clear(&konst_1074);\
konst_1074.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1074), &(BITSEL_u33_u1_1075));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1075));\
;

#define _outputPort_3_Daemon_assign_stmt_1081_c_macro_ __declare_static_bit_vector(konst_1079,33);\
bit_vector_clear(&konst_1079);\
konst_1079.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1080,1);\
bit_vector_clear(&konst_1079);\
konst_1079.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1079), &(BITSEL_u33_u1_1080));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1080));\
;

#define _outputPort_3_Daemon_stmt_1090_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1090_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1090_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_3_Daemon_assign_stmt_1119_c_macro_ __declare_static_bit_vector(konst_1093,3);\
bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1094,1);\
__declare_static_bit_vector(konst_1096,1);\
bit_vector_clear(&konst_1096);\
__declare_static_bit_vector(MUX_1097,1);\
__declare_static_bit_vector(konst_1099,3);\
bit_vector_clear(&konst_1099);\
konst_1099.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1100,1);\
__declare_static_bit_vector(konst_1102,1);\
bit_vector_clear(&konst_1102);\
__declare_static_bit_vector(MUX_1103,1);\
__declare_static_bit_vector(OR_u1_u1_1104,1);\
__declare_static_bit_vector(konst_1106,3);\
bit_vector_clear(&konst_1106);\
konst_1106.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1107,1);\
__declare_static_bit_vector(konst_1109,1);\
bit_vector_clear(&konst_1109);\
__declare_static_bit_vector(MUX_1110,1);\
__declare_static_bit_vector(konst_1112,3);\
bit_vector_clear(&konst_1112);\
konst_1112.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1113,1);\
__declare_static_bit_vector(konst_1115,1);\
bit_vector_clear(&konst_1115);\
__declare_static_bit_vector(MUX_1116,1);\
__declare_static_bit_vector(OR_u1_u1_1117,1);\
__declare_static_bit_vector(OR_u1_u1_1118,1);\
bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1093), &(EQ_u3_u1_1094));\
if (has_undefined_bit(&EQ_u3_u1_1094)) {fprintf(stderr, "Error: variable EQ_u3_u1_1094 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1094));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1094)){bit_vector_cast_to_bit_vector(0, &(MUX_1097), &(p1_valid));\
}else {bit_vector_clear(&konst_1096);\
bit_vector_cast_to_bit_vector(0, &(MUX_1097), &(konst_1096));\
}bit_vector_clear(&konst_1099);\
konst_1099.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1099), &(EQ_u3_u1_1100));\
if (has_undefined_bit(&EQ_u3_u1_1100)) {fprintf(stderr, "Error: variable EQ_u3_u1_1100 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1100));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1100)){bit_vector_cast_to_bit_vector(0, &(MUX_1103), &(p2_valid));\
}else {bit_vector_clear(&konst_1102);\
bit_vector_cast_to_bit_vector(0, &(MUX_1103), &(konst_1102));\
}bit_vector_or(&(MUX_1097), &(MUX_1103), &(OR_u1_u1_1104));\
bit_vector_clear(&konst_1106);\
konst_1106.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1106), &(EQ_u3_u1_1107));\
if (has_undefined_bit(&EQ_u3_u1_1107)) {fprintf(stderr, "Error: variable EQ_u3_u1_1107 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1107));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1107)){bit_vector_cast_to_bit_vector(0, &(MUX_1110), &(p3_valid));\
}else {bit_vector_clear(&konst_1109);\
bit_vector_cast_to_bit_vector(0, &(MUX_1110), &(konst_1109));\
}bit_vector_clear(&konst_1112);\
konst_1112.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1112), &(EQ_u3_u1_1113));\
if (has_undefined_bit(&EQ_u3_u1_1113)) {fprintf(stderr, "Error: variable EQ_u3_u1_1113 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1113));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1113)){bit_vector_cast_to_bit_vector(0, &(MUX_1116), &(p4_valid));\
}else {bit_vector_clear(&konst_1115);\
bit_vector_cast_to_bit_vector(0, &(MUX_1116), &(konst_1115));\
}bit_vector_or(&(MUX_1110), &(MUX_1116), &(OR_u1_u1_1117));\
bit_vector_or(&(OR_u1_u1_1104), &(OR_u1_u1_1117), &(OR_u1_u1_1118));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1118));\
;

#define _outputPort_3_Daemon_call_stmt_1129_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_pkt),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_pkt));\
;

#define _outputPort_3_Daemon_assign_stmt_1134_c_macro_ __declare_static_bit_vector(konst_1132,3);\
bit_vector_clear(&konst_1132);\
__declare_static_bit_vector(NEQ_u3_u1_1133,1);\
bit_vector_clear(&konst_1132);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1132), &NEQ_u3_u1_1133);\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(NEQ_u3_u1_1133));\
;

#define _outputPort_3_Daemon_assign_stmt_1145_c_macro_ __declare_static_bit_vector(konst_1137,8);\
bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1140,8);\
bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1141,8);\
__declare_static_bit_vector(MUX_1143,8);\
__declare_static_bit_vector(MUX_1144,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1144), &(konst_1137));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1140), &(SUB_u8_u8_1141));\
bit_vector_cast_to_bit_vector(0, &(MUX_1143), &(SUB_u8_u8_1141));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1143), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1144), &(MUX_1143));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1144));\
;

#define _outputPort_3_Daemon_assign_stmt_1153_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1148,1);\
__declare_static_bit_vector(konst_1150,3);\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1151,1);\
__declare_static_bit_vector(OR_u1_u1_1152,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1148));\
bit_vector_clear(&konst_1150);\
konst_1150.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1150), &(EQ_u3_u1_1151));\
bit_vector_or(&(NOT_u1_u1_1148), &(EQ_u3_u1_1151), &(OR_u1_u1_1152));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1152));\
;

#define _outputPort_3_Daemon_assign_stmt_1161_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1156,1);\
__declare_static_bit_vector(konst_1158,3);\
bit_vector_clear(&konst_1158);\
konst_1158.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1159,1);\
__declare_static_bit_vector(OR_u1_u1_1160,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1156));\
bit_vector_clear(&konst_1158);\
konst_1158.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1158), &(EQ_u3_u1_1159));\
bit_vector_or(&(NOT_u1_u1_1156), &(EQ_u3_u1_1159), &(OR_u1_u1_1160));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1160));\
;

#define _outputPort_3_Daemon_assign_stmt_1169_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1164,1);\
__declare_static_bit_vector(konst_1166,3);\
bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1167,1);\
__declare_static_bit_vector(OR_u1_u1_1168,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1164));\
bit_vector_clear(&konst_1166);\
konst_1166.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1166), &(EQ_u3_u1_1167));\
bit_vector_or(&(NOT_u1_u1_1164), &(EQ_u3_u1_1167), &(OR_u1_u1_1168));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1168));\
;

#define _outputPort_3_Daemon_assign_stmt_1177_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1172,1);\
__declare_static_bit_vector(konst_1174,3);\
bit_vector_clear(&konst_1174);\
konst_1174.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1175,1);\
__declare_static_bit_vector(OR_u1_u1_1176,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1172));\
bit_vector_clear(&konst_1174);\
konst_1174.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1174), &(EQ_u3_u1_1175));\
bit_vector_or(&(NOT_u1_u1_1172), &(EQ_u3_u1_1175), &(OR_u1_u1_1176));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1176));\
;

#define _outputPort_3_Daemon_assign_stmt_1210_c_macro_ __declare_static_bit_vector(konst_1180,3);\
bit_vector_clear(&konst_1180);\
konst_1180.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1181,1);\
__declare_static_bit_vector(slice_1183,32);\
__declare_static_bit_vector(konst_1184,32);\
bit_vector_clear(&konst_1184);\
__declare_static_bit_vector(MUX_1185,32);\
__declare_static_bit_vector(konst_1187,3);\
bit_vector_clear(&konst_1187);\
konst_1187.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1188,1);\
__declare_static_bit_vector(slice_1190,32);\
__declare_static_bit_vector(konst_1191,32);\
bit_vector_clear(&konst_1191);\
__declare_static_bit_vector(MUX_1192,32);\
__declare_static_bit_vector(OR_u32_u32_1193,32);\
__declare_static_bit_vector(konst_1195,3);\
bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1196,1);\
__declare_static_bit_vector(slice_1198,32);\
__declare_static_bit_vector(konst_1199,32);\
bit_vector_clear(&konst_1199);\
__declare_static_bit_vector(MUX_1200,32);\
__declare_static_bit_vector(konst_1202,3);\
bit_vector_clear(&konst_1202);\
konst_1202.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1203,1);\
__declare_static_bit_vector(slice_1205,32);\
__declare_static_bit_vector(konst_1206,32);\
bit_vector_clear(&konst_1206);\
__declare_static_bit_vector(MUX_1207,32);\
__declare_static_bit_vector(OR_u32_u32_1208,32);\
__declare_static_bit_vector(OR_u32_u32_1209,32);\
bit_vector_clear(&konst_1180);\
konst_1180.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1180), &(EQ_u3_u1_1181));\
if (has_undefined_bit(&EQ_u3_u1_1181)) {fprintf(stderr, "Error: variable EQ_u3_u1_1181 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1181));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1181)){bit_vector_slice(&(pkt_1_e_word), &(slice_1183), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1185), &(slice_1183));\
}else {bit_vector_clear(&konst_1184);\
bit_vector_cast_to_bit_vector(0, &(MUX_1185), &(konst_1184));\
}bit_vector_clear(&konst_1187);\
konst_1187.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1187), &(EQ_u3_u1_1188));\
if (has_undefined_bit(&EQ_u3_u1_1188)) {fprintf(stderr, "Error: variable EQ_u3_u1_1188 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1188));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1188)){bit_vector_slice(&(pkt_2_e_word), &(slice_1190), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1192), &(slice_1190));\
}else {bit_vector_clear(&konst_1191);\
bit_vector_cast_to_bit_vector(0, &(MUX_1192), &(konst_1191));\
}bit_vector_or(&(MUX_1185), &(MUX_1192), &(OR_u32_u32_1193));\
bit_vector_clear(&konst_1195);\
konst_1195.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1195), &(EQ_u3_u1_1196));\
if (has_undefined_bit(&EQ_u3_u1_1196)) {fprintf(stderr, "Error: variable EQ_u3_u1_1196 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1196));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1196)){bit_vector_slice(&(pkt_3_e_word), &(slice_1198), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1200), &(slice_1198));\
}else {bit_vector_clear(&konst_1199);\
bit_vector_cast_to_bit_vector(0, &(MUX_1200), &(konst_1199));\
}bit_vector_clear(&konst_1202);\
konst_1202.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1202), &(EQ_u3_u1_1203));\
if (has_undefined_bit(&EQ_u3_u1_1203)) {fprintf(stderr, "Error: variable EQ_u3_u1_1203 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1203));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1203)){bit_vector_slice(&(pkt_4_e_word), &(slice_1205), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1207), &(slice_1205));\
}else {bit_vector_clear(&konst_1206);\
bit_vector_cast_to_bit_vector(0, &(MUX_1207), &(konst_1206));\
}bit_vector_or(&(MUX_1200), &(MUX_1207), &(OR_u32_u32_1208));\
bit_vector_or(&(OR_u32_u32_1193), &(OR_u32_u32_1208), &(OR_u32_u32_1209));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1209));\
;

#define _outputPort_3_Daemon_assign_stmt_1239_c_macro_ __declare_static_bit_vector(konst_1213,3);\
bit_vector_clear(&konst_1213);\
konst_1213.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1214,1);\
__declare_static_bit_vector(konst_1216,1);\
bit_vector_clear(&konst_1216);\
__declare_static_bit_vector(MUX_1217,1);\
__declare_static_bit_vector(konst_1219,3);\
bit_vector_clear(&konst_1219);\
konst_1219.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1220,1);\
__declare_static_bit_vector(konst_1222,1);\
bit_vector_clear(&konst_1222);\
__declare_static_bit_vector(MUX_1223,1);\
__declare_static_bit_vector(OR_u1_u1_1224,1);\
__declare_static_bit_vector(konst_1226,3);\
bit_vector_clear(&konst_1226);\
konst_1226.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1227,1);\
__declare_static_bit_vector(konst_1229,1);\
bit_vector_clear(&konst_1229);\
__declare_static_bit_vector(MUX_1230,1);\
__declare_static_bit_vector(konst_1232,3);\
bit_vector_clear(&konst_1232);\
konst_1232.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1233,1);\
__declare_static_bit_vector(konst_1235,1);\
bit_vector_clear(&konst_1235);\
__declare_static_bit_vector(MUX_1236,1);\
__declare_static_bit_vector(OR_u1_u1_1237,1);\
__declare_static_bit_vector(OR_u1_u1_1238,1);\
bit_vector_clear(&konst_1213);\
konst_1213.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1213), &(EQ_u3_u1_1214));\
if (has_undefined_bit(&EQ_u3_u1_1214)) {fprintf(stderr, "Error: variable EQ_u3_u1_1214 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1214));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1214)){bit_vector_cast_to_bit_vector(0, &(MUX_1217), &(p1_valid));\
}else {bit_vector_clear(&konst_1216);\
bit_vector_cast_to_bit_vector(0, &(MUX_1217), &(konst_1216));\
}bit_vector_clear(&konst_1219);\
konst_1219.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1219), &(EQ_u3_u1_1220));\
if (has_undefined_bit(&EQ_u3_u1_1220)) {fprintf(stderr, "Error: variable EQ_u3_u1_1220 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1220));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1220)){bit_vector_cast_to_bit_vector(0, &(MUX_1223), &(p2_valid));\
}else {bit_vector_clear(&konst_1222);\
bit_vector_cast_to_bit_vector(0, &(MUX_1223), &(konst_1222));\
}bit_vector_or(&(MUX_1217), &(MUX_1223), &(OR_u1_u1_1224));\
bit_vector_clear(&konst_1226);\
konst_1226.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1226), &(EQ_u3_u1_1227));\
if (has_undefined_bit(&EQ_u3_u1_1227)) {fprintf(stderr, "Error: variable EQ_u3_u1_1227 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1227));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1227)){bit_vector_cast_to_bit_vector(0, &(MUX_1230), &(p3_valid));\
}else {bit_vector_clear(&konst_1229);\
bit_vector_cast_to_bit_vector(0, &(MUX_1230), &(konst_1229));\
}bit_vector_clear(&konst_1232);\
konst_1232.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1232), &(EQ_u3_u1_1233));\
if (has_undefined_bit(&EQ_u3_u1_1233)) {fprintf(stderr, "Error: variable EQ_u3_u1_1233 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1233));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1233)){bit_vector_cast_to_bit_vector(0, &(MUX_1236), &(p4_valid));\
}else {bit_vector_clear(&konst_1235);\
bit_vector_cast_to_bit_vector(0, &(MUX_1236), &(konst_1235));\
}bit_vector_or(&(MUX_1230), &(MUX_1236), &(OR_u1_u1_1237));\
bit_vector_or(&(OR_u1_u1_1224), &(OR_u1_u1_1237), &(OR_u1_u1_1238));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1238));\
;

#define _outputPort_3_Daemon_assign_stmt_1243_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;
;

#define _outputPort_3_Daemon_branch_block_stmt_1026_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1249_c_export_decl_macro_ __declare_static_bit_vector(down_counter,8);\
__declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(priority_pkt,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_pkt,3);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,8);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_4_Daemon_merge_stmt_1251_c_preamble_macro_ uint8_t merge_stmt_1251_entry_flag;\
merge_stmt_1251_entry_flag = do_while_entry_flag;\
goto merge_stmt_1251_run;\
merge_stmt_1251_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1252_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_8));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1256_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1260,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1260));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1260));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1261_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1265,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1265));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1265));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1266_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1270,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1270));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1270));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1271_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1275,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1275));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1275));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1276_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1280_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(next_priority_pkt));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &(ZERO_3));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1251_c_postamble_macro_ merge_stmt_1251_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1289_c_macro_ __declare_static_bit_vector(konst_1287,33);\
bit_vector_clear(&konst_1287);\
konst_1287.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1288,1);\
bit_vector_clear(&konst_1287);\
konst_1287.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1287), &(BITSEL_u33_u1_1288));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1288));\
;

#define _outputPort_4_Daemon_assign_stmt_1294_c_macro_ __declare_static_bit_vector(konst_1292,33);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1293,1);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1292), &(BITSEL_u33_u1_1293));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1293));\
;

#define _outputPort_4_Daemon_assign_stmt_1299_c_macro_ __declare_static_bit_vector(konst_1297,33);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1298,1);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1297), &(BITSEL_u33_u1_1298));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1298));\
;

#define _outputPort_4_Daemon_assign_stmt_1304_c_macro_ __declare_static_bit_vector(konst_1302,33);\
bit_vector_clear(&konst_1302);\
konst_1302.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1303,1);\
bit_vector_clear(&konst_1302);\
konst_1302.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1302), &(BITSEL_u33_u1_1303));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1303));\
;

#define _outputPort_4_Daemon_stmt_1313_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1313_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1313_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_4_Daemon_assign_stmt_1342_c_macro_ __declare_static_bit_vector(konst_1316,3);\
bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1317,1);\
__declare_static_bit_vector(konst_1319,1);\
bit_vector_clear(&konst_1319);\
__declare_static_bit_vector(MUX_1320,1);\
__declare_static_bit_vector(konst_1322,3);\
bit_vector_clear(&konst_1322);\
konst_1322.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1323,1);\
__declare_static_bit_vector(konst_1325,1);\
bit_vector_clear(&konst_1325);\
__declare_static_bit_vector(MUX_1326,1);\
__declare_static_bit_vector(OR_u1_u1_1327,1);\
__declare_static_bit_vector(konst_1329,3);\
bit_vector_clear(&konst_1329);\
konst_1329.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1330,1);\
__declare_static_bit_vector(konst_1332,1);\
bit_vector_clear(&konst_1332);\
__declare_static_bit_vector(MUX_1333,1);\
__declare_static_bit_vector(konst_1335,3);\
bit_vector_clear(&konst_1335);\
konst_1335.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1336,1);\
__declare_static_bit_vector(konst_1338,1);\
bit_vector_clear(&konst_1338);\
__declare_static_bit_vector(MUX_1339,1);\
__declare_static_bit_vector(OR_u1_u1_1340,1);\
__declare_static_bit_vector(OR_u1_u1_1341,1);\
bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1316), &(EQ_u3_u1_1317));\
if (has_undefined_bit(&EQ_u3_u1_1317)) {fprintf(stderr, "Error: variable EQ_u3_u1_1317 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1317));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1317)){bit_vector_cast_to_bit_vector(0, &(MUX_1320), &(p1_valid));\
}else {bit_vector_clear(&konst_1319);\
bit_vector_cast_to_bit_vector(0, &(MUX_1320), &(konst_1319));\
}bit_vector_clear(&konst_1322);\
konst_1322.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1322), &(EQ_u3_u1_1323));\
if (has_undefined_bit(&EQ_u3_u1_1323)) {fprintf(stderr, "Error: variable EQ_u3_u1_1323 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1323));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1323)){bit_vector_cast_to_bit_vector(0, &(MUX_1326), &(p2_valid));\
}else {bit_vector_clear(&konst_1325);\
bit_vector_cast_to_bit_vector(0, &(MUX_1326), &(konst_1325));\
}bit_vector_or(&(MUX_1320), &(MUX_1326), &(OR_u1_u1_1327));\
bit_vector_clear(&konst_1329);\
konst_1329.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1329), &(EQ_u3_u1_1330));\
if (has_undefined_bit(&EQ_u3_u1_1330)) {fprintf(stderr, "Error: variable EQ_u3_u1_1330 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1330));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1330)){bit_vector_cast_to_bit_vector(0, &(MUX_1333), &(p3_valid));\
}else {bit_vector_clear(&konst_1332);\
bit_vector_cast_to_bit_vector(0, &(MUX_1333), &(konst_1332));\
}bit_vector_clear(&konst_1335);\
konst_1335.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1335), &(EQ_u3_u1_1336));\
if (has_undefined_bit(&EQ_u3_u1_1336)) {fprintf(stderr, "Error: variable EQ_u3_u1_1336 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1336));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1336)){bit_vector_cast_to_bit_vector(0, &(MUX_1339), &(p4_valid));\
}else {bit_vector_clear(&konst_1338);\
bit_vector_cast_to_bit_vector(0, &(MUX_1339), &(konst_1338));\
}bit_vector_or(&(MUX_1333), &(MUX_1339), &(OR_u1_u1_1340));\
bit_vector_or(&(OR_u1_u1_1327), &(OR_u1_u1_1340), &(OR_u1_u1_1341));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1341));\
;

#define _outputPort_4_Daemon_call_stmt_1352_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(priority_pkt),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_priority_pkt));\
;

#define _outputPort_4_Daemon_assign_stmt_1357_c_macro_ __declare_static_bit_vector(konst_1355,3);\
bit_vector_clear(&konst_1355);\
__declare_static_bit_vector(NEQ_u3_u1_1356,1);\
bit_vector_clear(&konst_1355);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1355), &NEQ_u3_u1_1356);\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(NEQ_u3_u1_1356));\
;

#define _outputPort_4_Daemon_assign_stmt_1368_c_macro_ __declare_static_bit_vector(konst_1360,8);\
bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_1363,8);\
bit_vector_clear(&konst_1363);\
konst_1363.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1364,8);\
__declare_static_bit_vector(MUX_1366,8);\
__declare_static_bit_vector(MUX_1367,8);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 63;\
bit_vector_cast_to_bit_vector(0, &(MUX_1367), &(konst_1360));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1363);\
konst_1363.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1363), &(SUB_u8_u8_1364));\
bit_vector_cast_to_bit_vector(0, &(MUX_1366), &(SUB_u8_u8_1364));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1366), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1367), &(MUX_1366));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1367));\
;

#define _outputPort_4_Daemon_assign_stmt_1376_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1371,1);\
__declare_static_bit_vector(konst_1373,3);\
bit_vector_clear(&konst_1373);\
konst_1373.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1374,1);\
__declare_static_bit_vector(OR_u1_u1_1375,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1371));\
bit_vector_clear(&konst_1373);\
konst_1373.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1373), &(EQ_u3_u1_1374));\
bit_vector_or(&(NOT_u1_u1_1371), &(EQ_u3_u1_1374), &(OR_u1_u1_1375));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1375));\
;

#define _outputPort_4_Daemon_assign_stmt_1384_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1379,1);\
__declare_static_bit_vector(konst_1381,3);\
bit_vector_clear(&konst_1381);\
konst_1381.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1382,1);\
__declare_static_bit_vector(OR_u1_u1_1383,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1379));\
bit_vector_clear(&konst_1381);\
konst_1381.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1381), &(EQ_u3_u1_1382));\
bit_vector_or(&(NOT_u1_u1_1379), &(EQ_u3_u1_1382), &(OR_u1_u1_1383));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1383));\
;

#define _outputPort_4_Daemon_assign_stmt_1392_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1387,1);\
__declare_static_bit_vector(konst_1389,3);\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1390,1);\
__declare_static_bit_vector(OR_u1_u1_1391,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1387));\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1389), &(EQ_u3_u1_1390));\
bit_vector_or(&(NOT_u1_u1_1387), &(EQ_u3_u1_1390), &(OR_u1_u1_1391));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1391));\
;

#define _outputPort_4_Daemon_assign_stmt_1400_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1395,1);\
__declare_static_bit_vector(konst_1397,3);\
bit_vector_clear(&konst_1397);\
konst_1397.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1398,1);\
__declare_static_bit_vector(OR_u1_u1_1399,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1395));\
bit_vector_clear(&konst_1397);\
konst_1397.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1397), &(EQ_u3_u1_1398));\
bit_vector_or(&(NOT_u1_u1_1395), &(EQ_u3_u1_1398), &(OR_u1_u1_1399));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1399));\
;

#define _outputPort_4_Daemon_assign_stmt_1433_c_macro_ __declare_static_bit_vector(konst_1403,3);\
bit_vector_clear(&konst_1403);\
konst_1403.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1404,1);\
__declare_static_bit_vector(slice_1406,32);\
__declare_static_bit_vector(konst_1407,32);\
bit_vector_clear(&konst_1407);\
__declare_static_bit_vector(MUX_1408,32);\
__declare_static_bit_vector(konst_1410,3);\
bit_vector_clear(&konst_1410);\
konst_1410.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1411,1);\
__declare_static_bit_vector(slice_1413,32);\
__declare_static_bit_vector(konst_1414,32);\
bit_vector_clear(&konst_1414);\
__declare_static_bit_vector(MUX_1415,32);\
__declare_static_bit_vector(OR_u32_u32_1416,32);\
__declare_static_bit_vector(konst_1418,3);\
bit_vector_clear(&konst_1418);\
konst_1418.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1419,1);\
__declare_static_bit_vector(slice_1421,32);\
__declare_static_bit_vector(konst_1422,32);\
bit_vector_clear(&konst_1422);\
__declare_static_bit_vector(MUX_1423,32);\
__declare_static_bit_vector(konst_1425,3);\
bit_vector_clear(&konst_1425);\
konst_1425.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1426,1);\
__declare_static_bit_vector(slice_1428,32);\
__declare_static_bit_vector(konst_1429,32);\
bit_vector_clear(&konst_1429);\
__declare_static_bit_vector(MUX_1430,32);\
__declare_static_bit_vector(OR_u32_u32_1431,32);\
__declare_static_bit_vector(OR_u32_u32_1432,32);\
bit_vector_clear(&konst_1403);\
konst_1403.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1403), &(EQ_u3_u1_1404));\
if (has_undefined_bit(&EQ_u3_u1_1404)) {fprintf(stderr, "Error: variable EQ_u3_u1_1404 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1404));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1404)){bit_vector_slice(&(pkt_1_e_word), &(slice_1406), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1408), &(slice_1406));\
}else {bit_vector_clear(&konst_1407);\
bit_vector_cast_to_bit_vector(0, &(MUX_1408), &(konst_1407));\
}bit_vector_clear(&konst_1410);\
konst_1410.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1410), &(EQ_u3_u1_1411));\
if (has_undefined_bit(&EQ_u3_u1_1411)) {fprintf(stderr, "Error: variable EQ_u3_u1_1411 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1411));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1411)){bit_vector_slice(&(pkt_2_e_word), &(slice_1413), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1415), &(slice_1413));\
}else {bit_vector_clear(&konst_1414);\
bit_vector_cast_to_bit_vector(0, &(MUX_1415), &(konst_1414));\
}bit_vector_or(&(MUX_1408), &(MUX_1415), &(OR_u32_u32_1416));\
bit_vector_clear(&konst_1418);\
konst_1418.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1418), &(EQ_u3_u1_1419));\
if (has_undefined_bit(&EQ_u3_u1_1419)) {fprintf(stderr, "Error: variable EQ_u3_u1_1419 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1419));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1419)){bit_vector_slice(&(pkt_3_e_word), &(slice_1421), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1423), &(slice_1421));\
}else {bit_vector_clear(&konst_1422);\
bit_vector_cast_to_bit_vector(0, &(MUX_1423), &(konst_1422));\
}bit_vector_clear(&konst_1425);\
konst_1425.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1425), &(EQ_u3_u1_1426));\
if (has_undefined_bit(&EQ_u3_u1_1426)) {fprintf(stderr, "Error: variable EQ_u3_u1_1426 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1426));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1426)){bit_vector_slice(&(pkt_4_e_word), &(slice_1428), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1430), &(slice_1428));\
}else {bit_vector_clear(&konst_1429);\
bit_vector_cast_to_bit_vector(0, &(MUX_1430), &(konst_1429));\
}bit_vector_or(&(MUX_1423), &(MUX_1430), &(OR_u32_u32_1431));\
bit_vector_or(&(OR_u32_u32_1416), &(OR_u32_u32_1431), &(OR_u32_u32_1432));\
bit_vector_cast_to_bit_vector(0, &(data_to_out), &(OR_u32_u32_1432));\
;

#define _outputPort_4_Daemon_assign_stmt_1462_c_macro_ __declare_static_bit_vector(konst_1436,3);\
bit_vector_clear(&konst_1436);\
konst_1436.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1437,1);\
__declare_static_bit_vector(konst_1439,1);\
bit_vector_clear(&konst_1439);\
__declare_static_bit_vector(MUX_1440,1);\
__declare_static_bit_vector(konst_1442,3);\
bit_vector_clear(&konst_1442);\
konst_1442.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1443,1);\
__declare_static_bit_vector(konst_1445,1);\
bit_vector_clear(&konst_1445);\
__declare_static_bit_vector(MUX_1446,1);\
__declare_static_bit_vector(OR_u1_u1_1447,1);\
__declare_static_bit_vector(konst_1449,3);\
bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1450,1);\
__declare_static_bit_vector(konst_1452,1);\
bit_vector_clear(&konst_1452);\
__declare_static_bit_vector(MUX_1453,1);\
__declare_static_bit_vector(konst_1455,3);\
bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1456,1);\
__declare_static_bit_vector(konst_1458,1);\
bit_vector_clear(&konst_1458);\
__declare_static_bit_vector(MUX_1459,1);\
__declare_static_bit_vector(OR_u1_u1_1460,1);\
__declare_static_bit_vector(OR_u1_u1_1461,1);\
bit_vector_clear(&konst_1436);\
konst_1436.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1436), &(EQ_u3_u1_1437));\
if (has_undefined_bit(&EQ_u3_u1_1437)) {fprintf(stderr, "Error: variable EQ_u3_u1_1437 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1437));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1437)){bit_vector_cast_to_bit_vector(0, &(MUX_1440), &(p1_valid));\
}else {bit_vector_clear(&konst_1439);\
bit_vector_cast_to_bit_vector(0, &(MUX_1440), &(konst_1439));\
}bit_vector_clear(&konst_1442);\
konst_1442.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1442), &(EQ_u3_u1_1443));\
if (has_undefined_bit(&EQ_u3_u1_1443)) {fprintf(stderr, "Error: variable EQ_u3_u1_1443 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1443));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1443)){bit_vector_cast_to_bit_vector(0, &(MUX_1446), &(p2_valid));\
}else {bit_vector_clear(&konst_1445);\
bit_vector_cast_to_bit_vector(0, &(MUX_1446), &(konst_1445));\
}bit_vector_or(&(MUX_1440), &(MUX_1446), &(OR_u1_u1_1447));\
bit_vector_clear(&konst_1449);\
konst_1449.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1449), &(EQ_u3_u1_1450));\
if (has_undefined_bit(&EQ_u3_u1_1450)) {fprintf(stderr, "Error: variable EQ_u3_u1_1450 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1450));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1450)){bit_vector_cast_to_bit_vector(0, &(MUX_1453), &(p3_valid));\
}else {bit_vector_clear(&konst_1452);\
bit_vector_cast_to_bit_vector(0, &(MUX_1453), &(konst_1452));\
}bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1455), &(EQ_u3_u1_1456));\
if (has_undefined_bit(&EQ_u3_u1_1456)) {fprintf(stderr, "Error: variable EQ_u3_u1_1456 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1456));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1456)){bit_vector_cast_to_bit_vector(0, &(MUX_1459), &(p4_valid));\
}else {bit_vector_clear(&konst_1458);\
bit_vector_cast_to_bit_vector(0, &(MUX_1459), &(konst_1458));\
}bit_vector_or(&(MUX_1453), &(MUX_1459), &(OR_u1_u1_1460));\
bit_vector_or(&(OR_u1_u1_1447), &(OR_u1_u1_1460), &(OR_u1_u1_1461));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1461));\
;

#define _outputPort_4_Daemon_assign_stmt_1466_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;
;

#define _outputPort_4_Daemon_branch_block_stmt_1249_c_export_apply_macro_ ;

#define _outputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _prioritySelect_inner_inarg_prep_macro__ __declare_static_bit_vector(down_counter,8);\
bit_vector_cast_to_bit_vector(0, &(down_counter), &((*__pdown_counter)));\
__declare_static_bit_vector(active_packet,3);\
bit_vector_cast_to_bit_vector(0, &(active_packet), &((*__pactive_packet)));\
__declare_static_bit_vector(priority_pkt,3);\
bit_vector_cast_to_bit_vector(0, &(priority_pkt), &((*__ppriority_pkt)));\
__declare_static_bit_vector(p1_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &((*__pp1_valid)));\
__declare_static_bit_vector(p2_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &((*__pp2_valid)));\
__declare_static_bit_vector(p3_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &((*__pp3_valid)));\
__declare_static_bit_vector(p4_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &((*__pp4_valid)));\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_priority_pkt,3);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(select_1,1);\
__declare_static_bit_vector(select_2,1);\
__declare_static_bit_vector(select_3,1);\
__declare_static_bit_vector(select_4,1);\

#define _prioritySelect_assign_stmt_455_c_macro_ __declare_static_bit_vector(konst_453,8);\
bit_vector_clear(&konst_453);\
__declare_static_bit_vector(EQ_u8_u1_454,1);\
bit_vector_clear(&konst_453);\
bit_vector_equal(0, &(down_counter), &(konst_453), &(EQ_u8_u1_454));\
bit_vector_cast_to_bit_vector(0, &(d0), &(EQ_u8_u1_454));\
;

#define _prioritySelect_assign_stmt_473_c_macro_ __declare_static_bit_vector(AND_u1_u1_459,1);\
__declare_static_bit_vector(konst_461,3);\
bit_vector_clear(&konst_461);\
konst_461.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_462,1);\
__declare_static_bit_vector(NOT_u1_u1_464,1);\
__declare_static_bit_vector(NOT_u1_u1_466,1);\
__declare_static_bit_vector(AND_u1_u1_467,1);\
__declare_static_bit_vector(NOT_u1_u1_469,1);\
__declare_static_bit_vector(AND_u1_u1_470,1);\
__declare_static_bit_vector(OR_u1_u1_471,1);\
__declare_static_bit_vector(AND_u1_u1_472,1);\
bit_vector_and(&(d0), &(p1_valid), &(AND_u1_u1_459));\
bit_vector_clear(&konst_461);\
konst_461.val.byte_array[0] = 1;\
bit_vector_equal(0, &(priority_pkt), &(konst_461), &(EQ_u3_u1_462));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_464));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_466));\
bit_vector_and(&(NOT_u1_u1_464), &(NOT_u1_u1_466), &(AND_u1_u1_467));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_469));\
bit_vector_and(&(AND_u1_u1_467), &(NOT_u1_u1_469), &(AND_u1_u1_470));\
bit_vector_or(&(EQ_u3_u1_462), &(AND_u1_u1_470), &(OR_u1_u1_471));\
bit_vector_and(&(AND_u1_u1_459), &(OR_u1_u1_471), &(AND_u1_u1_472));\
bit_vector_cast_to_bit_vector(0, &(select_1), &(AND_u1_u1_472));\
;

#define _prioritySelect_assign_stmt_491_c_macro_ __declare_static_bit_vector(AND_u1_u1_477,1);\
__declare_static_bit_vector(konst_479,3);\
bit_vector_clear(&konst_479);\
konst_479.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_480,1);\
__declare_static_bit_vector(NOT_u1_u1_482,1);\
__declare_static_bit_vector(NOT_u1_u1_484,1);\
__declare_static_bit_vector(AND_u1_u1_485,1);\
__declare_static_bit_vector(NOT_u1_u1_487,1);\
__declare_static_bit_vector(AND_u1_u1_488,1);\
__declare_static_bit_vector(OR_u1_u1_489,1);\
__declare_static_bit_vector(AND_u1_u1_490,1);\
bit_vector_and(&(d0), &(p2_valid), &(AND_u1_u1_477));\
bit_vector_clear(&konst_479);\
konst_479.val.byte_array[0] = 2;\
bit_vector_equal(0, &(priority_pkt), &(konst_479), &(EQ_u3_u1_480));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_482));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_484));\
bit_vector_and(&(NOT_u1_u1_482), &(NOT_u1_u1_484), &(AND_u1_u1_485));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_487));\
bit_vector_and(&(AND_u1_u1_485), &(NOT_u1_u1_487), &(AND_u1_u1_488));\
bit_vector_or(&(EQ_u3_u1_480), &(AND_u1_u1_488), &(OR_u1_u1_489));\
bit_vector_and(&(AND_u1_u1_477), &(OR_u1_u1_489), &(AND_u1_u1_490));\
bit_vector_cast_to_bit_vector(0, &(select_2), &(AND_u1_u1_490));\
;

#define _prioritySelect_assign_stmt_509_c_macro_ __declare_static_bit_vector(AND_u1_u1_495,1);\
__declare_static_bit_vector(konst_497,3);\
bit_vector_clear(&konst_497);\
konst_497.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_498,1);\
__declare_static_bit_vector(NOT_u1_u1_500,1);\
__declare_static_bit_vector(NOT_u1_u1_502,1);\
__declare_static_bit_vector(AND_u1_u1_503,1);\
__declare_static_bit_vector(NOT_u1_u1_505,1);\
__declare_static_bit_vector(AND_u1_u1_506,1);\
__declare_static_bit_vector(OR_u1_u1_507,1);\
__declare_static_bit_vector(AND_u1_u1_508,1);\
bit_vector_and(&(d0), &(p3_valid), &(AND_u1_u1_495));\
bit_vector_clear(&konst_497);\
konst_497.val.byte_array[0] = 3;\
bit_vector_equal(0, &(priority_pkt), &(konst_497), &(EQ_u3_u1_498));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_500));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_502));\
bit_vector_and(&(NOT_u1_u1_500), &(NOT_u1_u1_502), &(AND_u1_u1_503));\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_505));\
bit_vector_and(&(AND_u1_u1_503), &(NOT_u1_u1_505), &(AND_u1_u1_506));\
bit_vector_or(&(EQ_u3_u1_498), &(AND_u1_u1_506), &(OR_u1_u1_507));\
bit_vector_and(&(AND_u1_u1_495), &(OR_u1_u1_507), &(AND_u1_u1_508));\
bit_vector_cast_to_bit_vector(0, &(select_3), &(AND_u1_u1_508));\
;

#define _prioritySelect_assign_stmt_527_c_macro_ __declare_static_bit_vector(AND_u1_u1_513,1);\
__declare_static_bit_vector(konst_515,3);\
bit_vector_clear(&konst_515);\
konst_515.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_516,1);\
__declare_static_bit_vector(NOT_u1_u1_518,1);\
__declare_static_bit_vector(NOT_u1_u1_520,1);\
__declare_static_bit_vector(AND_u1_u1_521,1);\
__declare_static_bit_vector(NOT_u1_u1_523,1);\
__declare_static_bit_vector(AND_u1_u1_524,1);\
__declare_static_bit_vector(OR_u1_u1_525,1);\
__declare_static_bit_vector(AND_u1_u1_526,1);\
bit_vector_and(&(d0), &(p4_valid), &(AND_u1_u1_513));\
bit_vector_clear(&konst_515);\
konst_515.val.byte_array[0] = 4;\
bit_vector_equal(0, &(priority_pkt), &(konst_515), &(EQ_u3_u1_516));\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_518));\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_520));\
bit_vector_and(&(NOT_u1_u1_518), &(NOT_u1_u1_520), &(AND_u1_u1_521));\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_523));\
bit_vector_and(&(AND_u1_u1_521), &(NOT_u1_u1_523), &(AND_u1_u1_524));\
bit_vector_or(&(EQ_u3_u1_516), &(AND_u1_u1_524), &(OR_u1_u1_525));\
bit_vector_and(&(AND_u1_u1_513), &(OR_u1_u1_525), &(AND_u1_u1_526));\
bit_vector_cast_to_bit_vector(0, &(select_4), &(AND_u1_u1_526));\
;

#define _prioritySelect_assign_stmt_548_c_macro_ __declare_static_bit_vector(konst_530,3);\
bit_vector_clear(&konst_530);\
konst_530.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_531,3);\
bit_vector_clear(&konst_531);\
__declare_static_bit_vector(MUX_532,3);\
__declare_static_bit_vector(konst_534,3);\
bit_vector_clear(&konst_534);\
konst_534.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_535,3);\
bit_vector_clear(&konst_535);\
__declare_static_bit_vector(MUX_536,3);\
__declare_static_bit_vector(OR_u3_u3_537,3);\
__declare_static_bit_vector(konst_539,3);\
bit_vector_clear(&konst_539);\
konst_539.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_540,3);\
bit_vector_clear(&konst_540);\
__declare_static_bit_vector(MUX_541,3);\
__declare_static_bit_vector(konst_543,3);\
bit_vector_clear(&konst_543);\
konst_543.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_544,3);\
bit_vector_clear(&konst_544);\
__declare_static_bit_vector(MUX_545,3);\
__declare_static_bit_vector(OR_u3_u3_546,3);\
__declare_static_bit_vector(OR_u3_u3_547,3);\
if (has_undefined_bit(&select_1)) {fprintf(stderr, "Error: variable select_1 has undefined value (%s) at test point.\n", to_string(&select_1));assert(0);} \
if(bit_vector_to_uint64(0, &select_1)){bit_vector_clear(&konst_530);\
konst_530.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_532), &(konst_530));\
}else {bit_vector_clear(&konst_531);\
bit_vector_cast_to_bit_vector(0, &(MUX_532), &(konst_531));\
}if (has_undefined_bit(&select_2)) {fprintf(stderr, "Error: variable select_2 has undefined value (%s) at test point.\n", to_string(&select_2));assert(0);} \
if(bit_vector_to_uint64(0, &select_2)){bit_vector_clear(&konst_534);\
konst_534.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_536), &(konst_534));\
}else {bit_vector_clear(&konst_535);\
bit_vector_cast_to_bit_vector(0, &(MUX_536), &(konst_535));\
}bit_vector_or(&(MUX_532), &(MUX_536), &(OR_u3_u3_537));\
if (has_undefined_bit(&select_3)) {fprintf(stderr, "Error: variable select_3 has undefined value (%s) at test point.\n", to_string(&select_3));assert(0);} \
if(bit_vector_to_uint64(0, &select_3)){bit_vector_clear(&konst_539);\
konst_539.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_541), &(konst_539));\
}else {bit_vector_clear(&konst_540);\
bit_vector_cast_to_bit_vector(0, &(MUX_541), &(konst_540));\
}if (has_undefined_bit(&select_4)) {fprintf(stderr, "Error: variable select_4 has undefined value (%s) at test point.\n", to_string(&select_4));assert(0);} \
if(bit_vector_to_uint64(0, &select_4)){bit_vector_clear(&konst_543);\
konst_543.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_545), &(konst_543));\
}else {bit_vector_clear(&konst_544);\
bit_vector_cast_to_bit_vector(0, &(MUX_545), &(konst_544));\
}bit_vector_or(&(MUX_541), &(MUX_545), &(OR_u3_u3_546));\
bit_vector_or(&(OR_u3_u3_537), &(OR_u3_u3_546), &(OR_u3_u3_547));\
bit_vector_cast_to_bit_vector(0, &(next_active_packet), &(OR_u3_u3_547));\
;

#define _prioritySelect_assign_stmt_577_c_macro_ __declare_static_bit_vector(konst_551,3);\
bit_vector_clear(&konst_551);\
konst_551.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_552,1);\
__declare_static_bit_vector(konst_553,3);\
bit_vector_clear(&konst_553);\
konst_553.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_554,3);\
bit_vector_clear(&konst_554);\
__declare_static_bit_vector(MUX_555,3);\
__declare_static_bit_vector(konst_557,3);\
bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_558,1);\
__declare_static_bit_vector(konst_559,3);\
bit_vector_clear(&konst_559);\
konst_559.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_560,3);\
bit_vector_clear(&konst_560);\
__declare_static_bit_vector(MUX_561,3);\
__declare_static_bit_vector(OR_u3_u3_562,3);\
__declare_static_bit_vector(konst_564,3);\
bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_565,1);\
__declare_static_bit_vector(konst_566,3);\
bit_vector_clear(&konst_566);\
konst_566.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_567,3);\
bit_vector_clear(&konst_567);\
__declare_static_bit_vector(MUX_568,3);\
__declare_static_bit_vector(konst_570,3);\
bit_vector_clear(&konst_570);\
konst_570.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_571,1);\
__declare_static_bit_vector(konst_572,3);\
bit_vector_clear(&konst_572);\
konst_572.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_573,3);\
bit_vector_clear(&konst_573);\
__declare_static_bit_vector(MUX_574,3);\
__declare_static_bit_vector(OR_u3_u3_575,3);\
__declare_static_bit_vector(OR_u3_u3_576,3);\
bit_vector_clear(&konst_551);\
konst_551.val.byte_array[0] = 1;\
bit_vector_equal(0, &(priority_pkt), &(konst_551), &(EQ_u3_u1_552));\
if (has_undefined_bit(&EQ_u3_u1_552)) {fprintf(stderr, "Error: variable EQ_u3_u1_552 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_552));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_552)){bit_vector_clear(&konst_553);\
konst_553.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_555), &(konst_553));\
}else {bit_vector_clear(&konst_554);\
bit_vector_cast_to_bit_vector(0, &(MUX_555), &(konst_554));\
}bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 2;\
bit_vector_equal(0, &(priority_pkt), &(konst_557), &(EQ_u3_u1_558));\
if (has_undefined_bit(&EQ_u3_u1_558)) {fprintf(stderr, "Error: variable EQ_u3_u1_558 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_558));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_558)){bit_vector_clear(&konst_559);\
konst_559.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_561), &(konst_559));\
}else {bit_vector_clear(&konst_560);\
bit_vector_cast_to_bit_vector(0, &(MUX_561), &(konst_560));\
}bit_vector_or(&(MUX_555), &(MUX_561), &(OR_u3_u3_562));\
bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 3;\
bit_vector_equal(0, &(priority_pkt), &(konst_564), &(EQ_u3_u1_565));\
if (has_undefined_bit(&EQ_u3_u1_565)) {fprintf(stderr, "Error: variable EQ_u3_u1_565 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_565));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_565)){bit_vector_clear(&konst_566);\
konst_566.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_568), &(konst_566));\
}else {bit_vector_clear(&konst_567);\
bit_vector_cast_to_bit_vector(0, &(MUX_568), &(konst_567));\
}bit_vector_clear(&konst_570);\
konst_570.val.byte_array[0] = 4;\
bit_vector_equal(0, &(priority_pkt), &(konst_570), &(EQ_u3_u1_571));\
if (has_undefined_bit(&EQ_u3_u1_571)) {fprintf(stderr, "Error: variable EQ_u3_u1_571 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_571));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_571)){bit_vector_clear(&konst_572);\
konst_572.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_574), &(konst_572));\
}else {bit_vector_clear(&konst_573);\
bit_vector_cast_to_bit_vector(0, &(MUX_574), &(konst_573));\
}bit_vector_or(&(MUX_568), &(MUX_574), &(OR_u3_u3_575));\
bit_vector_or(&(OR_u3_u3_562), &(OR_u3_u3_575), &(OR_u3_u3_576));\
bit_vector_cast_to_bit_vector(0, &(next_priority_pkt), &(OR_u3_u3_576));\
;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_priority_pkt)), &(next_priority_pkt));\
;
