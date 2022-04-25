#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Produit
{
    int num,quant;
    QString nom,ref;
public:
    //Constructeurs
    Produit();
    Produit(int,int,QString,QString);

    //Getters
    int getNum(){return num;}
    int getQuant(){return quant;}
    QString getNom(){return nom;}
    QString getRef(){return ref;}

    //Setters
    void setNom(int num){this->num=num;}
    void setQuant(int quant){this->quant=quant;}
    void setNom(QString nom){this->nom=nom;}
    void setRef(QString ref){this->ref=ref;}

    //Fonctionalites CRUD
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int);

    //Metiers
    QSqlQueryModel * afficher_tri_nom();
    QSqlQueryModel * afficher_tri_quant();
    QSqlQueryModel * afficher_tri_reference();
    QSqlQueryModel * afficher_rech_netoy(QString critere,QString val);
    QSqlQueryModel * afficher_rech_netoy(int val);
};

#endif // PRODUIT_H
