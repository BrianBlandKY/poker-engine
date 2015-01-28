#-------------------------------------------------
#
# Project created by QtCreator 2014-12-26T16:04:43
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = DimplesPoker
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11

TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

INCLUDEPATH += headers

SOURCES += main.cpp \
    src/Card.cpp \
    #src/CardAnalyzer.cpp \
    src/Dealer.cpp \
    src/Deck.cpp \
    src/Player.cpp \
    src/Table.cpp

HEADERS += \
    headers/Card.h \
    #headers/CardAnalyzer.h \
    headers/Dealer.h \
    headers/Deck.h \
    headers/Player.h \
    headers/Table.h
