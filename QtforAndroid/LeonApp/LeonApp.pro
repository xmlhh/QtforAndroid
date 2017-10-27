#-------------------------------------------------
#
# Project created by QtCreator 2017-08-07T17:58:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LeonApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWgt.cpp

HEADERS  += MainWgt.h

FORMS    += MainWgt.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    res.qrc

DISTFILES += \
    android-sources/AndroidManifest.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/Android-sources

