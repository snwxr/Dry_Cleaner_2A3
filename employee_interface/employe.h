#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>

class employe
{
    QString nom,prenom,type;
    int id,salaire;
public:
    //Constructeurs
    employe();
    employe(int i,int s,QString n,QString pre,QString ty) {id=i; salaire=s; nom=n;prenom=pre;type=ty;} ;

    //Getters
    int GetID() {return id;}
    int GetSalaire() {return salaire;}
    QString GetNom(){return nom;}
    QString GetPrenom(){return prenom;}
    QString GetType(){return type;}

    //Setters

    void SetID(int i){id=i;}
    void SetSalaire(int s){salaire=s;}
    void SetNom(QString n){nom=n;}
    void SetPrenom(QString pre){prenom=pre;}
    void SetType(QString ty){type=ty;}

    //Fonctionalites CRUD

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int i);
    bool modifier(int i);

    //Metiers
    QSqlQueryModel * afficher_tri_salaire();
    QSqlQueryModel * afficher_tri_type();
    QSqlQueryModel * afficher_tri_nom();
    QSqlQueryModel * afficher_rech_emp(QString critere,QString val);
    QSqlQueryModel * afficher_rech_emp(int val);
};

#endif // EMPLOYE_H
