#include "gclients.h"

Gclients::Gclients()
{

}
bool Gclients::ajouterClient()
{
    QSqlQuery query;
    QString res = QString::number(cinC);
    //prepare()prend la requete en param pour la preparer a l'execution
    query.prepare("insert into clients(cin,nom_c,prenom_c,sexe_c,date_naissance,reduction_c) values(:cin, :nom, :prenom, :sexe, :daten, :reduc)");
    //creation des variable liés
    query.bindValue(":cin",res);
    query.bindValue(":nom",NomC);
    query.bindValue(":prenom",PrenomC);
    query.bindValue(":sexe",SexeC);
    query.bindValue(":daten",DateNaissanceC);
    query.bindValue(":reduc",reduction);
    return query.exec();
}
QSqlQueryModel * Gclients::afficherClient()
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from clients");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("DATE NAISSANCE"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("DATE AJOUT"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("REDUCTION"));
return model;
}
bool Gclients::supprimerClient(int cinn)
{
    QSqlQuery query; //nasn3ou l requette
    QString res = QString::number(cinn); //nahdhru les attribut li f wst requette yabdw kol string
    //prepare()prend la requete en param pour la preparer a l'execution
    query.prepare("Delete from clients where cin = :cin");
    query.bindValue(":cin",res);
    return query.exec();
}

bool Gclients::modifierClient(int cinnn, QString nom, QString prenom, QString sexe, QString date)
{
    QSqlQuery query; //nasn3ou l requette
    QString res = QString::number(cinnn); //nahdhru les attribut li f wst requette yabdw kol string

    //cas ou form vide
    //if(nom.isEmpty())
    //{
        //QSqlQuery query1("select nom_c from clients where cin = :cin");
        //query1.bindValue(":cin", res);
        //query.first();
        //nom=query1.value(0).toString();
    //}

    //if(prenom.isEmpty())
    //{
        //QSqlQuery query2("select prenom_c from clients where cin = :cin");
        //prenom=query2.first();
        //query2.exec();
   // }

    //prepare()prend la requete en param pour la preparer a l'execution
    query.prepare("update clients set nom_c=:nom, prenom_c=:prenom, sexe_c=:sexe, DATE_NAISSANCE=:daten where cin = :cin");

    //creation des variable liés
    query.bindValue(":cin",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":sexe",sexe);
    query.bindValue(":daten",date);

    return query.exec();
}
QSqlQueryModel * Gclients::Tri(int index)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    switch(index){
    case 1:
        model->setQuery("SELECT* FROM clients order by DATE_AJOUT asc ");
        break;
    case 2:
        model->setQuery("SELECT* FROM clients order by SEXE_C asc ");
        break;
    case 3:
        model->setQuery("SELECT* FROM clients order by NOM_C desc ");
        break;

    }
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("DATE NAISSANCE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("DATE AJOUT"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("REDUCTION"));
    return model;
}
QSqlQueryModel * Gclients::recherche(QString res)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM clients where cin like '%"+res+"%'");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("DATE NAISSANCE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("DATE AJOUT"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("REDUCTION"));
    return model;
}
void Gclients::CalculReduction()
{
    QSqlQuery query,quer; //nasn3ou l requette
    quer.prepare("SELECT * FROM clients WHERE (EXTRACT(year FROM DATE_AJOUT)<2022)");
    bool test=quer.exec();
    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("L'acces à la reduction est à jour\n"
                            "Click Canel To exist."), QMessageBox::Cancel);
    }
    while (quer.next())
    {
    QString cin=quer.value(0).toString();
    query.prepare("update clients set REDUCTION_C='Accesible' where cin = :cin");
    query.bindValue(":cin",cin);
    query.exec();
    }

}

