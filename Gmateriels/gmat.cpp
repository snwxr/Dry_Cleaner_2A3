#include "gmat.h"
#include "ui_gmat.h"
#include "materiels.h"
#include <QMessageBox>
#include <QSqlError>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>



gmat::gmat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gmat)
{
    ui->setupUi(this);
    ui->tab_mat->setModel(mtmp.afficher());
}

gmat::~gmat()
{
    delete ui;
}

void gmat::on_ajout_mat_clicked()
{
    int id=ui->id_mat->text().toInt();
    QString nom=ui->nom_mat->text();
    QString type=ui->type_mat->currentText();
    QString etat=ui->etat_mat->currentText();
    QString gamme=ui->gamme_mat->currentText();

    materiels m(id,nom,type,etat,gamme);

    bool test = m.ajouter();

    if(test)
    {
        ui->comboBox_modif_mat->addItem(ui->id_mat->text());
        ui->id_mat->clear();
        ui->nom_mat->clear();
        ui->type_mat->setCurrentIndex(0);
        ui->etat_mat->setCurrentIndex(0);
        ui->gamme_mat->setCurrentIndex(0);
        ui->tab_mat->setModel(mtmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK."),QObject::tr("Ajout effectue\nClick cancel to exit."),QMessageBox::Cancel);
    }else
       QMessageBox::critical(nullptr,QObject::tr("Not OK."),QObject::tr("Ajout non effectue\nClick cancel to exit."),QMessageBox::Cancel);
}

void gmat::on_supp_mat_clicked()
{
    int id=ui->id_mat->text().toInt();
    bool test = mtmp.supprimer(id);

    if(test)
    {
         int supbox = ui->comboBox_modif_mat->findText(ui->id_mat->text());
         ui->comboBox_modif_mat->removeItem(supbox);
         ui->id_mat->clear();
         ui->nom_mat->clear();
         ui->type_mat->setCurrentIndex(0);
         ui->etat_mat->setCurrentIndex(0);
         ui->gamme_mat->setCurrentIndex(0);
         ui->tab_mat->setModel(mtmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK."),QObject::tr("Suppression effectue\nClick cancel to exit."),QMessageBox::Cancel);
    }else
       QMessageBox::critical(nullptr,QObject::tr("Not OK."),QObject::tr("Suppression non effectue\nClick cancel to exit."),QMessageBox::Cancel);
}

void gmat::on_comboBox_modif_mat_currentIndexChanged(const QString &arg1)
{
    int id = ui->comboBox_modif_mat->currentText().toInt();
    QString val = QString::number(id);
    QSqlQuery query;

    query.prepare("select * from materiels where id_m= :id_m");
    query.bindValue(":id_m",val);

    if(query.exec())
    {
        while(query.next())
        {
            ui->id_mat->setText(query.value(0).toString());
            ui->nom_mat->setText(query.value(1).toString());
            ui->type_mat->setCurrentText(query.value(2).toString());
            ui->etat_mat->setCurrentText(query.value(3).toString());
            ui->gamme_mat->setCurrentText(query.value(4).toString());
        }
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }
}

void gmat::on_modif_mat_clicked()
{
    int id=ui->id_mat->text().toInt();
    QString nom=ui->nom_mat->text();
    QString type=ui->type_mat->currentText();
    QString etat=ui->etat_mat->currentText();
    QString gamme=ui->gamme_mat->currentText();

    materiels m(id,nom,type,etat,gamme);

    bool test = m.modifier(id);

    if(test)
    {
        ui->id_mat->clear();
        ui->nom_mat->clear();
        ui->type_mat->setCurrentIndex(0);
        ui->etat_mat->setCurrentIndex(0);
        ui->gamme_mat->setCurrentIndex(0);
        ui->tab_mat->setModel(mtmp.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK."),QObject::tr("Modification effectue\nClick cancel to exit."),QMessageBox::Cancel);
    }else
       QMessageBox::critical(nullptr,QObject::tr("Not OK."),QObject::tr("Modification non effectue\nClick cancel to exit."),QMessageBox::Cancel);
}

void gmat::on_pdfmat_clicked()
{
    QSqlDatabase db;

                        QTableView tablivraison;

                        QSqlQueryModel * Modal=new  QSqlQueryModel();



                        QSqlQuery qry;

                         qry.prepare("SELECT * FROM materiels ");

                         qry.exec();

                         Modal->setQuery(qry);

                         tablivraison.setModel(Modal);



                         db.close();



                         QString strStream;

                         QTextStream out(&strStream);



                         const int rowCount = tablivraison.model()->rowCount();

                         const int columnCount =  tablivraison.model()->columnCount();



                         const QString strTitle ="Document";





                         out <<  "<html>\n"

                                 "<img src='C:/Users/nouss/OneDrive/Documents/logo_drycleaner.png' height='120' width='120'/>"

                             "<head>\n"

                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"

                             <<  QString("<title>%1</title>\n").arg(strTitle)

                             <<  "</head>\n"

                             "<body bgcolor=#ffffff link=#5000A0>\n"

                            << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des materiels")

                            <<"<br>"



                            <<"<table border=1 cellspacing=0 cellpadding=2 width=\"100%\">\n";

                         out << "<thead><tr bgcolor=#f0f0f0>";

                         for (int column = 0; column < columnCount; column++)

                             if (!tablivraison.isColumnHidden(column))

                                 out << QString("<th>%1</th>").arg(tablivraison.model()->headerData(column, Qt::Horizontal).toString());

                         out << "</tr></thead>\n";



                         for (int row = 0; row < rowCount; row++) {

                             out << "<tr>";

                             for (int column = 0; column < columnCount; column++) {

                                 if (!tablivraison.isColumnHidden(column)) {

                                     QString data = tablivraison.model()->data(tablivraison.model()->index(row, column)).toString().simplified();

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

                         printer.setOutputFileName("/tmp/materiel.pdf");

                         printer.setPageMargins(QMarginsF(15, 15, 15, 15));



                         delete document;
}
