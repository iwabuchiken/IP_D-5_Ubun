#-------------------------------------------------
#
# Project created by QtCreator 2014-05-15T23:54:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IP_D-5_Ubun_v-5_0
TEMPLATE = app


SOURCES += main.cpp\
        pngconverter.cpp \
    assistant.cpp \
    findfiledialog.cpp \
    textedit.cpp

HEADERS  += pngconverter.h \
    include/assistant.h \
    include/findfiledialog.h \
    include/textedit.h

FORMS    += pngconverter.ui

OTHER_FILES += \
    readme.txt
