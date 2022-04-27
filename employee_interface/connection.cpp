#include "connection.h"
#include <QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Smart_Dry_Cleaner");
db.setUserName("emnaa");//inserer nom de l'utilisateur
db.setPassword("emnaa");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
else{
    qDebug()<< "Error: "<< db.lastError().text();
}





    return  test;
}
