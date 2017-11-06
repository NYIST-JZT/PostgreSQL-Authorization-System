#-------------------------------------------------
#
# Project created by QtCreator 2017-07-27T10:31:17
#
#-------------------------------------------------

QT       += core gui
QT += sql
CONFIG += console
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mySystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp \
    role.cpp \
    roleauth.cpp \
    authorization.cpp \
    authcheck.cpp \
    usermanage.cpp \
    listmanage.cpp \
    userlist.cpp \
    mydatabaseconnect.cpp \
    mytool.cpp \
    distrirolelist.cpp \
    passwddialog.cpp \
    addroledialog.cpp \
    modifyroledialog.cpp \
    adduserdialog.cpp \
    pgintegrity.cpp \
    custommessagebox.cpp

HEADERS  += mainwindow.h \
    logindialog.h \
    role.h \
    roleauth.h \
    authorization.h \
    authcheck.h \
    usermanage.h \
    listmanage.h \
    userlist.h \
    mydatabaseconnect.h \
    mytool.h \
    distrirolelist.h \
    passwddialog.h \
    addroledialog.h \
    modifyroledialog.h \
    adduserdialog.h \
    pgintegrity.h \
    custommessagebox.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    role.ui \
    roleauth.ui \
    authorization.ui \
    authcheck.ui \
    usermanage.ui \
    listmanage.ui \
    userlist.ui \
    distrirolelist.ui \
    passwddialog.ui \
    addroledialog.ui \
    addroledialog.ui \
    modifyroledialog.ui \
    adduserdialog.ui \
    pgintegrity.ui

RESOURCES += \
    picture.qrc

