/* threshcrypt crypt.h
 * Copyright 2012 Ryan Castellucci <code@ryanc.org>
 * This software is published under the terms of the Simplified BSD License.
 * Please see the 'COPYING' file for details.
 */

#ifndef THRESHCRYPT_CRYPT_H_
#define THRESHCRYPT_CRYPT_H_

#define encrypt_data(idat, odat, sz, mk, ks, nh,       hs) \
          crypt_data(idat, odat, sz, mk, ks, nh, NULL, hs, MODE_ENCRYPT)
#define decrypt_data(idat, odat, sz, mk, ks,       ch, hs) \
          crypt_data(idat, odat, sz, mk, ks, NULL, ch, hs, MODE_DECRYPT)
int crypt_data(const unsigned char *, unsigned char *, size_t,
               const unsigned char *, size_t, unsigned char *,
               const unsigned char *, size_t, int );

int hmac_vrfymem(int, const unsigned char *, unsigned long,
                      const unsigned char *, unsigned long,
                      const unsigned char *, unsigned long *);

// vim: ts=2 sw=2 et ai si
#endif // THRESHCRYPT_CRYPT_H_
