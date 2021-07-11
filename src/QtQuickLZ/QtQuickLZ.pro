NAME         = QtQuickLZ
TARGET       = $${NAME}
QT           = core
QT          -= gui

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}

HEADERS     += $${PWD}/qtquicklz.h

SOURCES     += $${PWD}/qtquicklz.cpp

include ($${PWD}/../QuickLZ/QuickLZ.pri)
