#include "commande.h"

Commande::Commande()
{

}

Commande::Commande(int id,int quant,QString etat ,QString nom)
{
    this->id=id;
    this->quant=quant;
    this->etat=etat;
    this->nom=nom;
}

bool Commande::ajouter()
{
    QSqlQuery q;
    QString res = QString::number(id);
    QString qty = QString::number(quant);

    q.prepare("insert into commandes(id_c,quantite_c,etat_c,nom_c) values(:id,:quantite,:etat,:nom)");
    q.bindValue(":id",res);
    q.bindValue(":quantite",qty);
    q.bindValue(":etat",etat);
    q.bindValue(":nom",nom);

    return q.exec();
}

QSqlQueryModel * Commande::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from commandes");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}

bool Commande::supprimer(int i)
{
    QSqlQuery query;
    QString res= QString::number(i);

    query.prepare("Delete from commandes where id_c=:id");
    query.bindValue(":id",res);

    return query.exec();
}

bool Commande::supprimer()
{
    QSqlQuery query;


    query.prepare("Delete from commandes where etat_c= 'delivree'");


    return query.exec();
}

bool Commande::modifier(int i)
{
    QSqlQuery q;

    QString res = QString::number(i);
    QString qty = QString::number(quant);

    q.prepare("update commandes set quantite_c=:quantite,etat_c=:etat,nom_c=:nom where id_c=:id");
    q.bindValue(":quantite",qty);
    q.bindValue(":etat",etat);
    q.bindValue(":nom",nom);
    q.bindValue(":id",res);

    return q.exec();
}

QSqlQueryModel * Commande::afficher_tri_id()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from commandes order by id_c");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}

QSqlQueryModel * Commande::afficher_tri_nom()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from commandes order by nom_c");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}

QSqlQueryModel * Commande::afficher_tri_quantite()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from commandes order by quantite_c");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}

QSqlQueryModel * Commande::afficher_rech_cmd(QString critere,QString val)
{
    QSqlQueryModel * model = new QSqlQueryModel();

       model->setQuery("select * from commandes where nom_c like '%"+val+"%'");

       model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
       model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
       model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
       model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
       model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}

QSqlQueryModel * Commande::afficher_rech_cmd(int val)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QString res = QString::number(val);
       model->setQuery("select * from commandes where id_c like '%"+res+"%' or quantite_c like '%"+res+"%'");

       model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
       model->setHeaderData(1,Qt::Horizontal,QObject::tr("Quantite"));
       model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
       model->setHeaderData(3,Qt::Horizontal,QObject::tr("Nom"));
       model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date"));

    return model;
}






