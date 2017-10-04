#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T08:53:05
#
#-------------------------------------------------


QT       += core gui webenginewidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = description
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

DISTFILES += \
    bookmarks.conf \
    prism.txt

RESOURCES += \
    colorsyntax.qrc \
    theme.qrc

#system(--disable-web-security);
include(QtAwesome/QtAwesome.pri)

