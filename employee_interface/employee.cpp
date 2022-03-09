#include "employee.h"
#include "employe.h"
#include "ui_employee.h"
#include <QMessageBox>
#include <QLineEdit>
Employee::Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employee)
{
    ui->setupUi(this);
    ui->tableView->setModel(etmp.afficher());
}

Employee::~Employee()
{
    delete ui;
}



void Employee::on_btn_ajout_clicked()
{
    //Recuperation des informations saisies dans les  champs
    bool test=false;
    int id = ui->line_ID->text().toInt();
    QString id_val = ui->line_ID->text(); //variable de controle de saisie de l'ID
    int salaire = ui->line_salaire->text().toInt();
    QString nom = ui->line_nom->text();
    QString prenom = ui->line_prenom->text();
    QString type = ui->combo_type->currentText();
    employe E(id,salaire,nom,prenom,type);//instancier un objet de la classe etudiant

    if((nom.length() < 5) && (prenom.length() < 5) && (id_val.length() < 5) ){  //controle de saisie sur l'ajout
        test=E.ajouter();//Inserer l'objet employe instancie dans le tableau employe
    }


    if(test)
    {
        ui->comboBox_modif->addItem(ui->line_ID->text());
        ui->line_ID->clear();
        ui->line_prenom->clear();
        ui->line_nom->clear();
        ui->line_salaire->clear();
        ui->combo_type->setCurrentIndex(0);
        ui->tableView->setModel(etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectue.\nClick cancel to exit"),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Ajout non effectue.\nClick cancel to exit"),QMessageBox::Cancel);
}

void Employee::on_btn_sup_clicked()
{
    int id=ui->line_ID->text().toInt();//convertir la chaine saisie en un entier
    bool test=etmp.supprimer(id);//etmp se trouve dans employee.h

   if(ui->comboBox_modif->findText(ui->line_ID->text()) != -1)
    {
        if(test)
        {
            int supbox=ui->comboBox_modif->findText(ui->line_ID->text());
            ui->comboBox_modif->removeItem(supbox);
            ui->line_ID->clear();
            ui->line_prenom->clear();
            ui->line_nom->clear();
            ui->line_salaire->clear();
            ui->combo_type->setCurrentIndex(0);
            ui->tableView->setModel(etmp.afficher());
            QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Suppression effectuee.\nClick cancel to exit"),QMessageBox::Cancel);
        }
        else
            QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Suppression non effectuee.Erreur de requete SQL.\nClick cancel to exit"),QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Suppression non effectuee. Erreur ID n'existe pas.\nClick cancel to exit"),QMessageBox::Cancel);
    }

}

void Employee::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QString val = ui->comboBox_modif->currentText();

    QSqlQuery query;

    query.prepare("select * from employees where id=:id");
    query.bindValue(":id",val);

    if(query.exec())
    {
        while(query.next())
        {
            ui->line_ID->setText(query.value(0).toString());
            ui->line_prenom->setText(query.value(1).toString());
            ui->line_nom->setText(query.value(2).toString());
            ui->line_salaire->setText(query.value(3).toString());
            ui->combo_type->setCurrentText(query.value(4).toString());
        }
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }
}

void Employee::on_btn_modif_clicked()
{
    //Recuperation des informations saisies dans les  champs
    int id = ui->line_ID->text().toInt();
    int salaire = ui->line_salaire->text().toInt();
    QString nom = ui->line_nom->text();
    QString prenom = ui->line_prenom->text();
    QString type = ui->combo_type->currentText();
    employe E(id,salaire,nom,prenom,type);//instancier un objet de la classe etudiant

    bool test=E.modifier(id);//Modifier l'objet employe instancie dans le tableau employe

    if(test)
    {
        ui->line_ID->clear();
        ui->line_prenom->clear();
        ui->line_nom->clear();
        ui->line_salaire->clear();
        ui->combo_type->setCurrentIndex(0);
        ui->tableView->setModel(etmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Modification effectue.\nClick cancel to exit"),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Modification non effectue.\nClick cancel to exit"),QMessageBox::Cancel);
}
