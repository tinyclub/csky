/*
 * arch/csky/include/asm/ptrace.h
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file COPYING in the main directory of
 * this archive for more details.
 *  
 * (C) Copyright 2009, C-SKY Microsystems Co., Ltd. (www.c-sky.com)
 *  
 */

#ifndef _CSKY_PTRACE_H
#define _CSKY_PTRACE_H

#define REGNO_R0   	0
#define REGNO_R1   	1
#define REGNO_R2   	2
#define REGNO_R3   	3
#define REGNO_R4   	4
#define REGNO_R5   	5
#define REGNO_R6   	6
#define REGNO_R7   	7
#define REGNO_R8   	8
#define REGNO_R9   	9
#define REGNO_R10  	10
#define REGNO_R11  	11
#define REGNO_R12  	12
#define REGNO_R13  	13
#define REGNO_R14  	14
#define REGNO_R15  	15
#define REGNO_SR   	32
#define REGNO_PC   	33

#if (__CSKY__ == 2) 
#define REGNO_R16  	16
#define REGNO_R17  	17
#define REGNO_R18  	18
#define REGNO_R19  	19
#define REGNO_R20  	20
#define REGNO_R21  	21
#define REGNO_R22  	22
#define REGNO_R23  	23
#define REGNO_R24  	24
#define REGNO_R25  	25
#define REGNO_R26  	26
#define REGNO_R27  	27
#define REGNO_R28  	28
#define REGNO_R29  	29
#define REGNO_R30  	30
#define REGNO_R31  	31
#define REGNO_RHI  	34
#define REGNO_RLO  	35
#endif/* (__CSKY__ == 2) */

#if defined(__CSKYABIV2__)
	#define REGNO_USP  REGNO_R14
#else
	#define REGNO_USP  REGNO_R0
#endif

#ifndef __ASSEMBLY__

/* this struct defines the way the registers are stored on the
   stack during a system call. */
struct  pt_regs {
	unsigned long    pc;
	long             orig_a0;
	unsigned long    sr;
	long             a0;  // ABIV2: r0, ABIV1: r2
	long             a1;  // ABIV2: r1, ABIV1: r3
	long             a2;  // ABIV2: r2, ABIV1: r4
	long             a3;  // ABIV2: r3, ABIV1: r5
	// ABIV2: r4 ~ r13,  ABIV1: r6 ~ r14, r1.
	long             regs[10];
	long             r15;
#if (__CSKY__ == 2)
	// r16~r31;
	long             exregs[16];
	long             rhi;
	long             rlo;
#endif
};

/*
 * This is the extended stack used by the context
 * switcher: it's pushed after the normal "struct pt_regs".
 *
 * ABI_CSKYV2: r4 ~ r11,r16 ~ r17, r26 ~ r30;
 * ABI_CSKYV1: r8 ~ r14,r16 ~ r19, r26 ~ r30.
 */
struct  switch_stack {
#if defined(__CSKYABIV2__)
	unsigned long   r4;
        unsigned long   r5;
        unsigned long   r6;
        unsigned long   r7;
#endif
        unsigned long   r8;
        unsigned long   r9;
        unsigned long   r10;
        unsigned long   r11;
#if !defined(__CSKYABIV2__)    // ABIV1
        unsigned long   r12;
        unsigned long   r13;
        unsigned long   r14;
#endif
        unsigned long   r15;
#if (__CSKY__ == 2)
        unsigned long   r16;
        unsigned long   r17;
#if !defined(__CSKYABIV2__)    // ABIV1
        unsigned long   r18;
        unsigned long   r19;
#endif
        unsigned long   r26;
        unsigned long   r27;
        unsigned long   r28;
        unsigned long   r29;
        unsigned long   r30;
#endif
};

/* Arbitrarily choose the same ptrace numbers as used by the Sparc code. */
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFPREGS          14
#define PTRACE_SETFPREGS          15
#define PTRACE_GET_THREAD_AREA    25

#ifdef __CSKYABIV2__
#define CSKY_HI_NUM               0xcccccccc
#define CSKY_LO_NUM               0xcccccccc
#else
#define CSKY_HI_NUM               34
#define CSKY_LO_NUM               35
#endif
#define CSKY_GREG_NUM             35
#define CSKY_FREG_NUM_HI          72
#define CSKY_FREG_NUM_LO          40
#define CSKY_FCR_NUM              74

#endif /* __ASSEMBLY__ */
#endif /* _CSKY_PTRACE_H */
