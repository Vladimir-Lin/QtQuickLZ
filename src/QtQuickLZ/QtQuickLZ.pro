NAME         = QtQuickLZ
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtQuickLZ

HEADERS     += $${PWD}/../../include/QtQuickLZ/QtQuickLZ
HEADERS     += $${PWD}/../../include/QtQuickLZ/qtquicklz.h
HEADERS     += $${PWD}/qlz.hpp
HEADERS     += $${PWD}/quicklz.h

SOURCES     += $${PWD}/qtquicklz.cpp
SOURCES     += $${PWD}/quicklz.c
SOURCES     += $${PWD}/level-1.cpp
SOURCES     += $${PWD}/level-2.cpp
SOURCES     += $${PWD}/level-3.cpp
SOURCES     += $${PWD}/level-4.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
