#include "mainwindow.h"
#include "clients.h"
#include <QApplication>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   Clients w;
   connection c; //une seule instance de la classe connection
   bool test=c.createconnect();//etablire la cnx
   w.show();
   if(test) //si la cnx est etalbit
   {w.show();
       QMessageBox::information(nullptr, QObject::tr("database is open"),
                   QObject::tr("connection successful.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

}
   else //si la cnx a échoué
       QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                   QObject::tr("connection failed.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);


    return a.exec();
}
