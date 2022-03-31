#ifndef COMMANDE_H
#define COMMANDE_H

#include "produitNettoyage.h"
#include <QString>
#include <QSqlQuery>
#include<QSqlQueryModel>
class commande
{
public:
    commande();
    commande(int ,int, int);
    bool ajouter();
    bool supprimer(QString id);
    bool rech(QString a);
    QSqlQueryModel *afficher();
    bool modifier(QString rech1);

int id_four,id,nbrP;

};
#endif // COMMANDE_H
