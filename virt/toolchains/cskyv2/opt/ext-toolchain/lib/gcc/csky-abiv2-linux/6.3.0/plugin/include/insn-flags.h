/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_abssf2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_absdf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_negsf2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_negdf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_sqrtsf2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_sqrtdf2 (CSKY_ISA_FEATURE(fpv2_divd))
#define HAVE_addsf3 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_adddf3 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_subsf3 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_subdf3 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_mulsf3 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_muldf3 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_extendsfdf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_truncdfsf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_floatsisf2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_floatsidf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_floatunssisf2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_floatunssidf2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_fix_truncsfsi2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_fix_truncdfsi2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_fixuns_truncsfsi2 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_fixuns_truncdfsi2 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_movt (CSKY_ISA_FEATURE(E2))
#define HAVE_movf (CSKY_ISA_FEATURE(E2))
#define HAVE_mvc (CSKY_ISA_FEATURE(E2))
#define HAVE_mvcv 1
#define HAVE_abssi2 (CSKY_ISA_FEATURE(2E3))
#define HAVE_extv (CSKY_ISA_FEATURE(2E3))
#define HAVE_insv (CSKY_ISA_FEATURE(2E3))
#define HAVE_ck801_ashlsi3 (CSKY_ISA_FEATURE(E1))
#define HAVE_ck801_lshrsi3 (CSKY_ISA_FEATURE(E1))
#define HAVE_mulhisi3 (CSKY_ISA_FEATURE(2E3))
#define HAVE_cskyv2_addcc (CSKY_ISA_FEATURE(E2))
#define HAVE_cskyv2_addcc_invert (CSKY_ISA_FEATURE(E2))
#define HAVE_ck801_addc (CSKY_ISA_FEATURE(E1))
#define HAVE_cskyv2_extzv (CSKY_ISA_FEATURE(2E3))
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_clzsi2 (CSKY_ISA_FEATURE(E2))
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqihi2 1
#define HAVE_cskyv2_andnsi3 (CSKY_ISA_FEATURE(E2))
#define HAVE_ck801_andnsi3 (CSKY_ISA_FEATURE(E1))
#define HAVE_divsi3 (CSKY_ISA_FEATURE(div))
#define HAVE_udivsi3 (CSKY_ISA_FEATURE(div))
#define HAVE_indirect_jump 1
#define HAVE_csky_jbt (CSKY_ISA_FEATURE(E2))
#define HAVE_csky_jbf (CSKY_ISA_FEATURE(E2))
#define HAVE_ck801_jbt (CSKY_ISA_FEATURE(E1))
#define HAVE_ck801_jbf (CSKY_ISA_FEATURE(E1))
#define HAVE_csky_eh_return 1
#define HAVE_prologue_get_pc ((GET_CODE(operands[0]) == UNSPEC) \
   && (XINT(operands[0], 1) == PIC_SYMBOL_GOTPC_GRS))
#define HAVE_tls_do_add_pc (CSKY_ISA_FEATURE(tls))
#define HAVE_load_tp_hard (CSKY_ISA_FEATURE(tls) && TARGET_HARD_TP)
#define HAVE_load_tp_soft (CSKY_ISA_FEATURE(tls) && TARGET_SOFT_TP)
#define HAVE_nop 1
#define HAVE_force_register_use 1
#define HAVE_trap 1
#define HAVE_align_4 1
#define HAVE_csky_constpool_label 1
#define HAVE_consttable_4 1
#define HAVE_csky_casesi_dispatch 1
#define HAVE_mulsidi3 (CSKY_ISA_FEATURE(dsp))
#define HAVE_umulsidi3 (CSKY_ISA_FEATURE(dsp))
#define HAVE_maddsidi4 (CSKY_ISA_FEATURE(dsp))
#define HAVE_umaddsidi4 (CSKY_ISA_FEATURE(dsp))
#define HAVE_msubsidi4 (CSKY_ISA_FEATURE(dsp))
#define HAVE_umsubsidi4 (CSKY_ISA_FEATURE(dsp))
#define HAVE_bswapsi2 (CSKY_ISA_FEATURE(E2))
#define HAVE_divsf3 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_divdf3 (CSKY_ISA_FEATURE(fpv2_divd))
#define HAVE_cbranchsf4 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_cbranchdf4 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_movsf (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_movdf (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_cstoresf4 (CSKY_ISA_FEATURE(fpv2_sf))
#define HAVE_cstoredf4 (CSKY_ISA_FEATURE(fpv2_df))
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movdi 1
#define HAVE_movsicc (CSKY_ISA_FEATURE(E2))
#define HAVE_cstoresi4 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_rotlsi3 1
#define HAVE_addsi3 1
#define HAVE_adddi3 1
#define HAVE_subsi3 1
#define HAVE_subdi3 1
#define HAVE_mulsi3 1
#define HAVE_addsicc (CSKY_ISA_FEATURE(E2))
#define HAVE_extzvsi 1
#define HAVE_one_cmplsi2 1
#define HAVE_extendsidi2 1
#define HAVE_andsi3 1
#define HAVE_anddi3 1
#define HAVE_iorsi3 1
#define HAVE_iordi3 1
#define HAVE_xorsi3 1
#define HAVE_xordi3 1
#define HAVE_load_multiple (TARGET_MULTIPLE_STLD)
#define HAVE_store_multiple (TARGET_MULTIPLE_STLD)
#define HAVE_tablejump 1
#define HAVE_jump 1
#define HAVE_cbranchsi4 1
#define HAVE_eh_return 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_allocate_stack 1
#define HAVE_casesi (optimize_size && CSKY_ISA_FEATURE(casesi))
#define HAVE_csky_casesi_internal 1
extern rtx        gen_abssf2                  (rtx, rtx);
extern rtx        gen_absdf2                  (rtx, rtx);
extern rtx        gen_negsf2                  (rtx, rtx);
extern rtx        gen_negdf2                  (rtx, rtx);
extern rtx        gen_sqrtsf2                 (rtx, rtx);
extern rtx        gen_sqrtdf2                 (rtx, rtx);
extern rtx        gen_addsf3                  (rtx, rtx, rtx);
extern rtx        gen_adddf3                  (rtx, rtx, rtx);
extern rtx        gen_subsf3                  (rtx, rtx, rtx);
extern rtx        gen_subdf3                  (rtx, rtx, rtx);
extern rtx        gen_mulsf3                  (rtx, rtx, rtx);
extern rtx        gen_muldf3                  (rtx, rtx, rtx);
extern rtx        gen_extendsfdf2             (rtx, rtx);
extern rtx        gen_truncdfsf2              (rtx, rtx);
extern rtx        gen_floatsisf2              (rtx, rtx);
extern rtx        gen_floatsidf2              (rtx, rtx);
extern rtx        gen_floatunssisf2           (rtx, rtx);
extern rtx        gen_floatunssidf2           (rtx, rtx);
extern rtx        gen_fix_truncsfsi2          (rtx, rtx);
extern rtx        gen_fix_truncdfsi2          (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2       (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2       (rtx, rtx);
extern rtx        gen_movt                    (rtx, rtx, rtx);
extern rtx        gen_movf                    (rtx, rtx, rtx);
extern rtx        gen_mvc                     (rtx);
extern rtx        gen_mvcv                    (rtx);
extern rtx        gen_abssi2                  (rtx, rtx);
extern rtx        gen_extv                    (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                    (rtx, rtx, rtx, rtx);
extern rtx        gen_ck801_ashlsi3           (rtx, rtx, rtx);
extern rtx        gen_ck801_lshrsi3           (rtx, rtx, rtx);
extern rtx        gen_mulhisi3                (rtx, rtx, rtx);
extern rtx        gen_cskyv2_addcc            (rtx, rtx, rtx);
extern rtx        gen_cskyv2_addcc_invert     (rtx, rtx, rtx);
extern rtx        gen_ck801_addc              (rtx, rtx, rtx);
extern rtx        gen_cskyv2_extzv            (rtx, rtx, rtx, rtx);
extern rtx        gen_zero_extendhisi2        (rtx, rtx);
extern rtx        gen_zero_extendqisi2        (rtx, rtx);
extern rtx        gen_zero_extendqihi2        (rtx, rtx);
extern rtx        gen_clzsi2                  (rtx, rtx);
extern rtx        gen_extendhisi2             (rtx, rtx);
extern rtx        gen_extendqisi2             (rtx, rtx);
extern rtx        gen_extendqihi2             (rtx, rtx);
extern rtx        gen_cskyv2_andnsi3          (rtx, rtx, rtx);
extern rtx        gen_ck801_andnsi3           (rtx, rtx, rtx);
extern rtx        gen_divsi3                  (rtx, rtx, rtx);
extern rtx        gen_udivsi3                 (rtx, rtx, rtx);
extern rtx        gen_indirect_jump           (rtx);
extern rtx        gen_csky_jbt                (rtx);
extern rtx        gen_csky_jbf                (rtx);
extern rtx        gen_ck801_jbt               (rtx);
extern rtx        gen_ck801_jbf               (rtx);
extern rtx        gen_csky_eh_return          (rtx);
extern rtx        gen_prologue_get_pc         (rtx);
extern rtx        gen_tls_do_add_pc           (rtx, rtx, rtx);
extern rtx        gen_load_tp_hard            (rtx);
extern rtx        gen_load_tp_soft            (void);
extern rtx        gen_nop                     (void);
extern rtx        gen_force_register_use      (rtx);
extern rtx        gen_trap                    (void);
extern rtx        gen_align_4                 (void);
extern rtx        gen_csky_constpool_label    (rtx);
extern rtx        gen_consttable_4            (rtx);
extern rtx        gen_csky_casesi_dispatch    (rtx);
extern rtx        gen_mulsidi3                (rtx, rtx, rtx);
extern rtx        gen_umulsidi3               (rtx, rtx, rtx);
extern rtx        gen_maddsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_msubsidi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_umsubsidi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_bswapsi2                (rtx, rtx);
extern rtx        gen_divsf3                  (rtx, rtx, rtx);
extern rtx        gen_divdf3                  (rtx, rtx, rtx);
extern rtx        gen_cbranchsf4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4              (rtx, rtx, rtx, rtx);
extern rtx        gen_movsf                   (rtx, rtx);
extern rtx        gen_movdf                   (rtx, rtx);
extern rtx        gen_cstoresf4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4               (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi                   (rtx, rtx);
extern rtx        gen_movhi                   (rtx, rtx);
extern rtx        gen_movqi                   (rtx, rtx);
extern rtx        gen_movdi                   (rtx, rtx);
extern rtx        gen_movsicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                 (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                 (rtx, rtx, rtx);
extern rtx        gen_addsi3                  (rtx, rtx, rtx);
extern rtx        gen_adddi3                  (rtx, rtx, rtx);
extern rtx        gen_subsi3                  (rtx, rtx, rtx);
extern rtx        gen_subdi3                  (rtx, rtx, rtx);
extern rtx        gen_mulsi3                  (rtx, rtx, rtx);
extern rtx        gen_addsicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2             (rtx, rtx);
extern rtx        gen_extendsidi2             (rtx, rtx);
extern rtx        gen_andsi3                  (rtx, rtx, rtx);
extern rtx        gen_anddi3                  (rtx, rtx, rtx);
extern rtx        gen_iorsi3                  (rtx, rtx, rtx);
extern rtx        gen_iordi3                  (rtx, rtx, rtx);
extern rtx        gen_xorsi3                  (rtx, rtx, rtx);
extern rtx        gen_xordi3                  (rtx, rtx, rtx);
extern rtx        gen_load_multiple           (rtx, rtx, rtx);
extern rtx        gen_store_multiple          (rtx, rtx, rtx);
extern rtx        gen_tablejump               (rtx, rtx);
extern rtx        gen_jump                    (rtx);
extern rtx        gen_cbranchsi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_eh_return               (rtx);
extern rtx        gen_call                    (rtx, rtx);
extern rtx        gen_call_value              (rtx, rtx, rtx);
extern rtx        gen_prologue                (void);
extern rtx        gen_epilogue                (void);
extern rtx        gen_builtin_setjmp_receiver (rtx);
extern rtx        gen_allocate_stack          (rtx, rtx);
extern rtx        gen_casesi                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_csky_casesi_internal    (rtx, rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
