# -------------------------------------------------
# Project created by QtCreator 2010-01-03T22:04:42
# -------------------------------------------------
QT += sql
TARGET = qtneurds
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    Layer.cpp \
    Truth.cpp \
    Network.cpp \
    Net.cpp \
    Seuil_function.c \
    Neurone.cpp \
    networkmanager.cpp
HEADERS += mainwindow.h \
    Network.h \
    Truth.h \
    Net.h \
    Layer.h \
    Neurone.h \
    Seuil_function.h \
    networkmanager.h
FORMS += mainwindow.ui \
    networkmanager.ui
RESOURCES += resources.qrc
