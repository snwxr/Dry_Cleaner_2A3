#include "employe.h"

employe::employe()
{

}

bool employe::ajouter()
{
    QSqlQuery query;

    QString res = QString::number(id);
    QString sal = QString::number(salaire);

    //prepare() prend la requete en parametre pour la preparer a l'execution.

    query.prepare("insert into employees(id,prenom,nom,salaire,type_e) values(:id,:prenom,:nom,:salaire,:type)");

    //Creation des variables liees
    query.bindValue(":id",res);
    query.bindValue(":salaire",sal);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":type",type);

    return query.exec();//exec() envoie la requete pour l'executer
}

bool employe::supprimer(int i)
{
    QSqlQuery query;
    QString res= QString::number(i);

    query.prepare("Delete from employees where id=:id");
    query.bindValue(":id",res);

    return query.exec();
}

QSqlQueryModel * employe::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from employees");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}

bool employe::modifier(int i)
{
    QSqlQuery query;

    QString res = QString::number(i);
    QString sal = QString::number(salaire);

    //prepare() prend la requete en parametre pour la preparer a l'execution.

    query.prepare("update employees set prenom=:prenom,nom=:nom,salaire=:salaire,type_e=:type where id=:id");

    //Creation des variables liees
    query.bindValue(":id",res);
    query.bindValue(":salaire",sal);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":type",type);

    return query.exec();//exec() envoie la requete pour l'executer
}

QSqlQueryModel * employe::afficher_tri_salaire()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from employees order by salaire");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}

QSqlQueryModel * employe::afficher_tri_type()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from employees order by type_e");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}

QSqlQueryModel * employe::afficher_tri_nom()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from employees order by nom");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}

QSqlQueryModel * employe::afficher_rech_emp(QString critere,QString val)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    if(critere == "nom")
       model->setQuery("select * from employees where nom like '%"+val+"%'");
    if(critere == "type")
       model->setQuery("select * from employees where type_e like '%"+val+"%'");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}

QSqlQueryModel * employe::afficher_rech_emp(int val)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QString res = QString::number(val);

       model->setQuery("select * from employees where salaire like '%"+res+"%' or id like '%"+res+"%'");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Salaire"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Type"));

    return model;
}
