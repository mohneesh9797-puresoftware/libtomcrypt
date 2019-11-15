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
   @file lrw_done.c
   LRW_MODE implementation, Free resources, Tom St Denis
*/

#ifdef LTC_LRW_MODE

/**
  Terminate a LRW state
  @param lrw   The state to terminate
  @return CRYPT_OK if successful
*/
int lrw_done(symmetric_LRW *lrw)
{
   LTC_ARGCHK(lrw != NULL);

   return ecb_done(&lrw->ecb);
}

#endif
/* ref:         $Format:%D$ */
/* git commit:  $Format:%H$ */
/* commit time: $Format:%ai$ */
