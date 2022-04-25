#ifndef ARTICLE_H
#define ARTICLE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class article
{
    int num_prod,cin_client;
    QString type,etat,date,photo;


public:
    //Constructeurs
    article();
    article(int,int,QString,QString,QString,QString);

    //Getters
    int getClient(){return cin_client;}
    int getNum(){return num_prod;}
    QString getType(){return type;}
    QString getEtat(){return etat;}
    QString getDate(){return date;}
    QString getPhoto(){return photo;}

    //Setters
    void setClient(int cin){cin_client= cin;}
    void setNum(int num){num_prod = num;}
    void setType(QString type_a){type = type_a;}
    void setEtat(QString etat_a){etat = etat_a;}
    void setDate(QString date_a){date = date_a;}
    void setPhoto(QString photo_a){photo = photo_a;}

    //Fonctionnalites de base relatives a l'entite Article
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int i);
    QSqlQueryModel * afficher_tri_num_art();
    QSqlQueryModel * afficher_tri_type_art();
    QSqlQueryModel * afficher_tri_etat_art();
    QSqlQueryModel * afficher_rech_art(QString critere,QString val);
    QSqlQueryModel * afficher_rech_art(QString critere,int val);
};

#endif // ARTICLE_H
