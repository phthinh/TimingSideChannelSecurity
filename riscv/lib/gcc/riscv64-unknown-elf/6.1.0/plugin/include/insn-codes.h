/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_subsf3 = 12,
  CODE_FOR_subdf3 = 13,
  CODE_FOR_mulsf3 = 24,
  CODE_FOR_muldf3 = 25,
  CODE_FOR_muldi3_highpart = 33,
  CODE_FOR_umuldi3_highpart = 34,
  CODE_FOR_usmuldi3_highpart = 35,
  CODE_FOR_mulsi3_highpart = 36,
  CODE_FOR_umulsi3_highpart = 37,
  CODE_FOR_usmulsi3_highpart = 38,
  CODE_FOR_divsi3 = 39,
  CODE_FOR_udivsi3 = 40,
  CODE_FOR_divdi3 = 41,
  CODE_FOR_udivdi3 = 42,
  CODE_FOR_modsi3 = 43,
  CODE_FOR_umodsi3 = 44,
  CODE_FOR_moddi3 = 45,
  CODE_FOR_umoddi3 = 46,
  CODE_FOR_divsf3 = 47,
  CODE_FOR_divdf3 = 48,
  CODE_FOR_sqrtsf2 = 49,
  CODE_FOR_sqrtdf2 = 50,
  CODE_FOR_fmasf4 = 51,
  CODE_FOR_fmadf4 = 52,
  CODE_FOR_fmssf4 = 53,
  CODE_FOR_fmsdf4 = 54,
  CODE_FOR_nfmasf4 = 55,
  CODE_FOR_nfmadf4 = 56,
  CODE_FOR_nfmssf4 = 57,
  CODE_FOR_nfmsdf4 = 58,
  CODE_FOR_abssf2 = 63,
  CODE_FOR_absdf2 = 64,
  CODE_FOR_sminsf3 = 65,
  CODE_FOR_smindf3 = 66,
  CODE_FOR_smaxsf3 = 67,
  CODE_FOR_smaxdf3 = 68,
  CODE_FOR_negsf2 = 69,
  CODE_FOR_negdf2 = 70,
  CODE_FOR_one_cmplsi2 = 71,
  CODE_FOR_one_cmpldi2 = 72,
  CODE_FOR_andsi3 = 73,
  CODE_FOR_anddi3 = 74,
  CODE_FOR_iorsi3 = 75,
  CODE_FOR_iordi3 = 76,
  CODE_FOR_xorsi3 = 77,
  CODE_FOR_xordi3 = 78,
  CODE_FOR_truncdfsf2 = 79,
  CODE_FOR_truncdisi2 = 80,
  CODE_FOR_zero_extendsidi2 = 87,
  CODE_FOR_zero_extendhisi2 = 89,
  CODE_FOR_zero_extendhidi2 = 90,
  CODE_FOR_zero_extendqihi2 = 91,
  CODE_FOR_zero_extendqisi2 = 92,
  CODE_FOR_zero_extendqidi2 = 93,
  CODE_FOR_extendsidi2 = 94,
  CODE_FOR_extendqihi2 = 95,
  CODE_FOR_extendqisi2 = 96,
  CODE_FOR_extendqidi2 = 97,
  CODE_FOR_extendhihi2 = 98,
  CODE_FOR_extendhisi2 = 99,
  CODE_FOR_extendhidi2 = 100,
  CODE_FOR_extendsfdf2 = 101,
  CODE_FOR_fix_truncdfsi2 = 102,
  CODE_FOR_fix_truncsfsi2 = 103,
  CODE_FOR_fix_truncdfdi2 = 104,
  CODE_FOR_fix_truncsfdi2 = 105,
  CODE_FOR_floatsidf2 = 106,
  CODE_FOR_floatdidf2 = 107,
  CODE_FOR_floatsisf2 = 108,
  CODE_FOR_floatdisf2 = 109,
  CODE_FOR_floatunssidf2 = 110,
  CODE_FOR_floatunsdidf2 = 111,
  CODE_FOR_floatunssisf2 = 112,
  CODE_FOR_floatunsdisf2 = 113,
  CODE_FOR_fixuns_truncdfsi2 = 114,
  CODE_FOR_fixuns_truncsfsi2 = 115,
  CODE_FOR_fixuns_truncdfdi2 = 116,
  CODE_FOR_fixuns_truncsfdi2 = 117,
  CODE_FOR_got_loadsi = 118,
  CODE_FOR_got_loaddi = 119,
  CODE_FOR_tls_add_tp_lesi = 120,
  CODE_FOR_tls_add_tp_ledi = 121,
  CODE_FOR_got_load_tls_gdsi = 122,
  CODE_FOR_got_load_tls_gddi = 123,
  CODE_FOR_got_load_tls_iesi = 124,
  CODE_FOR_got_load_tls_iedi = 125,
  CODE_FOR_auipcsi = 126,
  CODE_FOR_auipcdi = 127,
  CODE_FOR_addhihi3 = 134,
  CODE_FOR_addsihi3 = 135,
  CODE_FOR_xorhihi3 = 136,
  CODE_FOR_xorsihi3 = 137,
  CODE_FOR_load_lowdf = 145,
  CODE_FOR_load_lowdi = 146,
  CODE_FOR_load_lowtf = 147,
  CODE_FOR_load_highdf = 148,
  CODE_FOR_load_highdi = 149,
  CODE_FOR_load_hightf = 150,
  CODE_FOR_store_worddf = 151,
  CODE_FOR_store_worddi = 152,
  CODE_FOR_store_wordtf = 153,
  CODE_FOR_fence = 154,
  CODE_FOR_fence_i = 155,
  CODE_FOR_ashlsi3 = 156,
  CODE_FOR_ashrsi3 = 157,
  CODE_FOR_lshrsi3 = 158,
  CODE_FOR_ashldi3 = 167,
  CODE_FOR_ashrdi3 = 168,
  CODE_FOR_lshrdi3 = 169,
  CODE_FOR_ashlsi3_extend = 170,
  CODE_FOR_ashrsi3_extend = 171,
  CODE_FOR_lshrsi3_extend = 172,
  CODE_FOR_cstoresf4 = 179,
  CODE_FOR_cstoredf4 = 180,
  CODE_FOR_jump = 221,
  CODE_FOR_indirect_jumpsi = 222,
  CODE_FOR_indirect_jumpdi = 223,
  CODE_FOR_tablejumpsi = 224,
  CODE_FOR_tablejumpdi = 225,
  CODE_FOR_blockage = 226,
  CODE_FOR_simple_return = 227,
  CODE_FOR_simple_return_internal = 228,
  CODE_FOR_eh_set_lr_si = 229,
  CODE_FOR_eh_set_lr_di = 230,
  CODE_FOR_sibcall_internal = 231,
  CODE_FOR_sibcall_value_internal = 232,
  CODE_FOR_sibcall_value_multiple_internal = 233,
  CODE_FOR_call_internal = 234,
  CODE_FOR_call_value_internal = 235,
  CODE_FOR_call_value_multiple_internal = 236,
  CODE_FOR_nop = 237,
  CODE_FOR_trap = 238,
  CODE_FOR_gpr_save = 239,
  CODE_FOR_gpr_restore = 240,
  CODE_FOR_gpr_restore_return = 241,
  CODE_FOR_mem_thread_fence_1 = 242,
  CODE_FOR_atomic_storesi = 243,
  CODE_FOR_atomic_storedi = 244,
  CODE_FOR_atomic_addsi = 245,
  CODE_FOR_atomic_orsi = 246,
  CODE_FOR_atomic_xorsi = 247,
  CODE_FOR_atomic_andsi = 248,
  CODE_FOR_atomic_adddi = 249,
  CODE_FOR_atomic_ordi = 250,
  CODE_FOR_atomic_xordi = 251,
  CODE_FOR_atomic_anddi = 252,
  CODE_FOR_atomic_fetch_addsi = 253,
  CODE_FOR_atomic_fetch_orsi = 254,
  CODE_FOR_atomic_fetch_xorsi = 255,
  CODE_FOR_atomic_fetch_andsi = 256,
  CODE_FOR_atomic_fetch_adddi = 257,
  CODE_FOR_atomic_fetch_ordi = 258,
  CODE_FOR_atomic_fetch_xordi = 259,
  CODE_FOR_atomic_fetch_anddi = 260,
  CODE_FOR_atomic_exchangesi = 261,
  CODE_FOR_atomic_exchangedi = 262,
  CODE_FOR_atomic_cas_value_strongsi = 263,
  CODE_FOR_atomic_cas_value_strongdi = 264,
  CODE_FOR_addsi3 = 294,
  CODE_FOR_adddi3 = 295,
  CODE_FOR_subsi3 = 296,
  CODE_FOR_subdi3 = 297,
  CODE_FOR_mulsi3 = 298,
  CODE_FOR_muldi3 = 299,
  CODE_FOR_mulditi3 = 300,
  CODE_FOR_umulditi3 = 301,
  CODE_FOR_usmulditi3 = 302,
  CODE_FOR_mulsidi3 = 303,
  CODE_FOR_umulsidi3 = 304,
  CODE_FOR_usmulsidi3 = 305,
  CODE_FOR_movdi = 306,
  CODE_FOR_movsi = 307,
  CODE_FOR_movhi = 308,
  CODE_FOR_movqi = 309,
  CODE_FOR_movsf = 310,
  CODE_FOR_movdf = 311,
  CODE_FOR_movti = 312,
  CODE_FOR_clear_cache = 313,
  CODE_FOR_movmemsi = 314,
  CODE_FOR_condjump = 315,
  CODE_FOR_cbranchsi4 = 316,
  CODE_FOR_cbranchdi4 = 317,
  CODE_FOR_cbranchsf4 = 318,
  CODE_FOR_cbranchdf4 = 319,
  CODE_FOR_cstoresi4 = 320,
  CODE_FOR_cstoredi4 = 321,
  CODE_FOR_indirect_jump = 322,
  CODE_FOR_tablejump = 323,
  CODE_FOR_prologue = 324,
  CODE_FOR_epilogue = 325,
  CODE_FOR_sibcall_epilogue = 326,
  CODE_FOR_return = 327,
  CODE_FOR_eh_return = 328,
  CODE_FOR_sibcall = 329,
  CODE_FOR_sibcall_value = 330,
  CODE_FOR_call = 331,
  CODE_FOR_call_value = 332,
  CODE_FOR_untyped_call = 333,
  CODE_FOR_mem_thread_fence = 334,
  CODE_FOR_atomic_compare_and_swapsi = 335,
  CODE_FOR_atomic_compare_and_swapdi = 336,
  CODE_FOR_atomic_test_and_set = 337
};

const unsigned int NUM_INSN_CODES = 338;
#endif /* GCC_INSN_CODES_H */
