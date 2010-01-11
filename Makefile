#############################################################################
# Makefile for building: qtneurds
# Generated by qmake (2.01a) (Qt 4.5.2) on: lun. janv. 11 13:00:39 2010
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
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I/usr/include/qwt-qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lqwt-qt4 -lQtSql -lQtGui -lQtCore -lpthread
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
		networkmanager.cpp \
		setupnewnetwork.cpp \
		learningtool.cpp \
		neuroneitem.cpp \
		entryitem.cpp \
		feedingtool.cpp \
		addexemple.cpp \
		editexemple.cpp \
		errorview.cpp moc_mainwindow.cpp \
		moc_networkmanager.cpp \
		moc_setupnewnetwork.cpp \
		moc_learningtool.cpp \
		moc_feedingtool.cpp \
		moc_addexemple.cpp \
		moc_editexemple.cpp \
		moc_errorview.cpp \
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
		setupnewnetwork.o \
		learningtool.o \
		neuroneitem.o \
		entryitem.o \
		feedingtool.o \
		addexemple.o \
		editexemple.o \
		errorview.o \
		moc_mainwindow.o \
		moc_networkmanager.o \
		moc_setupnewnetwork.o \
		moc_learningtool.o \
		moc_feedingtool.o \
		moc_addexemple.o \
		moc_editexemple.o \
		moc_errorview.o \
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

$(TARGET): ui_mainwindow.h ui_networkmanager.h ui_setupnewnetwork.h ui_learningtool.h ui_feedingtool.h ui_addexemple.h ui_editexemple.h ui_errorview.h $(OBJECTS)  
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
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents mainwindow.h Network.h Truth.h Net.h Layer.h Neurone.h Seuil_function.h networkmanager.h setupnewnetwork.h learningtool.h neuroneitem.h entryitem.h feedingtool.h addexemple.h editexemple.h errorview.h .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents resources.qrc .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp Layer.cpp Truth.cpp Network.cpp Net.cpp Seuil_function.c Neurone.cpp networkmanager.cpp setupnewnetwork.cpp learningtool.cpp neuroneitem.cpp entryitem.cpp feedingtool.cpp addexemple.cpp editexemple.cpp errorview.cpp .tmp/qtneurds1.0.0/ && $(COPY_FILE) --parents mainwindow.ui networkmanager.ui setupnewnetwork.ui learningtool.ui feedingtool.ui addexemple.ui editexemple.ui errorview.ui .tmp/qtneurds1.0.0/ && (cd `dirname .tmp/qtneurds1.0.0` && $(TAR) qtneurds1.0.0.tar qtneurds1.0.0 && $(COMPRESS) qtneurds1.0.0.tar) && $(MOVE) `dirname .tmp/qtneurds1.0.0`/qtneurds1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/qtneurds1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_networkmanager.cpp moc_setupnewnetwork.cpp moc_learningtool.cpp moc_feedingtool.cpp moc_addexemple.cpp moc_editexemple.cpp moc_errorview.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_networkmanager.cpp moc_setupnewnetwork.cpp moc_learningtool.cpp moc_feedingtool.cpp moc_addexemple.cpp moc_editexemple.cpp moc_errorview.cpp
moc_mainwindow.cpp: networkmanager.h \
		ui_networkmanager.h \
		mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_networkmanager.cpp: ui_networkmanager.h \
		networkmanager.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) networkmanager.h -o moc_networkmanager.cpp

moc_setupnewnetwork.cpp: ui_setupnewnetwork.h \
		setupnewnetwork.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) setupnewnetwork.h -o moc_setupnewnetwork.cpp

moc_learningtool.cpp: ui_learningtool.h \
		learningtool.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) learningtool.h -o moc_learningtool.cpp

moc_feedingtool.cpp: Truth.h \
		ui_feedingtool.h \
		feedingtool.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) feedingtool.h -o moc_feedingtool.cpp

moc_addexemple.cpp: Truth.h \
		ui_addexemple.h \
		addexemple.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) addexemple.h -o moc_addexemple.cpp

moc_editexemple.cpp: ui_editexemple.h \
		Truth.h \
		editexemple.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) editexemple.h -o moc_editexemple.cpp

moc_errorview.cpp: ui_errorview.h \
		errorview.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) errorview.h -o moc_errorview.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: resources.qrc \
		chart.png \
		sub.png \
		add.png \
		wizard.png \
		config.png \
		view.png \
		edit.png \
		tree.png
	/usr/bin/rcc -name resources resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_networkmanager.h ui_setupnewnetwork.h ui_learningtool.h ui_feedingtool.h ui_addexemple.h ui_editexemple.h ui_errorview.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_networkmanager.h ui_setupnewnetwork.h ui_learningtool.h ui_feedingtool.h ui_addexemple.h ui_editexemple.h ui_errorview.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic-qt4 mainwindow.ui -o ui_mainwindow.h

ui_networkmanager.h: networkmanager.ui
	/usr/bin/uic-qt4 networkmanager.ui -o ui_networkmanager.h

ui_setupnewnetwork.h: setupnewnetwork.ui
	/usr/bin/uic-qt4 setupnewnetwork.ui -o ui_setupnewnetwork.h

ui_learningtool.h: learningtool.ui
	/usr/bin/uic-qt4 learningtool.ui -o ui_learningtool.h

ui_feedingtool.h: feedingtool.ui
	/usr/bin/uic-qt4 feedingtool.ui -o ui_feedingtool.h

ui_addexemple.h: addexemple.ui
	/usr/bin/uic-qt4 addexemple.ui -o ui_addexemple.h

ui_editexemple.h: editexemple.ui
	/usr/bin/uic-qt4 editexemple.ui -o ui_editexemple.h

ui_errorview.h: errorview.ui
	/usr/bin/uic-qt4 errorview.ui -o ui_errorview.h

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
		ui_mainwindow.h \
		feedingtool.h \
		Truth.h \
		ui_feedingtool.h
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
		ui_networkmanager.h \
		setupnewnetwork.h \
		ui_setupnewnetwork.h \
		learningtool.h \
		ui_learningtool.h \
		feedingtool.h \
		Truth.h \
		ui_feedingtool.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o networkmanager.o networkmanager.cpp

setupnewnetwork.o: setupnewnetwork.cpp setupnewnetwork.h \
		ui_setupnewnetwork.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o setupnewnetwork.o setupnewnetwork.cpp

learningtool.o: learningtool.cpp learningtool.h \
		ui_learningtool.h \
		neuroneitem.h \
		entryitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o learningtool.o learningtool.cpp

neuroneitem.o: neuroneitem.cpp neuroneitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o neuroneitem.o neuroneitem.cpp

entryitem.o: entryitem.cpp entryitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o entryitem.o entryitem.cpp

feedingtool.o: feedingtool.cpp feedingtool.h \
		Truth.h \
		ui_feedingtool.h \
		addexemple.h \
		ui_addexemple.h \
		editexemple.h \
		ui_editexemple.h \
		Neurone.h \
		Net.h \
		Seuil_function.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o feedingtool.o feedingtool.cpp

addexemple.o: addexemple.cpp addexemple.h \
		Truth.h \
		ui_addexemple.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addexemple.o addexemple.cpp

editexemple.o: editexemple.cpp editexemple.h \
		ui_editexemple.h \
		Truth.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o editexemple.o editexemple.cpp

errorview.o: errorview.cpp errorview.h \
		ui_errorview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o errorview.o errorview.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_networkmanager.o: moc_networkmanager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_networkmanager.o moc_networkmanager.cpp

moc_setupnewnetwork.o: moc_setupnewnetwork.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_setupnewnetwork.o moc_setupnewnetwork.cpp

moc_learningtool.o: moc_learningtool.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_learningtool.o moc_learningtool.cpp

moc_feedingtool.o: moc_feedingtool.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_feedingtool.o moc_feedingtool.cpp

moc_addexemple.o: moc_addexemple.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addexemple.o moc_addexemple.cpp

moc_editexemple.o: moc_editexemple.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_editexemple.o moc_editexemple.cpp

moc_errorview.o: moc_errorview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_errorview.o moc_errorview.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

