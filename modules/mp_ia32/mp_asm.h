/*************************************************
* Lowest Level MPI Algorithms Header File        *
* (C) 1999-2008 The Botan Project                *
*************************************************/

#ifndef BOTAN_MP_ASM_H__
#define BOTAN_MP_ASM_H__

#include <botan/mp_types.h>

#if (BOTAN_MP_WORD_BITS != 32)
   #error The mp_ia32 module requires that BOTAN_MP_WORD_BITS == 32
#endif

namespace Botan {

extern "C" {

/*************************************************
* Helper Macros for x86 Assembly                 *
*************************************************/
#define ASM(x) x "\n\t"

/*************************************************
* Word Multiply                                  *
*************************************************/
inline word word_madd2(word a, word b, word c, word* carry)
   {
   asm(
      ASM("mull %[b]")
      ASM("addl %[c],%[a]")
      ASM("adcl $0,%[carry]")

      : [a]"=a"(a), [b]"=rm"(b), [carry]"=&d"(*carry)
      : "0"(a), "1"(b), [c]"g"(c) : "cc");

   return a;
   }

/*************************************************
* Word Multiply/Add                              *
*************************************************/
inline word word_madd3(word a, word b, word c, word d, word* carry)
   {
   asm(
      ASM("mull %[b]")

      ASM("addl %[c],%[a]")
      ASM("adcl $0,%[carry]")

      ASM("addl %[d],%[a]")
      ASM("adcl $0,%[carry]")

      : [a]"=a"(a), [b]"=rm"(b), [carry]"=&d"(*carry)
      : "0"(a), "1"(b), [c]"g"(c), [d]"g"(d) : "cc");

   return a;
   }

}

}

#endif
