#-------------------------------------------------
#
# Project created by QtCreator 2022-08-29T12:27:28
#
#-------------------------------------------------

QT       += core gui
QT  +=  multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = YPVZ_3
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    gamescene2.cpp \
        main.cpp \
        beginscene.cpp \
    gamescene_1.cpp \
    lattice.cpp \
    plantCard.cpp \
    plants.cpp \
    fly.cpp \
    zombies.cpp

HEADERS += \
        beginscene.h \
    configuration.h \
    gamescene2.h \
    gamescene_1.h \
    lattice.h \
    plantCard.h \
    plants.h \
    fly.h \
    zombies.h

FORMS += \
        beginscene.ui

RESOURCES += \
    res.qrc
