#include "mainwindow.h"
#include "logindialog.h"

#include <QApplication>
#include <QDesktopWidget>
#include <qmessagebox.h>
#include <qsqldatabase.h>
#include <qdebug.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog w;
    w.show();
    w.move ((QApplication::desktop()->width() - w.width())/2,(QApplication::desktop()->height() - w.height())/2);
    return a.exec();
}
