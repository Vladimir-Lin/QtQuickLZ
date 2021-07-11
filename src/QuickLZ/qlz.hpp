/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com
 * URL      : http://qtlz4.sourceforge.net/
 *
 * QtLZ4 acts as an interface between Qt and QuickLZ library.
 * Please keep QtLZ4 as simple as possible.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef PRIVATE_QLZ_H
#define PRIVATE_QLZ_H

#include "qtquicklz.h"

QT_BEGIN_NAMESPACE

#define QLZ_POINTERS_L1       0
#define QLZ_POINTERS_L2       1
#define QLZ_POINTERS_L3       4
#define QLZ_POINTERS_L4      16
#define QLZ_HASH_VALUES_L1 4096
#define QLZ_HASH_VALUES_L2 4096
#define QLZ_HASH_VALUES_L3 2048
#define QLZ_HASH_VALUES_L4 4096

typedef struct              {
  unsigned int cache        ;
  unsigned int offset       ;
} qlz_hash_compress_level_1 ;

typedef struct                                                  {
  size_t                    stream_counter                      ;
  qlz_hash_compress_level_1 hash         [ QLZ_HASH_VALUES_L1 ] ;
  unsigned char             hash_counter [ QLZ_HASH_VALUES_L1 ] ;
} qlz_state_compress_level_1                                    ;

typedef struct                 {
  const unsigned char * offset ;
} qlz_hash_decompress_level_1  ;

typedef struct                                                    {
  qlz_hash_decompress_level_1 hash         [ QLZ_HASH_VALUES_L1 ] ;
  unsigned char               hash_counter [ QLZ_HASH_VALUES_L1 ] ;
  size_t                      stream_counter                      ;
} qlz_state_decompress_level_1                                    ;

typedef struct                 {
  const unsigned char * offset ;
} qlz_hash_compress_level_2    ;

typedef struct                                                  {
  int                       buffer                              ;
  unsigned char           * stream_buffer                       ;
  size_t                    stream_counter                      ;
  qlz_hash_compress_level_2 hash         [ QLZ_HASH_VALUES_L2 ] ;
  unsigned char             hash_counter [ QLZ_HASH_VALUES_L2 ] ;
} qlz_state_compress_level_2                                    ;

typedef struct                 {
  const unsigned char * offset ;
} qlz_hash_decompress_level_2  ;

typedef struct                                                     {
  int                         buffer                               ;
  unsigned char             * stream_buffer                        ;
  qlz_hash_decompress_level_2 hash          [ QLZ_HASH_VALUES_L2 ] ;
  unsigned char               hash_counter  [ QLZ_HASH_VALUES_L2 ] ;
  size_t                      stream_counter                       ;
} qlz_state_decompress_level_2                                     ;

typedef struct                                     {
  const unsigned char * offset [ QLZ_POINTERS_L3 ] ;
} qlz_hash_compress_level_3                        ;

typedef struct                                                  {
  int                       buffer                              ;
  unsigned char           * stream_buffer                       ;
  size_t                    stream_counter                      ;
  qlz_hash_compress_level_3 hash         [ QLZ_HASH_VALUES_L3 ] ;
  unsigned char             hash_counter [ QLZ_HASH_VALUES_L3 ] ;
} qlz_state_compress_level_3                                    ;

typedef struct                                     {
  const unsigned char * offset [ QLZ_POINTERS_L3 ] ;
} qlz_hash_decompress_level_3                      ;

typedef struct                                                     {
  int                         buffer                               ;
  unsigned char             * stream_buffer                        ;
  qlz_hash_decompress_level_3 hash          [ QLZ_HASH_VALUES_L3 ] ;
  unsigned char               hash_counter  [ QLZ_HASH_VALUES_L3 ] ;
  size_t                      stream_counter                       ;
} qlz_state_decompress_level_3                                     ;

typedef struct                                     {
  const unsigned char * offset [ QLZ_POINTERS_L4 ] ;
} qlz_hash_compress_level_4                        ;

typedef struct                                                  {
  int                       buffer                              ;
  unsigned char           * stream_buffer                       ;
  size_t                    stream_counter                      ;
  qlz_hash_compress_level_4 hash         [ QLZ_HASH_VALUES_L4 ] ;
  unsigned char             hash_counter [ QLZ_HASH_VALUES_L4 ] ;
} qlz_state_compress_level_4                                    ;

typedef struct                                     {
  const unsigned char * offset [ QLZ_POINTERS_L4 ] ;
} qlz_hash_decompress_level_4                      ;

typedef struct                                            {
  int                         buffer                      ;
  unsigned char             * stream_buffer               ;
  qlz_hash_decompress_level_4 hash [ QLZ_HASH_VALUES_L4 ] ;
  size_t                      stream_counter              ;
} qlz_state_decompress_level_4                            ;

QT_END_NAMESPACE

#endif
