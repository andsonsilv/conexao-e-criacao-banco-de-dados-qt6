#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QDebug>
#include <QDir>
#include <QSqlQuery>
#include <QSqlError>

class Database
{
public:
    Database();
    bool openDatabase();
    bool isConnected();

private:
    QSqlDatabase m_db;
};

#endif // DATABASE_H
