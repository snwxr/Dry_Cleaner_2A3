#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QFileDialog>
#include <QTextDocument>
#include <QDebug>
#include <QtPrintSupport/QPrinter>
#include <QPrinter>
#include <QPrintDialog>
#include<QGraphicsView>
#include <QTableWidget>
#include <QTextStream>
#include <QTextDocument>
#include <QThread>
#include <QDesktopServices>
#include <QPdfWriter>
#include "mainwindow.h"
#include <QMessageBox>
#include <QSqlRecord>
#include <QPrinter>
#include <QPrintDialog>
#include <QMessageBox>
#include <QString>
#include <QTextStream>
#include <QPainter>
#include <QTextStream>
#include <QDebug>
#include <QFileDialog>
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QMessageBox>
#include <QThread>
#include <QDesktopServices>
#include <QPdfWriter>
#include<QDate>
#include <QTableWidget>
#include <QDebug>
#include<QGraphicsView>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextDocument>
#include <QDebug>
#include <QtPrintSupport/QPrinter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
     ui->tableProduit->setModel(tmpp.afficher());
     ui->tableCommande->setModel(co.afficher());

     QIntValidator *roll = new QIntValidator(10000000,99999999);


     ui->id->setValidator(roll);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_ajouter_produit_clicked()
{
    int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString DateRecu=ui->DateRecu->text();
    int Quantite=ui->Quantite->text().toInt();
    ProduitNettoyage P(id,nom,DateRecu,Quantite);
    bool test=P.ajouter();
    if(test){
        ui->tableProduit->setModel(tmpp.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("produit ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }else{
        QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("produit non ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_Button_modifier_produit_clicked()
{
    int id=ui->id->text().toInt();
        QString nom=ui->nom->text();
        QString DateRecu=ui->DateRecu->text();
        int Quantite=ui->Quantite->text().toInt();
        ProduitNettoyage P(id,nom,DateRecu,Quantite);
        QString ci=QString::number(id);
        bool test=P.modifier(ci);
        if(test){
            ui->tableProduit->setModel(tmpp.afficher());
            QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("produit modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }else{
            QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("produit non modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void MainWindow::on_buttonSupprimer_produit_clicked()
{
    int row =ui->tableProduit->selectionModel()->currentIndex().row();
           QString id=ui->tableProduit->model()->index(row,0).data().toString();
           tmpp.supprimer(id);
           ui->tableProduit->setModel(tmpp.afficher());
}


void MainWindow::on_recuperer_clicked()
{
    int row =ui->tableProduit->selectionModel()->currentIndex().row();
    QString id=ui->tableProduit->model()->index(row,0).data().toString();
    QSqlQuery q("select * from produitNettoyage where id="+id);


     while(q.next())
     {
         ui->id->setText(q.value(0).toString());
          ui->nom->setText(q.value(1).toString());
           ui->DateRecu->setText(q.value(2).toString());
             ui->Quantite->setText(q.value(3).toString());
     }
}







void MainWindow::on_exportpdf_clicked()
{
    QSqlDatabase db;
                QTableView tabproduit;
                QSqlQueryModel * Modal=new  QSqlQueryModel();

                QSqlQuery qry;
                 qry.prepare("SELECT * FROM produitNettoyage ");
                 qry.exec();
                 Modal->setQuery(qry);
                 tabproduit.setModel(Modal);

                 db.close();

                 QString strStream;
                 QTextStream out(&strStream);

                 const int rowCount = tabproduit.model()->rowCount();
                 const int columnCount =  tabproduit.model()->columnCount();

                 const QString strTitle ="Document";


                 out <<  "<html>\n"
                     "<head>\n"
                         "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                     <<  QString("<title>%1</title>\n").arg(strTitle)
                     <<  "</head>\n"
                     "<body bgcolor=#ffffff link=#5000A0>\n"
                    << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des produits nettoyage")
                    <<"<br>"

                    <<"<table border=1 cellspacing=0 cellpadding=2 width=\"100%\">\n";
                 out << "<thead><tr bgcolor=#f0f0f0>";
                 for (int column = 0; column < columnCount; column++)
                     if (!tabproduit.isColumnHidden(column))
                         out << QString("<th>%1</th>").arg(tabproduit.model()->headerData(column, Qt::Horizontal).toString());
                 out << "</tr></thead>\n";

                 for (int row = 0; row < rowCount; row++) {
                     out << "<tr>";
                     for (int column = 0; column < columnCount; column++) {
                         if (!tabproduit.isColumnHidden(column)) {
                             QString data = tabproduit.model()->data(tabproduit.model()->index(row, column)).toString().simplified();
                             out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                         }
                     }
                     out << "</tr>\n";
                 }
                 out <<  "</table>\n"
                         "<br><br>"
                         <<"<br>"
                         <<"<table border=1 cellspacing=0 cellpadding=2>\n";


                     out << "<thead><tr bgcolor=#f0f0f0>";

                         out <<  "</table>\n"

                     "</body>\n"
                     "</html>\n";

                 QTextDocument *document = new QTextDocument();
                 document->setHtml(strStream);

                 QPrinter printer;
                 QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                 if (dialog->exec() == QDialog::Accepted) {

                     document->print(&printer);
                 }

                 printer.setOutputFormat(QPrinter::PdfFormat);
                 printer.setPaperSize(QPrinter::A4);
                 printer.setOutputFileName("/tmp/aaa/.pdf");
                 printer.setPageMargins(QMarginsF(15, 15, 15, 15));

                 delete document;
}




void MainWindow::on_trier_clicked()
{
    ui->tableProduit->setModel(tmpp.afficher_id());
}

void MainWindow::on_rechercher_clicked()
{
    QString id  =ui->lineEdit_IDR->text();

        QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * FROM produitNettoyage where id='"+id+"'");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DateRecu"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Quantite"));
        ui->tableProduit->setModel(model);

       qDebug() <<(model->rowCount());
}

void MainWindow::on_ajoutercommande_clicked()
{
    int id=ui->id->text().toInt();
   int id_four=ui->id_four->text().toInt();
   int nbrP=ui->nbrP->text().toInt();

    commande c(id,id_four,nbrP);
    bool test=c.ajouter();
    if(test){
        ui->tableCommande->setModel(co.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("produit ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }else{
        QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                    QObject::tr("produit non ajouté.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_modifierC_clicked()
{
    int id=ui->id->text().toInt();
    int id_four=ui->id_four->text().toInt();
    int nbrP=ui->nbrP->text().toInt();

        commande c(id,id_four,nbrP);
        QString id1=QString::number(id);
        bool test=c.modifier(id1);
        if(test){
            ui->tableCommande->setModel(co.afficher());
            QMessageBox::information(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("produit modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }else{
            QMessageBox::critical(nullptr, QObject::tr("Ajouter"),
                        QObject::tr("produit non modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }
}


void MainWindow::on_supprimerC_clicked()
{
    int row =ui->tableCommande->selectionModel()->currentIndex().row();
           QString id=ui->tableCommande->model()->index(row,0).data().toString();
           co.supprimer(id);
           ui->tableCommande->setModel(co.afficher());
}


void MainWindow::on_recupererC_clicked()
{
    int row =ui->tableCommande->selectionModel()->currentIndex().row();
    QString id=ui->tableCommande->model()->index(row,0).data().toString();
    QSqlQuery q("select * from commande where id="+id);


     while(q.next())
     {
         ui->id->setText(q.value(0).toString());
          ui->id_four->setText(q.value(1).toString());
           ui->nbrP->setText(q.value(2).toString());
     }
}
