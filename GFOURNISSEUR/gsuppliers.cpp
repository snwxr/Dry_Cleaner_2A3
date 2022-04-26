#include "gsuppliers.h"

gSuppliers::gSuppliers()
{

    ID_F=0;
    Prenom_F="";
     Nom_F="";
    Specialite_F="";
    Sexe_F="";
}
gSuppliers:: gSuppliers (int ID_F,  QString Prenom_F, QString Nom_F, QString Specialite_F, QString Sexe_F )

{
    this->ID_F=ID_F;
       this-> Prenom_F= Prenom_F;
       this->Nom_F=Nom_F;
       this->Specialite_F=Specialite_F;
       this->Sexe_F=Sexe_F;

}

bool gSuppliers::ajouter_fournisseur()
{
QSqlQuery query;


query.prepare("insert into FOURNISSEURS(ID_F,Prenom_F,Nom_F,Specialite_F,Sexe_F) values(:ID_F,:Prenom_F,:Nom_F,:Specialite_F,:Sexe_F)");

QString res = QString::number(ID_F);

query.bindValue(":ID_F",res);
query.bindValue(":Prenom_F",Prenom_F);
query.bindValue(":Nom_F",Nom_F);
query.bindValue(":Specialite_F",Specialite_F);
query.bindValue(":Sexe_F",Sexe_F);


return query.exec();

}

QSqlQueryModel * gSuppliers::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FOURNISSEURS");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_F"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Prenom_F"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Nom_F"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Specialite_F"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("Sexe_F"));
    return model;

}

bool gSuppliers::supp_fournisseur(int tofind)
{

    QSqlQuery query;
    QString id_f1 = QString::number(tofind);
    query.prepare("Delete from FOURNISSEURS  where ID_F=:ID_F");
    query.bindValue(":ID_F",tofind);
    return query.exec();

}
/*bool Glivraison::modifier()
{
    //bool test=false;


    QSqlQuery query;
          query.prepare("UPDATE  livraison set id=:id, adresse=:adresse,prix=:prix where ID like :id");
          query.bindValue(":id",id_livraison);
          query.bindValue(":adresse", adresse_livraison);
          query.bindValue(":prix", prix_livraison);
          return query.exec();

//return test;
}*/


 bool gSuppliers::modifier_fournisseur(int id ,QString Pre ,QString Nom ,QString Spe ,QString S)
  {
      //qDebug()<<"is working";

      QSqlQuery query;
      QString res = QString::number(id);

      query.prepare("update FOURNISSEURS set Prenom_F=:Prenom, Nom_F=:Nom, Sexe_F=:Sexe, Specialite_F=:Specialite where ID_F=:ID");

      query.bindValue(":ID",res);
      query.bindValue(":Prenom",Pre);
      query.bindValue(":Nom",Nom);
      query.bindValue(":Specialite",Spe);
      query.bindValue(":Sexe",S);

      return query.exec();
  }
 QSqlQueryModel *gSuppliers::rechercher(QString rech)
  {
      QSqlQueryModel * model= new QSqlQueryModel();

          model->setQuery("select * from FOURNISSEURS where upper(ID_F) LIKE upper ('%"+rech+"%') or upper(Prenom_F) LIKE upper ('%"+rech+"%') or upper(Specialite_F) LIKE upper ('%"+rech+"%')");


      return model;

  }
 QSqlQueryModel * gSuppliers::trier_sexe()
 {
     QSqlQuery *qry=new QSqlQuery();
     QSqlQueryModel *model=new QSqlQueryModel();
     qry->prepare("select * from FOURNISSEURS order by ID_F ASC");
     qry->exec();
     model->setQuery(*qry);
     return model;
 }
 QSqlQueryModel *gSuppliers::trier_Prenom()
 {
     QSqlQuery *qry=new QSqlQuery();
     QSqlQueryModel *model=new QSqlQueryModel();
     qry->prepare("select * from FOURNISSEURS order by Prenom_F ASC");
     qry->exec();
     model->setQuery(*qry);
     return model;
 }

 QSqlQueryModel * gSuppliers::trier_specialite()
 {
     QSqlQuery *qry=new QSqlQuery();
     QSqlQueryModel *model=new QSqlQueryModel();
     qry->prepare("select * from FOURNISSEURS order by SPECIALITE_F ASC");
     qry->exec();
     model->setQuery(*qry);
     return model;
 }

