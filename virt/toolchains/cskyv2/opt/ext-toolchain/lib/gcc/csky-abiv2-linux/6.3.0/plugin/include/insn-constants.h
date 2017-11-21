/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define UNSPEC_TLS_BASE 19
#define FLAG_PUSH 8
#define UNSPEC_CSKY_CASESI 24
#define UNSPEC_TLS_LABEL 21
#define UNSPEC_REGISTER_USE 23
#define FLAG_POP 9
#define VUNSPEC_POOL_4 2
#define TLS_LE32 4
#define VUNSPEC_EH_RETURN 22
#define PIC_SYMBOL_GOT 2
#define PIC_SYMBOL_PLT 3
#define TLS_IE32 3
#define VUNSPEC_POOL_LABEL 1
#define PIC_SYMBOL_GOTOFF 1
#define PIC_SYMBOL_GOTPC 14
#define VUNSPEC_SYMBOL_REF 3
#define UNSPEC_TLS 20
#define PIC_SYMBOL_GOTPC_GRS 15
#define VUNSPEC_ALIGN 0
#define TLS_LDM32 1
#define PIC_SYMBOL_GRS 5
#define TLS_GD32 0
#define FLAG_EPILOGUE 10
#define PIC_SYMBOL_BSR 4
#define TLS_LDO32 2

enum unspec {
  UNSPEC_PUSHPOP_MULT = 0
};
#define NUM_UNSPEC_VALUES 1
extern const char *const unspec_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
