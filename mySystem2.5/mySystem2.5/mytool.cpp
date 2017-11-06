#include "mytool.h"
#include "QDebug"

MyTool::MyTool()
{

}

QString MyTool::add_prefix(QString str, qint8 type){
    if(type == 1)
        return "role_"+str;
    else
        return "user_"+str;
}

QString MyTool::del_prefix(QString str){
    return str.remove(0,5);
}

qint8 MyTool::checkType(QString str){
    if(str.mid(0,4) == "user")
        return 2;
    else
        return 1;
}
