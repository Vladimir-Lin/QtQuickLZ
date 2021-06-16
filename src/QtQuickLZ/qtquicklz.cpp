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
#include "quicklz.h"

QT_BEGIN_NAMESPACE

//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////

QtQuickLZ:: QtQuickLZ (void)
          : qlzPacket (NULL)
{
}

QtQuickLZ::~QtQuickLZ (void)
{
  CleanUp ( ) ;
}

bool QtQuickLZ::isQuickLZ(QByteArray & header)
{
  return false ;
}

bool QtQuickLZ::IsCorrect(int returnCode)
{
  return false ;
}

bool QtQuickLZ::IsEnd(int returnCode)
{
  return ( returnCode > 0 ) ;
}

bool QtQuickLZ::IsFault(int returnCode)
{
  return false ;
}

void QtQuickLZ::CleanUp(void)
{
  if ( NULL == qlzPacket ) return ;
}

void QtQuickLZ::CompressHeader(QByteArray & Compressed)
{
}

void QtQuickLZ::CompressTail(unsigned int checksum,QByteArray & Compressed)
{
}

int QtQuickLZ::DecompressHeader(const QByteArray & Source)
{
  return 0 ;
}

int QtQuickLZ::BeginCompress(QVariantList arguments)
{
  return 0 ;
}

int QtQuickLZ::BeginCompress(int level,int method)
{
  QVariantList args             ;
  args << level                 ;
  args << method                ;
  return BeginCompress ( args ) ;
}

int QtQuickLZ::doCompress(const QByteArray & Source,QByteArray & Compressed)
{
  return 0 ;
}

int QtQuickLZ::doSection(QByteArray & Source,QByteArray & Compressed)
{
  return 0 ;
}

int QtQuickLZ::CompressDone(QByteArray & Compressed)
{
  return 0 ;
}

int QtQuickLZ::BeginDecompress(void)
{
  return 0 ;
}

int QtQuickLZ::doDecompress(const QByteArray & Source,QByteArray & Decompressed)
{
  return 0 ;
}

int QtQuickLZ::undoSection(QByteArray & Source,QByteArray & Decompressed)
{
  return 0 ;
}

int QtQuickLZ::DecompressDone(void)
{
  return 0 ;
}

bool QtQuickLZ::IsTail(QByteArray & header)
{
  if ( NULL == qlzPacket     ) return false                     ;
  if ( header . size ( ) < 8 ) return false                     ;
  unsigned char * footer  = (unsigned char *) header . data ( ) ;
  bool            correct = true                                ;
  return correct                                                ;
}

//////////////////////////////////////////////////////////////////////////////

QT_END_NAMESPACE
