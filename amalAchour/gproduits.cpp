#include "gproduits.h"
#include "ui_gproduits.h"
#include "produit.h"
#include "mainwindow.h"
#include <QSqlError>
#include <QMessageBox>
#include <QLineEdit>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>
#include <QDateTime>
#include "command.h"
Command *co;
MainWindow *w;

Gproduits::Gproduits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gproduits)
{
    ui->setupUi(this);
    ui->tabNetoy->setModel(ptmp.afficher());
}

Gproduits::~Gproduits()
{
    delete ui;
}

void Gproduits::on_btn_ajout_netoy_clicked()
{
    bool test = false;
    int n = ui->line_num_netoy->text().toInt();
    int qty = ui->line_qty_netoy->text().toInt();
    QString n_val = ui->line_num_netoy->text();
    QString qty_val = ui->line_qty_netoy->text();
    QString nom = ui->line_nom_netoy->text();
    QString ref = ui->line_ref_netoy->text();

    Produit p(n,qty,nom,ref);

    if((nom.length() < 20) && (ref.length() < 20) && (n_val.length() < 5) && (qty_val.length() < 5)){  //controle de saisie sur l'ajout
        test=p.ajouter();//Inserer l'objet employe instancie dans le tableau employe
    }

    if(test)
    {
        ui->comboBox_modif_netoy->addItem(ui->line_num_netoy->text());
        ui->line_num_netoy->clear();
        ui->line_qty_netoy->clear();
        ui->line_nom_netoy->clear();
        ui->line_ref_netoy->clear();
        ui->tabNetoy->setModel(ptmp.afficher());
        ui->label_info_netoy->setText("Ajout effectue.");
    }else
        ui->label_info_netoy->setText("Ajout non effectue.");
}

void Gproduits::on_btn_sup_netoy_clicked()
{
    int n = ui->line_num_netoy->text().toInt();
    bool test = ptmp.supprimer(n);

    if(ui->comboBox_modif_netoy->findText(ui->line_num_netoy->text()) != -1)
    {
        if(test)
        {
            int supbox = ui->comboBox_modif_netoy->findText(ui->line_num_netoy->text());
            ui->comboBox_modif_netoy->removeItem(supbox);
            ui->line_num_netoy->clear();
            ui->line_qty_netoy->clear();
            ui->line_nom_netoy->clear();
            ui->line_ref_netoy->clear();
            ui->tabNetoy->setModel(ptmp.afficher());
            ui->label_info_netoy->setText("Suppression effectue.");
        }else
            ui->label_info_netoy->setText("Suppression non effectuee.Erreur de requete SQL.");
    }else
    {
        ui->tabNetoy->setModel(ptmp.afficher());
        ui->label_info_netoy->setText("Suppression non effectuee. Erreur ID n'existe pas.");
    }
}

void Gproduits::on_comboBox_modif_netoy_currentIndexChanged(const QString &arg1)
{
    QString val = ui->comboBox_modif_netoy->currentText();
    QSqlQuery q;

    q.prepare("select * from produits_netoyage where num_prodn = :num_prodn");
    q.bindValue(":num_prodn",val);

    if(q.exec())
    {
        while(q.next())
        {
            ui->line_num_netoy->setText(q.value(0).toString());
            ui->line_nom_netoy->setText(q.value(1).toString());
            ui->line_qty_netoy->setText(q.value(3).toString());
            ui->line_ref_netoy->setText(q.value(4).toString());
        }
    }else
    {
        QMessageBox::critical(this,tr("error::"),q.lastError().text());
    }
}

void Gproduits::on_btn_modif_netoy_clicked()
{
    int n = ui->line_num_netoy->text().toInt();
    int qty = ui->line_qty_netoy->text().toInt();
    QString n_val = ui->line_num_netoy->text();
    QString qty_val = ui->line_qty_netoy->text();
    QString nom = ui->line_nom_netoy->text();
    QString ref = ui->line_ref_netoy->text();

    Produit p(n,qty,nom,ref);

        bool test=p.modifier(n);//Inserer l'objet employe instancie dans le tableau employe

    if(test)
    {
        ui->line_num_netoy->clear();
        ui->line_qty_netoy->clear();
        ui->line_nom_netoy->clear();
        ui->line_ref_netoy->clear();
        ui->tabNetoy->setModel(ptmp.afficher());
        ui->label_info_netoy->setText("Modification effectue.");
    }else
        ui->label_info_netoy->setText("Modification non effectue.");
}

void Gproduits::on_pdf_netoy_clicked()
{
    QSqlDatabase db;

                    QTableView tabnetoy;

                    QSqlQueryModel * Modal=new  QSqlQueryModel();

                    QSqlQuery qry;
                    QString d_info = QDateTime::currentDateTime().toString();
                     qry.prepare("SELECT * FROM produits_netoyage");

                     qry.exec();

                     Modal->setQuery(qry);

                     tabnetoy.setModel(Modal);

                     db.close();

                     QString strStream;

                     QTextStream out(&strStream);

                     const int rowCount = tabnetoy.model()->rowCount();

                     const int columnCount =  tabnetoy.model()->columnCount();

                     const QString strTitle ="Document";

                     out <<  "<html>\n"

                             "<img src='C:/Users/nouss/OneDrive/Documents/logo_drycleaner.png' height='120' width='120'/>"
                              "<p style=\"text-align:right\">"+d_info+"</p>"

                         "<head>\n"

                             "<meta Content=\"Text/html; charset=Windows-1251\">\n"

                         <<  QString("<title>%1</title>\n").arg(strTitle)

                         <<  "</head>\n"

                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des Produits")

                        <<"<br>"



                        <<"<table border=1 cellspacing=0 cellpadding=2 width=\"100%\">\n";

                     out << "<thead><tr bgcolor=#f0f0f0>";

                     for (int column = 0; column < columnCount; column++)

                         if (!tabnetoy.isColumnHidden(column))

                             out << QString("<th>%1</th>").arg(tabnetoy.model()->headerData(column, Qt::Horizontal).toString());

                     out << "</tr></thead>\n";



                     for (int row = 0; row < rowCount; row++) {

                         out << "<tr>";

                         for (int column = 0; column < columnCount; column++) {

                             if (!tabnetoy.isColumnHidden(column)) {

                                 QString data = tabnetoy.model()->data(tabnetoy.model()->index(row, column)).toString().simplified();

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

                         document->print(&printer);

                     printer.setOutputFormat(QPrinter::PdfFormat);

                     printer.setPaperSize(QPrinter::A4);

                     printer.setOutputFileName("/tmp/produits.pdf");

                     printer.setPageMargins(QMarginsF(15, 15, 15, 15));

                     delete document;
}

void Gproduits::on_tri_nom_netoy_clicked()
{
    ui->tabNetoy->setModel(ptmp.afficher_tri_nom());
}

void Gproduits::on_tri_quantite_netoy_clicked()
{
    ui->tabNetoy->setModel(ptmp.afficher_tri_quant());
}

void Gproduits::on_tri_reference_netoy_clicked()
{
    ui->tabNetoy->setModel(ptmp.afficher_tri_reference());
}

void Gproduits::on_tout_afficher_netoy_clicked()
{
    ui->tabNetoy->setModel(ptmp.afficher());
}

void Gproduits::on_line_rech_netoy_textChanged(const QString &arg1)
{
    if(ui->comboBox_rech_netoy->currentText() == "Nom" || ui->comboBox_rech_netoy->currentText() == "Reference")
        ui->tabNetoy->setModel(ptmp.afficher_rech_netoy(ui->comboBox_rech_netoy->currentText(),ui->line_rech_netoy->text()));
    if(ui->comboBox_rech_netoy->currentText() == "Numero ou Quantite")
        ui->tabNetoy->setModel(ptmp.afficher_rech_netoy(ui->line_rech_netoy->text().toInt()));
}

void Gproduits::on_quitter_netoy_clicked()
{
    hide();
    w = new MainWindow(this);
    w->show();
}

void Gproduits::on_btn_cmd_netoy_clicked()
{
    co = new Command(this);
    co->show();
}