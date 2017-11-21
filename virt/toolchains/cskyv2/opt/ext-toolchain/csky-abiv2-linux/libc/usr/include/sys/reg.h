/* Copyright (C) 1998 Free Software Foundation, Inc.
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

#ifndef _SYS_REG_H
#define _SYS_REG_H	1

/* Index into an array of 4 byte integers returned from ptrace for
   location of the users' stored general purpose registers. */

enum
{
  PT_R1 = 0,
#define PT_R1 PT_R1
  PT_R2 = 1,
#define PT_R2 PT_R2
  PT_R3 = 2,
#define PT_R3 PT_R3
  PT_R4 = 3,
#define PT_R4 PT_R4
  PT_R5 = 4,
#define PT_R5 PT_R5
  PT_R6 = 5,
#define PT_R6 PT_R6
  PT_R7 = 6,
#define PT_R7 PT_R7
  PT_R8 = 7,
#define PT_R8 PT_R8
  PT_R9 = 8,
#define PT_R9 PT_R9
  PT_R10 = 9,
#define PT_R10 PT_R10
  PT_R11 = 10,
#define PT_R11 PT_R11
  PT_R12 = 11,
#define PT_R12 PT_R12
  PT_R13 = 12,
#define PT_R13 PT_R13
  PT_R14 = 13,
#define PT_R14 PT_R14
  PT_R15 = 14,
#define PT_R15 PT_R15
  PT_SYSCALL_R1 = 16,
#define PT_SYSCALL_R1 PT_SYSCALL_R1
  PT_SR = 17,
#define PT_SR PT_SR
  PT_PC = 18,
#define PT_PC PT_PC
};

#endif	/* _SYS_REG_H */
