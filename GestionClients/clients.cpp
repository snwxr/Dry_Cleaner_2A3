#include "clients.h"
#include "ui_clients.h"
#include "gclients.h"
#include "QMessageBox"

//Tryin ScrollArea
#include <QPushButton>
#include <QVBoxLayout>
Clients::Clients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clients)
{
    ui->setupUi(this);
    //les controles de saisie sur les lineEdits
    ui->lineEdit_CIN->setValidator(new QIntValidator(0,9999999,this)); // controle de saisie lineedit va accepter juste les nombre de 0 a 9999999
    ui->lineEdit_FirstName->setValidator(new QRegExpValidator( QRegExp("[A-Za-z ]*") , this ));// controle de saisie linEedit va accepter juste les lettres miniscules + majuscules
    ui->lineEdit_LastName->setValidator(new QRegExpValidator( QRegExp("[A-Za-z ]*") , this ));// controle de saisie lineEdit va accepter juste les lettres miniscules + majuscules

}

Clients::~Clients()
{
    delete ui;
}


void Clients::on_pushButton_Add_clicked()
{   //recuperation des info du form
    int cin=ui->lineEdit_CIN->text().toInt();
    QString nom=ui->lineEdit_FirstName->text();
    QString prenom=ui->lineEdit_LastName->text();
    QString sexe=ui->comboBox_Gender->currentText();
    QString date=ui->dateEdit_BirthDate->date().toString();
    Gclients G(cin,nom,prenom,sexe,"pas encore",date);//instancier un objet de la classe GClient
                                                //en utulisant les info saisies dans l'interface
    bool test=G.ajouterClient(); //inserer l'objet GClient instancie dans la table Clients
                                //recuperer la valeur de retour de querry.exec()
    if(test) //si la requete executée ==>QMessageBox::information
    {
        ui->lineEdit_CIN->clear();
        ui->lineEdit_FirstName->clear();
        ui->lineEdit_LastName->clear();
        ui->dateEdit_BirthDate->clear();
        ui->comboBox_Gender->setCurrentIndex(0);
        ui->tableView->setModel(Etmp.afficherClient());
        QMessageBox::information(nullptr,QObject::tr("OK"),
               QObject::tr("Ajout effectué\n"
                           "Click Canel To exist."), QMessageBox::Cancel);
    }
    else //Si la requete non effectué ==> QMessageBox::critical
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                QObject::tr("Ajout non effectuté.\n"
                                            "Click Cancel To Exist."), QMessageBox::Cancel);


}

void Clients::on_pushButton_ShowAll_clicked()
{
        ui->tableView->setModel(Etmp.afficherClient());
}

void Clients::on_pushButton_delete_clicked()
{
    int cin=ui->lineEdit_CIN->text().toInt();
    bool test=Etmp.supprimerClient(cin);
    if(test)
    {
       ui->tableView->setModel(Etmp.afficherClient());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("Suppression effectuée\n"
                            "Click Canel To exist."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                QObject::tr("Suppression non effectuté.\n"
                                            "Click Cancel To Exist."), QMessageBox::Cancel);
}

void Clients::on_pushButton_modify_clicked()
{
    //recuperation des info du form
        int cin=ui->lineEdit_CIN->text().toInt();
        QString nom=ui->lineEdit_FirstName->text();
        QString prenom=ui->lineEdit_LastName->text();
        QString sexe=ui->comboBox_Gender->currentText();
        QString date=ui->dateEdit_BirthDate->date().toString();
        bool test=Etmp.modifierClient(cin,nom,prenom,sexe,date); //inserer l'objet GClient instancie dans la table Clients
                                    //recuperer la valeur de retour de querry.exec()
        if(test) //si la requete executée ==>QMessageBox::information
        {
           QMessageBox::information(nullptr,QObject::tr("OK"),
                   QObject::tr("Modification Effectué\n"
                               "Click Canel To exist."), QMessageBox::Cancel);
        }
        else //Si la requete non effectué ==> QMessageBox::critical
            QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                    QObject::tr("Modification Non Effectuté.\n"
                                                "Click Cancel To Exist."), QMessageBox::Cancel);
}

void Clients::on_pushButton_OK_clicked()
{int index=0;
    if(ui->radioButton_Subscription->isChecked())
    {
        index=1;
    }
    else if(ui->radioButton_Gender->isChecked())
    {
        index=2;
    }
    else if(ui->radioButton_Names->isChecked())
    {
        index=3;
    }
    ui->tableView->setModel(Etmp.Tri(index));
}

void Clients::on_pushButton_Search_clicked()
{
    QString res=ui->lineEdit_SearchBar->text();
    ui->tableView->setModel(Etmp.recherche(res));
}
