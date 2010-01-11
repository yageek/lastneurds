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
    networkmanager.cpp \
    setupnewnetwork.cpp \
    learningtool.cpp \
    neuroneitem.cpp \
    entryitem.cpp \
    feedingtool.cpp \
    addexemple.cpp \
    editexemple.cpp \
    errorview.cpp \
    testperceptron.cpp
HEADERS += mainwindow.h \
    Network.h \
    Truth.h \
    Net.h \
    Layer.h \
    Neurone.h \
    Seuil_function.h \
    networkmanager.h \
    setupnewnetwork.h \
    learningtool.h \
    neuroneitem.h \
    entryitem.h \
    feedingtool.h \
    addexemple.h \
    editexemple.h \
    errorview.h \
    testperceptron.h
FORMS += mainwindow.ui \
    networkmanager.ui \
    setupnewnetwork.ui \
    learningtool.ui \
    feedingtool.ui \
    addexemple.ui \
    editexemple.ui \
    errorview.ui
RESOURCES += resources.qrc
INCLUDEPATH += /usr/include/qwt-qt4/
LIBS += -lqwt-qt4
