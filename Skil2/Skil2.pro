QT += core sql
QT -= gui

TARGET = Skil2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    data/data.cpp \
    ui/ui.cpp \
    domain/domain.cpp \
    data/computers.cpp \
    data/scientists.cpp

HEADERS += \
    data/data.h \
    ui/ui.h \
    domain/domain.h \
    data/computers.h \
    data/scientists.h

DISTFILES +=

