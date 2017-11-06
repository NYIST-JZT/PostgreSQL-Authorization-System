#ifndef MYDATABASECONNECT_H
#define MYDATABASECONNECT_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlError>

class myDatabaseConnect
{
public:
    myDatabaseConnect();
    bool createConnectionByName(const QString &connectionName, const QString database);
    QSqlDatabase getConnectionByName(const QString &connectionName);
};

#endif // MYDATABASECONNECT_H
