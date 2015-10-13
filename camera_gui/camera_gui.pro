#-------------------------------------------------
#
# Project created by QtCreator 2015-10-07T18:00:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = camera_gui
TEMPLATE = app

LIBS += -lcurl

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
