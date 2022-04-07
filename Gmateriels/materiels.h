#ifndef MATERIELS_H
#define MATERIELS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class materiels
{
    int id;
    QString nom,type,etat,gamme;
public:
    materiels();
    //Constructeurs
    materiels(int,QString,QString,QString,QString);

    //Getters
    int getID(){return id;}
    QString getNom(){return nom;}
    QString getType(){return type;}
    QString getEtat(){return etat;}
    QString getGamme(){return gamme;}

    //Setters
    void setID(int id_m){id=id_m;}
    void setNom(QString nom_m){nom=nom_m;}
    void setType(QString type_m){type=type_m;}
    void setEtat(QString etat_m){etat=etat_m;}
    void setGamme(QString gamme_m){gamme=gamme_m;}

    //Fonctionnalites de Base relatives a l'entite Materiels
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int i);

    QSqlQueryModel * recherche(QString recherche);
    QSqlQueryModel * triParId();
};

#endif // MATERIELS_H
