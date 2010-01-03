#############################################################################
# Makefile for building: qtneurds
# Generated by qmake (2.01a) (Qt 4.5.2) on: dim. janv. 3 23:21:18 2010
# Project:  qtneurds.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile qtneurds.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtSql -lQtGui -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		Layer.cpp \
		Truth.cpp \
		Network.cpp \
		Net.cpp \
		Seuil_function.c \
		Neurone.cpp \
		networkmanager.cpp moc_mainwindow.cpp \
		moc_networkmanager.cpp \
		qrc_resources.cpp
OBJECTS       = main.o \
		mainwindow.o \
		Layer.o \
		Truth.o \
		Network.o \
		Net.o \
		Seuil_function.o \
		Neurone.o \
		networkmanager.o \
		moc_mainwindow.o \
		moc_networkmanager.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		qtneurds.pro
QMAKE_TARGET  = qtneurds
DESTDIR       = 
TARGET        = qtneurds

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_networkmanager.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: qtneurds.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtSql.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile qtneurds.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtSql.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile qtneurds.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/qtneurds1.0.0 || $(MKDIR) .tmp/qtneurds1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents mainwindow.h Network.h Truth.h Net.h Layer.h Neurone.h Seuil_function.h networkmanager.h .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents resources.qrc .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp Layer.cpp Truth.cpp Network.cpp Net.cpp Seuil_function.c Neurone.cpp networkmanager.cpp .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents mainwindow.ui networkmanager.ui .tmp/qtneurds1.0.0/ && (cd `dirname .tmp/qtneurds1.0.0` && $(TAR) qtneurds1.0.0.tar qtneurds1.0.0 && $(COMPRESS) qtneurds1.0.0.tar) && $(MOVE) `dirname .tmp/qtneurds1.0.0`/qtneurds1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/qtneurds1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_networkmanager.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_networkmanager.cpp
moc_mainwindow.cpp: networkmanager.h \
		ui_networkmanager.h \
		mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_networkmanager.cpp: ui_networkmanager.h \
		networkmanager.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) networkmanager.h -o moc_networkmanager.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: resources.qrc \
		chart.png \
		sub.png \
		add.png \
		tree.png
	/usr/bin/rcc -name resources resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_networkmanager.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_networkmanager.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_networkmanager.h: networkmanager.ui
	/usr/bin/uic-qt4 networkmanager.ui -o ui_networkmanager.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		networkmanager.h \
		ui_networkmanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		networkmanager.h \
		ui_networkmanager.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

Layer.o: Layer.cpp Layer.h \
		Neurone.h \
		Net.h \
		Truth.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Layer.o Layer.cpp

Truth.o: Truth.cpp Truth.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Truth.o Truth.cpp

Network.o: Network.cpp Network.h \
		Layer.h \
		Neurone.h \
		Net.h \
		Truth.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Network.o Network.cpp

Net.o: Net.cpp Net.h \
		Neurone.h \
		Truth.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Net.o Net.cpp

Seuil_function.o: Seuil_function.c 
	$(CC) -c $(CFLAGS) $(INCPATH) -o Seuil_function.o Seuil_function.c

Neurone.o: Neurone.cpp Neurone.h \
		Net.h \
		Truth.h \
		Seuil_function.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Neurone.o Neurone.cpp

networkmanager.o: networkmanager.cpp networkmanager.h \
		ui_networkmanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o networkmanager.o networkmanager.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_networkmanager.o: moc_networkmanager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_networkmanager.o moc_networkmanager.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

