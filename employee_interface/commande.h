#ifndef COMMANDE_H
#define COMMANDE_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Commande
{
    int id,quant;
    QString etat,nom;
public:
    Commande();
    Commande(int,int,QString,QString);

    //Getters
    int getId(){return id;}
    int getQuant(){return quant;}
    QString getEtat(){return etat;}
    QString getNom(){return nom;}

    //Setters
    void setId(int id){this->id = id;}
    void setQuant(int quant){this->quant=quant;}
    void setEtat(QString etat){this->etat=etat;}
    void setNom(QString nom){this->nom=nom;}

    //Fonctionalites CRUD
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool supprimer();
    bool modifier(int);
    QSqlQueryModel * afficher_tri_id();
    QSqlQueryModel * afficher_tri_nom();
    QSqlQueryModel * afficher_tri_quantite();
    QSqlQueryModel * afficher_rech_cmd(QString critere,QString val);
    QSqlQueryModel * afficher_rech_cmd(int val);

};

#endif // COMMANDE_H
