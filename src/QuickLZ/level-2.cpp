/****************************************************************************
 *
 * Copyright (C) 2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Vladimir Lin , Vladimir Forest )
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

#include "qlz.hpp"

QT_BEGIN_NAMESPACE

//////////////////////////////////////////////////////////////////////////////

inline void reset_table_compress(qlz_state_compress_level_2 * state)
{
  for (int i = 0 ; i < QLZ_HASH_VALUES_L2 ; i++ ) {
    state -> hash_counter [ i ] = 0               ;
  }                                               ;
}

//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

QT_END_NAMESPACE
