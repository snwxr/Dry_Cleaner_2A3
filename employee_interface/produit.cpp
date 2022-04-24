#include "produit.h"

Produit::Produit()
{

}

Produit::Produit(int num,int quant,QString nom,QString ref)
{
    this->num=num;
    this->quant=quant;
    this->nom=nom;
    this->ref=ref;
}

bool Produit::ajouter()
{
    QSqlQuery q;
    QString n = QString::number(num);
    QString qty = QString::number(quant);

    q.prepare("insert into produits_netoyage(num_prodn,prenom_prodn,quantite_prodn,reference_prodn) values(:num_prodn,:prenom_prodn,:quantite_prodn,:reference_prodn)");
    q.bindValue(":num_prodn",n);
    q.bindValue(":prenom_prodn",nom);
    q.bindValue(":quantite_prodn",qty);
    q.bindValue(":reference_prodn",ref);

    return q.exec();
}

QSqlQueryModel * Produit::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from produits_netoyage");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

    return model;
}

bool Produit::supprimer(int num)
{
    QSqlQuery q;
    QString res = QString::number(num);

    q.prepare("delete from produits_netoyage where num_prodn=:num_prodn");
    q.bindValue(":num_prodn",res);

    return q.exec();
}

bool Produit::modifier(int n)
{
    QSqlQuery q;

    QString res = QString::number(n);
    QString qty = QString::number(quant);

    q.prepare("update produits_netoyage set prenom_prodn=:nom,quantite_prodn=:quantite,reference_prodn=:reference where num_prodn=:num");

    q.bindValue(":nom",nom);
    q.bindValue(":quantite",qty);
    q.bindValue(":reference",ref);
    q.bindValue(":num",res);

    return q.exec();
}

QSqlQueryModel * Produit::afficher_tri_nom()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from produits_netoyage order by prenom_prodn");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

    return model;
}

QSqlQueryModel * Produit::afficher_tri_quant()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from produits_netoyage order by quantite_prodn");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

    return model;
}

QSqlQueryModel * Produit::afficher_tri_reference()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from produits_netoyage order by reference_prodn");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

    return model;
}

QSqlQueryModel * Produit::afficher_rech_netoy(QString critere,QString val)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    if(critere == "Nom")
       model->setQuery("select * from produits_netoyage where prenom_prodn like '%"+val+"%'");
    if(critere == "Reference")
       model->setQuery("select * from produits_netoyage where reference_prodn like '%"+val+"%'");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

    return model;
}

QSqlQueryModel * Produit::afficher_rech_netoy(int val)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QString res = QString::number(val);

    model->setQuery("select * from produits_netoyage where num_prodn like '%"+res+"%' or quantite_prodn like '%"+res+"%'");

 model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
 model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
 model->setHeaderData(2,Qt::Horizontal,QObject::tr("Date"));
 model->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantite"));
 model->setHeaderData(4,Qt::Horizontal,QObject::tr("Reference"));

 return model;
}


