QT             = core
QT            -= gui
QT            += QtQuickLZ

CONFIG        += console

TEMPLATE       = app

SOURCES       += $${PWD}/qlztool.cpp

win32 {
RC_FILE        = $${PWD}/qlztool.rc
OTHER_FILES   += $${PWD}/qlztool.rc
OTHER_FILES   += $${PWD}/*.js
}
