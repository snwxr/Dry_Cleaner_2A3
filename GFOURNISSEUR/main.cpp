#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include"connection.h"
#include <QDebug>
#include <QTranslator>
#include <QInputDialog>
#include "suppliers.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* QTranslator t;
    QStringList langues;
    langues <<"french" <<"english";
    QString lang= QInputDialog::getItem(NULL,"Select language", "language",langues);
     if (lang== " english")
     {
         t.load(":/new/prefix1/english.qm");
          a.installTranslator(&t);
     }*/
    QTranslator T;
        QStringList langue;
       langue<<"English"<<"Francais";
        const QString languel=QInputDialog::getItem(NULL,"Langue","Selectionner langue",langue);
        if(languel=="English"){
        T.load(":/new/prefix1/anglais.qm");
        a.installTranslator(&T);}

    //MainWindow w;
    Connection c;
    Suppliers F;

    bool test=c.createConnection();
    if(test)
    {F.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    return a.exec();
}
