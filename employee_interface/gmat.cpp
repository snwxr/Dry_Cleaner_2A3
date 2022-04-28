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
#include <QDateTime>
#include <qapplication.h>
#include "smtp.h"
#include "mailing.h"
#include "employee.h"
#include "gproduits.h"
#include "garticle.h"
#include "clients.h"
#include "suppliers.h"

Employee *e3;
garticle *a2;
Gproduits *g2;
Clients *cl3;
Suppliers *s4;

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
       ui->label_info_mat->setText("Ajout effectue.");
    }else
       ui->label_info_mat->setText("Ajout non effectue.");
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
        ui->label_info_mat->setText("Suppression effectue.");
    }else
    ui->label_info_mat->setText("Suppression non effectue.");
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
        ui->label_info_mat->setText("erreur requete sql.\n");
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
        ui->label_info_mat->setText("Modification effectue.");
    }else
     ui->label_info_mat->setText("Modification non effectue.");
}

void gmat::on_pdfmat_clicked()
{
    QSqlDatabase db;

                        QTableView tablivraison;

                        QSqlQueryModel * Modal=new  QSqlQueryModel();


QSqlQuery qrt;

qrt.prepare("SELECT TO_CHAR (SYSDATE, 'MM-DD-YYYY HH24:MI:SS') FROM dual");

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



  QString date= qrt.value(0).toString();

QString d_info=QDateTime::currentDateTime().toString();

                         out <<  "<html>\n"

                                 "<img src='C:/Users/aminee/Downloads/logo.png' height='120' width='120'/>"
                             "<p style=\"text-align:right\">"+d_info+"</p>"

                             "<head>\n"

                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"

                             <<  QString("<title>%1</title>\n").arg(strTitle)

                             <<  "</head>\n"

                             "<body bgcolor=#ffffff link=#5000A0>\n"

                            << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des materiels")

                            <<"<br>"
                           << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: black; font-weight: lighter; text-align: right;\">%1</h3>\n").arg(date)
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




void gmat::on_line_rech_mat_textChanged(const QString &arg1)
{
     ui->tab_mat->setModel(mtmp.recherche(ui->line_rech_mat->text()));

}

void gmat::on_btn_tri_mat_clicked()
{
    ui->tab_mat->setModel(mtmp.triParId());
}

void gmat::on_pushButton_9_clicked()
{{
        QTableView *table;
           table = ui->tab_mat;

           QString filters("CSV files (.csv);;All files (.*)");
           QString defaultFilter("CSV files (*.csv)");
           QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                              filters, &defaultFilter);
           fileName.append(".csv");
           QFile file(fileName);

           QAbstractItemModel *model =  table->model();
           if (file.open(QFile::WriteOnly | QFile::Truncate)) {
               QTextStream data(&file);
               QStringList strList;
               for (int i = 0; i < model->columnCount(); i++) {
                   if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                       strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                   else
                       strList.append("");
               }
               data << strList.join(";") << "\n";
               for (int i = 0; i < model->rowCount(); i++) {
                   strList.clear();
                   for (int j = 0; j < model->columnCount(); j++) {

                       if (model->data(model->index(i, j)).toString().length() > 0)
                           strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                       else
                           strList.append("");
                   }
                   data << strList.join(";") + "\n";
               }
               file.close();
               QMessageBox::information(this,"Exporter To Excel","Exporter En Excel Avec Succées ");
           }
}
}

void gmat::on_pushButton_4_clicked()
{
    qApp->exit();
}


void gmat::on_pushButton_clicked()
{

}

/*void materiels::sendMail()
{

    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void materiels::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}
*/



void gmat::on_pushButton_3_clicked()
{
//a.write_to_arduino("1");
}

void gmat::on_tabWidget_currentChanged(int index)
{
    if(index == 0){
        hide();
        e3 = new Employee(this);
        e3->show();
    }
    if(index == 1){
        hide();
        g2 = new Gproduits(this);
        g2->show();
    }
    if(index == 2){
        hide();
        a2 = new garticle(this);
        a2->show();
    }
    if(index == 4){
        hide();
        cl3 = new Clients(this);
        cl3->show();
    }
    if(index == 5){
        hide();
        s4 = new Suppliers(this);
        s4->show();
    }
}
