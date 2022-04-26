#include "materiels.h"

materiels::materiels()
{

}

materiels::materiels(int id_m,QString nom_m,QString type_m,QString etat_m,QString gamme_m)
{
    id=id_m;
    nom=nom_m;
    type=type_m;
    etat=etat_m;
    gamme=gamme_m;
}

bool materiels::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(id);
    //prepare() prend la requete en parametre pour la preparer a l'execution
    query.prepare("insert into materiels(id_m, nom_m, type_m, etat_m, gamme_m) values(:id, :nom, :type, :etat, :gamme)");

    //Creation des variables liees
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":type",type);
    query.bindValue(":etat",etat);
    query.bindValue(":gamme",gamme);

    return query.exec();

}

QSqlQueryModel * materiels::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from materiels");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("ETAT"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("GAMME"));

    return model;
}
QSqlQueryModel * materiels::recherche(QString recherche)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM materiels WHERE id_m LIKE '"+recherche+"%' OR nom_m LIKE '"+recherche+"%' OR type_m LIKE '"+recherche+"%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("GAMME"));
    return model;
}
QSqlQueryModel * materiels::triParId()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * from materiels ORDER BY CAST(id_m AS number)");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ETAT"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("GAMME"));
    return model;
}


bool materiels::supprimer(int id_m)
{
    QSqlQuery query;
    QString res=QString::number(id_m);

    query.prepare("delete from materiels where id_m=:id");
    query.bindValue(":id",res);

    return query.exec();
}

bool materiels::modifier(int i)
{
    QSqlQuery query;

    QString res = QString::number(i);

    query.prepare("update materiels set nom_m=:nom_m, type_m=:type_m, etat_m=:etat_m, gamme_m=:gamme_m where id_m=:id_m");

    query.bindValue(":id_m",res);
    query.bindValue(":nom_m",nom);
    query.bindValue(":type_m",type);
    query.bindValue(":etat_m",etat);
    query.bindValue(":gamme_m",gamme);

    return query.exec();
}
