/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 */
#include "tomcrypt_private.h"

/**
   @file cfb_done.c
   CFB implementation, finish chain, Tom St Denis
*/

#ifdef LTC_CFB_MODE

/** Terminate the chain
  @param cfb    The CFB chain to terminate
  @return CRYPT_OK on success
*/
int cfb_done(symmetric_CFB *cfb)
{
   LTC_ARGCHK(cfb != NULL);

   return ecb_done(&cfb->ecb);
}



#endif

/* ref:         $Format:%D$ */
/* git commit:  $Format:%H$ */
/* commit time: $Format:%ai$ */
