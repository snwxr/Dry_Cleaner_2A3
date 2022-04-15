#ifndef GCLIENTS_H
#define GCLIENTS_H
#include<QString>
#include <QDateTime>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include "QMessageBox"

class Gclients
{
    QString NomC, PrenomC,SexeC,reduction,DateNaissanceC;
    int cinC;
    QDate DateAjoutC;
public:
    //les contructeurs
    Gclients();
    Gclients(int cin, QString Nom,QString Prenom,QString Sexe,QString reductionn,QString DateNaissance){cinC=cin; NomC=Nom; PrenomC=Prenom;SexeC=Sexe;reduction=reductionn; DateNaissanceC=DateNaissance;}
    //Setters
    void setNomC(QString s){NomC=s;}
    void setPrenomC(QString s){PrenomC=s;}
    void setSexeC(QString s){SexeC=s;}
    void setreduction(QString s){reduction=s;}
    void setDateNaissanceC(QString d){DateNaissanceC=d;}
    void setcinC(int i){cinC=i;}


    //Getters
    QString get_NomC(){return NomC;}
    QString get_PrenomC(){return PrenomC;}
    QString get_SexeC(){return SexeC;}
    QString get_reduction(){return reduction;}
    QString get_DateNaissanceC(){return DateNaissanceC;}
    int get_cinC(){return cinC;}

    //CRUD Client
    bool ajouterClient();
    QSqlQueryModel * afficherClient();
    bool supprimerClient(int);
    bool modifierClient(int, QString, QString, QString, QString);
    QSqlQueryModel * Tri(int);
    QSqlQueryModel * recherche(QString);
    void CalculReduction();

};

#endif // GCLIENTS_H
