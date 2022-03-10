#include "garticle.h"
#include "ui_garticle.h"
#include "article.h"
#include <QMessageBox>
#include <QSqlError>

garticle::garticle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::garticle)
{
    ui->setupUi(this);
    ui->tab_art->setModel(atmp.afficher());
}

garticle::~garticle()
{
    delete ui;
}

void garticle::on_ajout_article_clicked()
{
    int num = ui->num_prod->text().toInt();
    int cin = ui->cin_client->text().toInt();
    QString date = ui->date_env->date().toString();
    QString type = ui->type_prod->text();
    QString etat = ui->etat_prod->text();
    QString photo = ui->photo_prod->text();

    article a(num,cin,type,etat,date,photo);

    bool test=a.ajouter();

    if(test)
    {
        ui->comboBox_modif_prod->addItem(ui->num_prod->text());
        ui->num_prod->clear();
        ui->type_prod->clear();
        ui->etat_prod->clear();
        ui->date_env->clear();
        ui->photo_prod->clear();
        ui->cin_client->clear();
        ui->tab_art->setModel(atmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectue\nClick cancel to exit."),QMessageBox::Cancel);
    }else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Ajout non effectue\nClick cancel to exit."),QMessageBox::Cancel);
}

void garticle::on_supp_article_clicked()
{
    int num = ui->num_prod->text().toInt();
    bool test = atmp.supprimer(num);

    if(test)
    {
        int supbox=ui->comboBox_modif_prod->findText(ui->num_prod->text());
        ui->comboBox_modif_prod->removeItem(supbox);
        ui->num_prod->clear();
        ui->type_prod->clear();
        ui->etat_prod->clear();
        ui->date_env->clear();
        ui->photo_prod->clear();
        ui->cin_client->clear();
        ui->tab_art->setModel(atmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Suppression effectue\nClick cancel to exit."),QMessageBox::Cancel);
    }else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Suppression non effectue\nClick cancel to exit."),QMessageBox::Cancel);
}

void garticle::on_comboBox_modif_prod_currentIndexChanged(const QString &arg1)
{
    QString val = ui->comboBox_modif_prod->currentText();

    QSqlQuery query;

    query.prepare("select * from articles where num_prod=:num_prod");
    query.bindValue(":num_prod",val);

    if(query.exec())
    {
        while(query.next())
        {
            ui->num_prod->setText(query.value(0).toString());
            ui->type_prod->setText(query.value(1).toString());
            ui->etat_prod->setText(query.value(2).toString());
            ui->date_env->setDate(query.value(4).toDate());
            ui->photo_prod->setText(query.value(5).toString());
            ui->cin_client->setText(query.value(6).toString());
        }
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }
}

void garticle::on_modif_article_clicked()
{
    //Recuperation des informations saisies dans les  champs
    int num = ui->num_prod->text().toInt();
    int cin = ui->cin_client->text().toInt();
    QString date = ui->date_env->date().toString();
    QString type = ui->type_prod->text();
    QString etat = ui->etat_prod->text();
    QString photo = ui->photo_prod->text();

    article a(num,cin,type,etat,date,photo);

    bool test=a.modifier(num);//Modifier l'objet article instancie dans le tableau employe

    if(test)
    {
        ui->num_prod->clear();
        ui->type_prod->clear();
        ui->etat_prod->clear();
        ui->date_env->clear();
        ui->photo_prod->clear();
        ui->cin_client->clear();
        ui->tab_art->setModel(atmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Modification effectue.\nClick cancel to exit"),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Modification non effectue.\nClick cancel to exit"),QMessageBox::Cancel);
}
