#-------------------------------------------------
#
# Project created by QtCreator 2018-05-06T10:07:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ui_outline
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    libman.cpp \
    register.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    libman.h \
    register.h \
    configure.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    register.ui
