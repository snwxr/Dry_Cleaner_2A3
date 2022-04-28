#ifndef GSUPPLIERS_H
#define GSUPPLIERS_H
#include "connection.h"
#include<QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QDateTime>
#include <QDate>
#include <QSqlQueryModel>
#include <vector>
#include <QDebug>
#include <QDialog>
#include <QSqlTableModel>

class gSuppliers
{
    int ID_F;
    QString Nom_F,Prenom_F,Specialite_F,Sexe_F;
public:
    gSuppliers();
    gSuppliers(int ,QString ,QString ,QString ,QString );

    int getID_F(){return ID_F;}
    QString getNom_F(){return Nom_F;}
    QString getPrenom_F(){return Prenom_F;}
    QString getSpecialite_F(){return Specialite_F;}
    QString getSexe_F(){return Sexe_F;}

    void setNom_F(QString n){Nom_F=n;}
      void setPrenom_F(QString p){Prenom_F=p;}
      void setSpecialite_F(QString s){Specialite_F=s;}
      void setID_F(int i){ID_F=i;}
       void setSexe_F(int se){Sexe_F=se;}

               bool ajouter_fournisseur();
                QSqlQueryModel * afficher();
                bool supp_fournisseur(int);
                bool modifier_fournisseur(int,QString,QString,QString,QString);
                QSqlQueryModel * rechercher(QString );
                QSqlQueryModel * trier_sexe();
                QSqlQueryModel *trier_Prenom();
                 QSqlQueryModel * trier_specialite();
};

#endif // GSUPPLIERS_H
