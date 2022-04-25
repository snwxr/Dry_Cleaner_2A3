#include "command.h"
#include "commande.h"
#include "ui_command.h"
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

Command::Command(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Command)
{
    ui->setupUi(this);
    ui->tabCommand->setModel(ctmp.afficher());
}

Command::~Command()
{
    delete ui;
}

void Command::on_btn_ajout_cmd_clicked()
{
    bool test=false;
    int id = ui->line_id_cmd->text().toInt();
    QString id_val = ui->line_id_cmd->text();
    QString nom = ui->line_nom_cmd->text(); //variable de controle de saisie de l'ID
    int qty = ui->line_quant_cmd->text().toInt();
    QString qty_val = ui->line_quant_cmd->text();
    QString etat = ui->comboBox_etat_cmd->currentText();

    Commande c(id,qty,etat,nom);//instancier un objet de la classe etudiant

    if((nom.length() < 20) && (qty_val.length() < 20) && (id_val.length() < 5) ){  //controle de saisie sur l'ajout
        test=c.ajouter();//Inserer l'objet employe instancie dans le tableau employe
    }


    if(test)
    {
        ui->comboBox_modif_cmd->addItem(ui->line_id_cmd->text());
        ui->line_id_cmd->clear();
        ui->line_nom_cmd->clear();
        ui->line_quant_cmd->clear();
        ui->comboBox_etat_cmd->setCurrentIndex(0);
         ui->tabCommand->setModel(ctmp.afficher());
        ui->label_info_cmd->setText("Ajout effectue.");
    }
    else
        ui->label_info_cmd->setText("Ajout non effectue.");
}

void Command::on_btn_sup_cmd_clicked()
{
    int id = ui->line_id_cmd->text().toInt();
    bool test = ctmp.supprimer(id);

    if(ui->comboBox_modif_cmd->findText(ui->line_id_cmd->text()) != -1)
     {
         if(test)
         {
             int supbox=ui->comboBox_modif_cmd->findText(ui->line_id_cmd->text());
             ui->comboBox_modif_cmd->removeItem(supbox);
             ui->line_id_cmd->clear();
             ui->line_nom_cmd->clear();
             ui->comboBox_etat_cmd->setCurrentIndex(0);
             ui->line_quant_cmd->clear();
              ui->tabCommand->setModel(ctmp.afficher());
             ui->label_info_cmd->setText("Suppression effectuee.");
         }
         else
             ui->label_info_cmd->setText("Suppression non effectuee.Erreur de requete SQL.");
     }
     else
     {
         ui->tabCommand->setModel(ctmp.afficher());
         ui->label_info_cmd->setText("Suppression non effectuee. Erreur ID n'existe pas.");
     }


}

void Command::on_btn_historique_clicked()
{
    QSqlQuery q;
    q.prepare("select * from commandes where etat_c = 'delivree'");
    q.exec();
    ui->tabhist->setColumnCount(5);
    QStringList labels;
    labels<< " "<<"quantite"<<"etat"<<"nom"<<"date";
    ui->tabhist->setHorizontalHeaderLabels(labels);

    int row_count=0;
    while(q.next())
    {
        ui->tabhist->insertRow(row_count);
        QTableWidgetItem *select = new QTableWidgetItem;
        QTableWidgetItem *quantite = new QTableWidgetItem;
        QTableWidgetItem *etat = new QTableWidgetItem;
        QTableWidgetItem *nom = new QTableWidgetItem;
        QTableWidgetItem *date = new QTableWidgetItem;

        select->setText(q.value(0).toString());
        quantite->setText(q.value(1).toString());
        etat->setText(q.value(2).toString());
        nom->setText(q.value(3).toString());
        date->setText(q.value(4).toString());

        ui->tabhist->setItem(row_count,0,select);
        ui->tabhist->setItem(row_count,1,quantite);
        ui->tabhist->setItem(row_count,2,etat);
        ui->tabhist->setItem(row_count,3,nom);
        ui->tabhist->setItem(row_count,4,date);

        ui->tabhist->setColumnWidth(4,110);
        ui->tabhist->setRowHeight(row_count,110);

        row_count++;
    }
}

void Command::on_comboBox_modif_cmd_currentIndexChanged(const QString &arg1)
{
    QString val = ui->comboBox_modif_cmd->currentText();

    QSqlQuery query;

    query.prepare("select * from commandes where id_c=:id");
    query.bindValue(":id",val);

    if(query.exec())
    {
        while(query.next())
        {
            ui->line_id_cmd->setText(query.value(0).toString());
            ui->line_quant_cmd->setText(query.value(1).toString());
            ui->comboBox_etat_cmd->setCurrentText(query.value(2).toString());
            ui->line_nom_cmd->setText(query.value(3).toString());
        }
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }
}

void Command::on_btn_modif_cmd_clicked()
{
    int id = ui->line_id_cmd->text().toInt();
    QString nom = ui->line_nom_cmd->text(); //variable de controle de saisie de l'ID
    int qty = ui->line_quant_cmd->text().toInt();
    QString etat = ui->comboBox_etat_cmd->currentText();

    Commande c(id,qty,etat,nom);
    bool test=c.modifier(id);

    if(test)
    {
        ui->line_id_cmd->clear();
        ui->line_quant_cmd->clear();
        ui->line_nom_cmd->clear();
        ui->comboBox_etat_cmd->setCurrentIndex(0);
        ui->tabCommand->setModel(ctmp.afficher());
        ui->label_info_cmd->setText("Modification effectue.");
    }
    else
    ui->label_info_cmd->setText("Modification non effectue.");
}

void Command::on_pdf_com_clicked()
{
    QSqlDatabase db;

                    QTableView tabnetoy;

                    QSqlQueryModel * Modal=new  QSqlQueryModel();

                    QSqlQuery qry;
                    QString d_info = QDateTime::currentDateTime().toString();
                     qry.prepare("SELECT * FROM commandes");

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

void Command::on_tri_id_com_clicked()
{
    ui->tabCommand->setModel(ctmp.afficher_tri_id());
}

void Command::on_tri_nom_com_clicked()
{
    ui->tabCommand->setModel(ctmp.afficher_tri_nom());
}

void Command::on_tri_quantite_com_clicked()
{
    ui->tabCommand->setModel(ctmp.afficher_tri_quantite());
}

void Command::on_tout_afficher_com_clicked()
{
    ui->tabCommand->setModel(ctmp.afficher());
}

void Command::on_line_rech_com_textChanged(const QString &arg1)
{
    if(ui->comboBox_rech_cmd->currentText() == "nom")
        ui->tabCommand->setModel(ctmp.afficher_rech_cmd(ui->comboBox_rech_cmd->currentText(),ui->line_rech_com->text()));
    if(ui->comboBox_rech_cmd->currentText() == "id ou quantite")
        ui->tabCommand->setModel(ctmp.afficher_rech_cmd(ui->line_rech_com->text().toInt()));
}

void Command::on_quitter_cmd_clicked()
{
    hide();
}
