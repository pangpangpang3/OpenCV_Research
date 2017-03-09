#-------------------------------------------------
#
# Project created by QtCreator 2017-03-09T17:14:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCV_demo1
TEMPLATE = app

PKGCONFIG +=opencv
CONFIG +=c++11 link_pkgconfig

SOURCES += main.cpp

HEADERS  +=

RESOURCES += \
    res.qrc
