#include "mydatabaseconnect.h"
#include "QDebug"

extern QString w_username;
extern QString w_passwd;
extern QString w_serverAddr;
extern QString w_port;

myDatabaseConnect::myDatabaseConnect()
{

}

bool myDatabaseConnect::createConnectionByName(const QString &connectionName, const QString database) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", connectionName);
    db.setHostName(w_serverAddr);
    db.setDatabaseName(database);
    db.setUserName(w_username);
    db.setPassword(w_passwd);

    if (!db.open()) {
        qDebug() << "Connect to Postgresql error: " << db.lastError().text();
        return false;
    }
    return true;
}

QSqlDatabase myDatabaseConnect::getConnectionByName(const QString &connectionName) {
    QSqlDatabase db = QSqlDatabase::database(connectionName);
    if(db.isOpen()){
        return db;
    }else{
        if(this->createConnectionByName(connectionName,connectionName))
            return QSqlDatabase::database(connectionName);
    }
}
