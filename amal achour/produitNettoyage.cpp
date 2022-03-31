#include "produitNettoyage.h"
#include <QDebug>
ProduitNettoyage::ProduitNettoyage()
{

}
ProduitNettoyage::ProduitNettoyage(int id,QString nom,QString DateRecu,int Quantite)
{
    this->id=id;
    this->nom=nom;
    this->DateRecu=DateRecu;
    this->Quantite=Quantite;

}
bool ProduitNettoyage::rech(QString a)
{
    QSqlQuery q1;
    q1.exec("select * from produitNettoyage where id='"+a+"'");
    bool test=q1.next();
    return test;
}
bool ProduitNettoyage::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO produitNettoyage(id,nom,DateRecu,Quantite)"  "VALUES(:id,:nom,:DateRecu,:Quantite)");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":DateRecu",DateRecu);
     query.bindValue(":Quantite",Quantite);
    return query.exec();
}
bool ProduitNettoyage::supprimer(QString id)
{
    if(!rech(id)){return false;}
    QSqlQuery query;

    query.prepare("Delete from produitNettoyage where id=:id");
    query.bindValue(":id",id);
    return query.exec();
}
QSqlQueryModel * ProduitNettoyage::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from produitNettoyage");
    return model;
}
bool ProduitNettoyage::modifier(QString rech1)
{
    QSqlQuery query;
    query.prepare("update produitNettoyage set nom=:nom,DateRecu=:DateRecu,Quantite=:Quantite where id=:id");
    query.bindValue(":DateRecu",DateRecu);
     query.bindValue(":nom",nom);
     query.bindValue(":Quantite",Quantite);
     query.bindValue(":id",id);
    return query.exec();
}
QSqlQueryModel* ProduitNettoyage::recherche(int id)
{
  QSqlQueryModel* model=new QSqlQueryModel();
QSqlQuery query;

    QString id_string=QString::number(id);
    query.bindValue(":id",id_string);

model->setQuery("SELECT * FROM produitNettoyage WHERE id=:id;");

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("DateRecu"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));

query.exec();
  return  model;
}

QSqlQueryModel *ProduitNettoyage::afficher_id()
{
  QSqlQueryModel *model=new QSqlQueryModel();
        model->setQuery("SELECT * FROM produitNettoyage ORDER BY id");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DateRecu"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantité"));
        return model;
}

