#include "connection.h"

connection::connection(){}

bool connection::createconnect()
{
db = QSqlDatabase::addDatabase("QODBC"); //initialisation de l'attribut db
bool test=false;
db.setDatabaseName("Source_Smart_Dry_Cleaner");
db.setUserName("emnaa");//inserer nom de l'utilisateur
db.setPassword("emnaa");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
void connection::closeConnection(){db.close();}
