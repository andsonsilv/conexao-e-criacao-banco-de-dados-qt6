#include "database.h"

const QString DB_CONNECTION_NAME = "conexao db";


Database::Database()
{

}

bool Database::openDatabase()
{
    QDir dataDir = QDir::currentPath();
    qDebug() << dataDir.absolutePath();
    QString dbPath = dataDir.absolutePath() + "/" + DB_CONNECTION_NAME + ".db3";

    if(!isConnected()){
        m_db = QSqlDatabase::addDatabase("QSQLITE", DB_CONNECTION_NAME);
    }else{
        m_db = QSqlDatabase::database(DB_CONNECTION_NAME);
    }


    m_db.setDatabaseName(dbPath);

    bool needCreate = !dataDir.exists(m_db.databaseName());


    bool open = m_db.open();
    qDebug() << m_db.isValid() << m_db.isDriverAvailable("QSQLITE") << m_db.isOpen();

    if(open && needCreate){
        QSqlQuery query(m_db);
        QString script = "CREATE TABLE usuario (id INTEGER PRIMARY KEY, nome TEXT NOT NULL, senha TEXT NOT NULL)";
        query.prepare(script);
        qDebug() << "query.exec" << query.exec();
        qDebug() << query.lastError();
    }
    return open;
}

bool Database::isConnected()
{
    return QSqlDatabase::contains(DB_CONNECTION_NAME);
}
