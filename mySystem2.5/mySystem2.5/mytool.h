#ifndef MYTOOL_H
#define MYTOOL_H
#include <QString>


class MyTool
{
public:
    MyTool();
    QString add_prefix(QString str, qint8 type);
    QString del_prefix(QString str);
    qint8 checkType(QString str);
};

#endif // MYTOOL_H
