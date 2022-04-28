#include "suppliers.h"
#include "ui_suppliers.h"
#include "gsuppliers.h"
#include <QSqlError>
#include<QString>
#include "suppliers.h"
#include "ui_suppliers.h"
#include "gsuppliers.h"
#include  <QDesktopServices>
#include <QPdfWriter>
#include <QFontDialog>
#include<QMessageBox>
#include <QLineEdit>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>
#include <QDateTime>
#include "QZXing.h"
#include <QGraphicsScene>
#include <QDebug>
#include "employee.h"
#include "gproduits.h"
#include "garticle.h"
#include "gmat.h"
#include "clients.h"

Employee *e5;
Gproduits *g5;
garticle *a5;
gmat *gm5;
Clients *cl5;

Suppliers::Suppliers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Suppliers)
{
    ui->setupUi(this);
    //controle de saisie
}

Suppliers::~Suppliers()
{
    delete ui;
}

void Suppliers::on_pushButton_2_clicked()// ajout fournisseur
{
    int ID=ui->lineEdit->text().toInt();
        QString Prenom=ui->lineEdit_2->text();
        QString Nom=ui->lineEdit_3->text();
        QString Sexe=ui->lineEdit_4->text();
        QString Specialite=ui->lineEdit_6->text();
   // gSuppliers(int,QString,QString,QString,QString)
        gSuppliers F(ID,Prenom,Nom,Sexe,Specialite);
        bool test = F.ajouter_fournisseur();

        if(test)

           {
           ui->lineEdit->clear();
                    ui->lineEdit_2->clear();
                    ui->lineEdit_3->clear();
                 ui->lineEdit_4->clear();
                   ui->lineEdit_6->clear();

             ui->tablefournisseur->setModel(F.afficher());
               ui->label_info_frn->setText("Ajout effectuee.");
           }
           else
        ui->label_info_frn->setText("Ajout non effectuee.");


}

void Suppliers::on_pushButton_3_clicked()//modification fournisseur
{
    //recuperation des info du form

    int ID = ui->lineEdit->text().toInt();
        QString Prenom=ui->lineEdit_2->text();
        QString Nom=ui->lineEdit_3->text();
        QString Sexe=ui->lineEdit_4->text();
        QString Specialite=ui->lineEdit_6->text();

            bool test=Etmp.modifier_fournisseur(ID,Prenom,Nom,Sexe,Specialite); //inserer l'objet Gfournisseur instancie dans la table FOURNISSUER
                                        //recuperer la valeur de retour de querry.exec()

            if(test) //si la requete executée ==>QMessageBox::information

            {

                ui->tablefournisseur->setModel(Etmp.afficher());
                ui->label_info_frn->setText("Modification effectuee.");
            }

            else //Si la requete non effectué ==> QMessageBox::critical
            ui->label_info_frn->setText("Modification non effectuee.");
}

void Suppliers::on_pushButton_4_clicked()// suppersion fournisseur
{
    int ID_F=ui->lineEdit->text().toInt();
        bool test=Etmp.supp_fournisseur(ID_F);
        if(test)
        {
           ui->tablefournisseur->setModel(Etmp.afficher());
            ui->label_info_frn->setText("Suppression effectuee.");
        }
        else
        ui->label_info_frn->setText("Suppression non effectuee.");

}

void Suppliers::on_tablefournisseur_activated(const QModelIndex &index)
{
    QString c=ui->tablefournisseur->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from FOURNISSEURS where ID_F=:ID_F");
    qry.bindValue(":ID_F",c);

    if (qry.exec())
    {
            while(qry.next())
            {



                ui->lineEdit->setText((qry.value(0).toString()));
                ui->lineEdit_2->setText((qry.value(1).toString()));
                ui->lineEdit_3->setText((qry.value(2).toString()));
                ui->lineEdit_4->setText((qry.value(3).toString()));
                 ui->lineEdit_6->setText((qry.value(4).toString()));
                 QString data = "ID:" + qry.value(0).toString() + "\n" + "Prenom:" + qry.value(1).toString() + "\n" + "Nom:" + qry.value(2).toString() + "\n" + "Sexe:" + qry.value(3).toString() +  "\n" + "Specialite:" +  qry.value(4).toString();
                 QImage barcode = QZXing::encodeData(data);


                 QGraphicsScene *graphic = new QGraphicsScene(this);

                 graphic->addPixmap( QPixmap::fromImage(barcode));
                 ui->graphicsView->setScene(graphic);

            }
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}





void Suppliers::on_pushButton_clicked()//rech
{
    QString rech =ui->lineEdit_5->text();
            ui->tablefournisseur->setModel(Etmp.rechercher(rech));
}

void Suppliers::on_pushButton_5_clicked()//afficher tout
{
 ui->tablefournisseur->setModel(Etmp.afficher());
}

void Suppliers::on_pushButton_8_clicked()//trie
{
    if(ui->radioButton->isChecked())
            {
                ui->tablefournisseur->setModel(Etmp.trier_sexe());
            }
            else if(ui->radioButton_2->isChecked())
            {
                ui->tablefournisseur->setModel(Etmp.trier_Prenom());
            }
            else if(ui->radioButton_3->isChecked())
            {
               ui->tablefournisseur->setModel(Etmp.trier_specialite());
            }
}

void Suppliers::on_pushButton_6_clicked()
{
    QPdfWriter pdf("C:/Users/nouss/OneDrive/Desktop/Fournisseurs.pdf");
                             QPainter painter(&pdf);
                            int i = 4000;
                                 painter.setPen(Qt::darkCyan);
                                 painter.setFont(QFont("Arial", 30));
                                 painter.drawText(3400,1500,"Liste Des Fournisseurs");
                                 painter.setPen(Qt::black);
                                 painter.setFont(QFont("Arial", 50));
                                // painter.drawText(1100,2000,afficheDC);
                                 painter.drawRect(1500,200,7300,2600);
                                 painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/ASUS/Documents/GFOURNISSEUR/logo.jpg"));
                                 painter.drawRect(0,3000,9600,500);
                                 painter.setFont(QFont("Arial", 9));
                                 painter.drawText(300,3300,"ID");
                                 painter.drawText(1500,3300,"PRENOM");
                                 painter.drawText(3300,3300,"NOM");
                                 painter.drawText(4300,3300,"SEXE");
                                 painter.drawText(5000,3300,"SPECIALITE");


                                  QSqlQuery Qd;
                                  Qd.prepare("SELECT TO_CHAR(SYSDATE, 'MM-DD-YYYY HH24:MI:SS') FROM dual");
                                  Qd.exec();
                                  QString date;
                                  while(Qd.next())
                                  date = Qd.value(0).toString();
                                  painter.drawText(300,50,date);


                                 //painter.setBackground(Qt::darkCyan);
                                 QSqlQuery query;
                                 query.prepare("select * from FOURNISSEURS");
                                 query.exec();
                                 while (query.next())
                                 {
                                     painter.drawText(300,i,query.value(0).toString());
                                     painter.drawText(1500,i,query.value(1).toString());
                                     painter.drawText(3300,i,query.value(2).toString());
                                     painter.drawText(4900,i,query.value(3).toString());
                                     painter.drawText(6000,i,query.value(4).toString());


                                    i = i +500;
                                 }
 painter.end();
}

void Suppliers::on_pushButton_9_clicked() //police
{
    bool ok;
      QFont font = QFontDialog::getFont(&ok, this);
      font.setStyleHint(QFont::Monospace);
      if (ok) {

          QApplication::setFont(font);
      } else {
          // the user canceled the dialog; font is set to the default
          // application font, QApplication::font()
      }

}

void Suppliers::on_pushButton_10_clicked() //traduire
{
    ui->label_info_frn->clear();
 ui->label_info_frn->setText(tr("User %1 submitted  a message with the title %2. The message is %3 %4 ")
                             .arg(ui->lineEdit_2->text())
                             .arg(ui->lineEdit_3->text())
                             .arg (ui->lineEdit_4->text())
                             .arg(ui->lineEdit_6->text()));
}

void Suppliers::on_tab_3_currentChanged(int index)
{
    if(index == 0){
        hide();
        e5 = new Employee(this);
        e5->show();
    }
    if(index == 1){
        hide();
        g5 = new Gproduits(this);
        g5->show();
    }
    if(index == 2){
        hide();
        a5 = new garticle(this);
        a5->show();
    }
    if(index == 3){
        hide();
        gm5 = new gmat(this);
        gm5->show();
    }
    if(index == 4){
        hide();
        cl5 = new Clients(this);
        cl5->show();
    }
}
