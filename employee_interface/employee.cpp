#include "employee.h"
#include "employe.h"
#include "ui_employee.h"
#include "ui_serverwindow.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>
#include "chatserver.h"
#include "serverworker.h"
#include "serverwindow.h"

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

    if((nom.length() < 20) && (prenom.length() < 20) && (id_val.length() < 5) ){  //controle de saisie sur l'ajout
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
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Ajout effectue.\nClick ok to exit"));
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Ajout non effectue.\nClick ok to exit"));
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
            QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Suppression effectuee.\nClick ok to exit"));
        }
        else
            QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Suppression non effectuee.Erreur de requete SQL.\nClick ok to exit"));
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Suppression non effectuee. Erreur ID n'existe pas.\nClick ok to exit"));
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
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("Modification effectue.\nClick ok to exit"));
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),QObject::tr("Modification non effectue.\nClick ok to exit"));
}

void Employee::on_pdf_emp_clicked()
{
    QSqlDatabase db;

                    QTableView tablivraison;

                    QSqlQueryModel * Modal=new  QSqlQueryModel();



                    QSqlQuery qry;

                     qry.prepare("SELECT * FROM employees ");

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

                        << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des Employes")

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

                     printer.setOutputFileName("/tmp/employe.pdf");

                     printer.setPageMargins(QMarginsF(15, 15, 15, 15));



                     delete document;
}

void Employee::on_tri_salaire_emp_clicked()
{
    ui->tableView->setModel(etmp.afficher_tri_salaire());
}

void Employee::on_tri_type_emp_clicked()
{
    ui->tableView->setModel(etmp.afficher_tri_type());
}

void Employee::on_tri_nom_emp_clicked()
{
    ui->tableView->setModel(etmp.afficher_tri_nom());
}



void Employee::on_tout_afficher_emp_clicked()
{
    ui->tableView->setModel(etmp.afficher());
}

void Employee::on_rech_emp_clicked()
{
    if(ui->comboBox_rech_emp->currentText() == "nom" || ui->comboBox_rech_emp->currentText() == "type")
        ui->tableView->setModel(etmp.afficher_rech_emp(ui->comboBox_rech_emp->currentText(),ui->line_rech_emp->text()));
    if(ui->comboBox_rech_emp->currentText() == "salaire")
        ui->tableView->setModel(etmp.afficher_rech_emp(ui->line_rech_emp->text().toInt()));
}




void Employee::on_btn_chat_emp_clicked()
{
    s = new ServerWindow(this);
    s->show();
    c = new ChatWindow(this);
    c->show();
}
