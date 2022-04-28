#include "connection.h"
#include <QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("DryCleaner");
db.setUserName("omar");//inserer nom de l'utilisateur
db.setPassword("omar");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
else{
    qDebug()<< "Error: "<< db.lastError().text();
}





    return  test;
}
