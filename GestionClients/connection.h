#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connection
{ QSqlDatabase db; //attribut de la classe cnx
public:
    connection();
    bool createconnect();
    void closeConnection();
};

#endif // CONNECTION_H
