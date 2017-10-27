#-------------------------------------------------
#
# Project created by QtCreator 2017-08-07T17:28:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopApp
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    res.qrc

DISTFILES += \
    ICON.RC \
    Android-sources/AndroidManifest.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/Android-sources

