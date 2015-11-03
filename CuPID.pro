#-------------------------------------------------
#
# Project created by QtCreator 2015-11-02T10:34:22
#
#-------------------------------------------------

QT       += core gui
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CuPID
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    student.cpp \
    project.cpp \
    group.cpp

HEADERS  += mainwindow.h \
    student.h \
    project.h \
    group.h

FORMS    += mainwindow.ui
