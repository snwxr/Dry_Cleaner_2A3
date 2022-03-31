#include "commande.h"
#include "produitNettoyage.h"

#include <QDebug>
commande::commande()
{

}
commande::commande(int nbrP,int id_four , int id)
{
    this->id=id;
    this->id_four=id_four;
    this->nbrP=nbrP;

}
bool commande::rech(QString a)
{
    QSqlQuery q1;
    q1.exec("select * from commande where id='"+a+"'");
    bool test=q1.next();
    return test;
}
bool commande::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO commande(id,id_four,nbrP)"  "VALUES(:id,:id_four,:nbrP)");
    query.bindValue(":id",id);
    query.bindValue(":id_four",id_four);
    query.bindValue(":nbrP",nbrP);
    return query.exec();
}
bool commande::supprimer(QString id)
{
    if(!rech(id)){return false;}
    QSqlQuery query;

    query.prepare("Delete from commande where id=:id");
    query.bindValue(":id",id);
    return query.exec();
}
QSqlQueryModel * commande::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from commande");
    return model;
}
bool commande::modifier(QString rech1)
{
    QSqlQuery query;
    query.prepare("update commande set id_four=:id_four,nbrP=:nbrP where id=:id");
    query.bindValue(":nbrP",nbrP);
     query.bindValue(":id_four",id_four);
     query.bindValue(":id",id);
    return query.exec();
}
