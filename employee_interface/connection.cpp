#include "connection.h"
#include <QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("DRYCLEANER");
db.setUserName("amine");//inserer nom de l'utilisateur
db.setPassword("esprit");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
else{
    qDebug()<< "Error: "<< db.lastError().text();
}





    return  test;
}
