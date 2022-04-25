#include "article.h"
#include <QPixmap>
#include "ui_garticle.h"
#include "garticle.h"

article::article()
{

}

article::article(int num,int cin,QString type_a,QString etat_a,QString date_a,QString photo_a)
{
    num_prod=num;
    cin_client=cin;
    type=type_a;
    etat=etat_a;
    date=date_a;
    photo=photo_a;
}

bool article::ajouter()
{
    QSqlQuery query;

    QString res = QString::number(num_prod);
    QString cin = QString::number(cin_client);

    //prepare() prendla requete en parametre pour la preparer a l'execution.

    query.prepare("insert into articles(num_prod, type_prod, etat_prod, date_envoyee, photo, cin_client) values(:num_prod, :type_prod, :etat_prod, :date_envoyee, :photo, :cin_client)");

    query.bindValue(":num_prod",res);
    query.bindValue(":type_prod",type);
    query.bindValue(":etat_prod",etat);
    query.bindValue(":date_envoyee",date);
    query.bindValue(":photo",photo);
    query.bindValue(":cin_client",cin);

    return query.exec();
}

QSqlQueryModel * article::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from articles");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));

    return model;
}

bool article::supprimer(int num)
{
    QSqlQuery query;
    QString res = QString::number(num);

    query.prepare("delete from articles where num_prod = :num");
    query.bindValue(":num",res);

    return query.exec();
}

bool article::modifier(int i)
{
    QSqlQuery query;

    QString res = QString::number(i);
    QString cin = QString::number(cin_client);

    //prepare() prend la requete en parametre pour la preparer a l'execution.

    query.prepare("update articles set type_prod=:type_prod, etat_prod=:etat_prod, date_envoyee=:date_envoyee, photo=:photo, cin_client=:cin_client where num_prod=:num_prod");

    //Creation des variables liees
    query.bindValue(":num_prod",res);
    query.bindValue(":type_prod",type);
    query.bindValue(":etat_prod",etat);
    query.bindValue(":date_envoyee",date);
    query.bindValue(":photo",photo);
    query.bindValue(":cin_client",cin);

    return query.exec();//exec() envoie la requete pour l'executer
}

QSqlQueryModel * article::afficher_tri_num_art()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from articles order by num_prod");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));

    return model;
}

QSqlQueryModel * article::afficher_tri_type_art()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from articles order by type_prod");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));

    return model;
}

QSqlQueryModel * article::afficher_tri_etat_art()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from articles order by etat_prod");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));

    return model;
}

QSqlQueryModel * article::afficher_rech_art(QString critere,QString val)
{
    QSqlQueryModel * model = new QSqlQueryModel();


    if(critere == "type"){
        model->setQuery("select * from articles where type_prod LIKE '%"+val+"%'");
    }

    if(critere == "etat"){
        model->setQuery("select * from articles where etat_prod LIKE '%"+val+"%'");
    }

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));


    return model;
}

QSqlQueryModel * article::afficher_rech_art(QString critere,int val)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QString num = QString::number(val);

    model->setQuery("select * from articles where num_prod LIKE'%"+num+"%'");
    if(critere == "client"){
        model->setQuery("select * from articles where cin_client LIKE '%"+num+"%'");
    }

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("Num"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Etat"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Date_Recu"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_env"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("photo"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("client"));

    return model;
}
