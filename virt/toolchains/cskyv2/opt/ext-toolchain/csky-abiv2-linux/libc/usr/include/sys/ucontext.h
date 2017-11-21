/* Copyright (C) 1997, 1999, 2001 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* System V/csky ABI compliant context switching support.  */

#ifndef _SYS_UCONTEXT_H
#define _SYS_UCONTEXT_H	1

#include <features.h>
#include <signal.h>
#include <sys/procfs.h>
#include <bits/sigcontext.h>

/* Type for general register.  */
typedef int greg_t;

/* Number of general registers.  */
#define NGREG	18

/* Container for all general registers.  */
typedef greg_t gregset_t[NGREG];

/* Number of each register is the `gregset_t' array.  */
enum
{
  R_PC = 0,
#define R_PC	R_PC
  R_R1 = 1,
#define R_R1	R_R1
  R_SYSCALLR1 = 2,
#define R_SYSCALLR1    R_SYSCALLR1
  R_SR = 3,
#define R_SR	R_SR
  R_R2 = 4,
#define R_R2	R_R2
  R_R3 = 5,
#define R_R3	R_R3
  R_R4 = 6,
#define R_R4	R_R4
  R_R5 = 7,
#define R_R5	R_R5
  R_R6 = 8,
#define R_R6	R_R6
  R_R7 = 9,
#define R_R7	R_R7
  R_R8 = 10,
#define R_R8	R_R8
  R_R9 = 11,
#define R_R9	R_R9
  R_R10 = 12,
#define R_R10	R_R10
  R_R11 = 13,
#define R_R11	R_R11
  R_R12 = 14,
#define R_R12	R_R12
  R_R13 = 15,
#define R_R13	R_R13
  R_R14 = 16,
#define R_R14	R_R14
  R_R15 = 17,
#define R_R15	R_R15
};


/* Context to describe whole processor state.  */
//typedef struct
//{
//    int version;
//    gregset_t gregs;
//}   mcontext_t;
//
/* Context to describe whole processor state.  This only describes
   the core registers; coprocessor registers get saved elsewhere
   (e.g. in uc_regspace, or somewhere unspecified on the stack
   during non-RT signal handlers).  */
typedef struct sigcontext mcontext_t;

// #define MCONTEXT_VERSION 2

/* Userlevel context.  */
typedef struct ucontext
{
#if 1
    unsigned long int uc_flags;
    struct ucontext * uc_link;
    stack_t           uc_stack;
    mcontext_t        uc_mcontext;
    sigset_t          uc_sigmask ;
#else
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    __sigset_t uc_sigmask;
    stack_t uc_stack;
    mcontext_t uc_mcontext;	/* struct sigcontext */
    long int uc_filler[201];
#endif 
} ucontext_t;

#endif /* sys/ucontext.h */
