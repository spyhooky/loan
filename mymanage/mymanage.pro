#-------------------------------------------------
#
# Project created by QtCreator 2017-07-31T08:26:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mymanage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogjin.cpp

HEADERS  += mainwindow.h \
    dialogjin.h

FORMS    += mainwindow.ui \
    dialogjin.ui

RC_FILE = image.rc

RESOURCES += \
    image.qrc
