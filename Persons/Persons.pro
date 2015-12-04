QT += core sql
QT -= gui

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle

SOURCES += main.cpp \
    data.cpp \
    service.cpp \
    presentation.cpp

HEADERS += \
    data.h \
    service.h \
    presentation.h

