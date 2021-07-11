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

#ifndef QT_QUICKLZ_H
#define QT_QUICKLZ_H

#include <QtCore>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#  if defined(QT_BUILD_QTQUICKLZ_LIB)
#    define Q_QUICKLZ_EXPORT Q_DECL_EXPORT
#  else
#    define Q_QUICKLZ_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define Q_QUICKLZ_EXPORT
#endif

#define QT_QUICKLZ_LIB 1

class Q_QUICKLZ_EXPORT QtQuickLZ ;

class Q_QUICKLZ_EXPORT QtQuickLZ
{
  public:

    explicit     QtQuickLZ        (void) ;
    virtual     ~QtQuickLZ        (void) ;

    virtual bool isQuickLZ        (QByteArray & header) ;

    virtual void CleanUp          (void) ;

    virtual bool IsCorrect        (int returnCode) ;
    virtual bool IsEnd            (int returnCode) ;
    virtual bool IsFault          (int returnCode) ;

    // Compression functions

    virtual int  BeginCompress    (int level = 1,int method = 0) ;
    virtual int  BeginCompress    (QVariantList arguments = QVariantList() ) ;
    virtual int  doCompress       (const QByteArray & Source      ,
                                         QByteArray & Compressed) ;
    virtual int  doSection        (      QByteArray & Source      ,
                                         QByteArray & Compressed) ;
    virtual int  CompressDone     (QByteArray & Compressed) ;

    // Decompression functions

    virtual int  BeginDecompress  (void) ;
    virtual int  doDecompress     (const QByteArray & Source        ,
                                         QByteArray & Decompressed) ;
    virtual int  undoSection      (      QByteArray & Source        ,
                                         QByteArray & Decompressed) ;
    virtual int  DecompressDone   (void) ;

    virtual bool IsTail           (QByteArray & header) ;

  protected:

    void * qlzPacket ;

    virtual void CompressHeader   (QByteArray & Compressed) ;
    virtual void CompressTail     (unsigned int checksum,QByteArray & Compressed) ;
    virtual int  DecompressHeader (const QByteArray & Source) ;

  private:

} ;

QT_END_NAMESPACE

#endif
