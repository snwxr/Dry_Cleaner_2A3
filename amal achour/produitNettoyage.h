#ifndef PRODUITNETTOYAGE_H
#define PRODUITNETTOYAGE_H
#include <QString>
#include <QSqlQuery>
#include<QSqlQueryModel>
class ProduitNettoyage
{
public:
    ProduitNettoyage();
    ProduitNettoyage(int id,QString nom, QString DateRecu ,int Quantite);
    bool ajouter();
    bool supprimer(QString id);
    bool rech(QString a);
    QSqlQueryModel *afficher();
    bool modifier(QString rech1);
    QSqlQueryModel * afficher_id();
    QSqlQueryModel* recherche(int );

int id,Quantite;
QString nom,DateRecu;
};

#endif
