#include "garticle.h"
#include "ui_garticle.h"
#include "article.h"
#include <QMessageBox>
#include <QSqlError>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextStream>
#include <QPixmap>

garticle::garticle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::garticle)
{
    ui->setupUi(this);
    ui->tab_art->setModel(atmp.afficher());
    popUp = new PopUp();
}

garticle::~garticle()
{
    delete ui;
}

void garticle::on_ajout_article_clicked()
{
    int num = ui->num_prod->text().toInt();
    int cin = ui->cin_client->text().toInt();
    QString date = ui->date_env->date().toString(Qt::ISODate);
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

void garticle::on_pdfarticle_clicked()
{
    QSqlDatabase db;

                        QTableView tablivraison;

                        QSqlQueryModel * Modal=new  QSqlQueryModel();



                        QSqlQuery qry;

                         qry.prepare("SELECT * FROM articles ");

                         qry.exec();

                         Modal->setQuery(qry);

                         tablivraison.setModel(Modal);



                         db.close();



                         QString strStream;

                         QTextStream out(&strStream);



                         const int rowCount = tablivraison.model()->rowCount();

                         const int columnCount =  tablivraison.model()->columnCount();



                         const QString strTitle ="Document";

                           QString d_info = QDateTime::currentDateTime().toString();



                         out <<  "<html>\n"

                                 "<img src='C:/Users/USER/Downloads/1111.png' height='120' width='120'/>"
                                 "<p style=\"text-align:right\">"+d_info+"</p>"

                             "<head>\n"

                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"

                             <<  QString("<title>%1</title>\n").arg(strTitle)

                             <<  "</head>\n"

                             "<body bgcolor=#ffffff link=#5000A0>\n"

                            << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des Articles")

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

                         printer.setOutputFileName("/tmp/articles.pdf");

                         printer.setPageMargins(QMarginsF(15, 15, 15, 15));



                         delete document;
}

void garticle::on_tri_num_art_clicked()
{
    ui->tab_art->setModel(atmp.afficher_tri_num_art());
}

void garticle::on_tri_type_art_clicked()
{
    ui->tab_art->setModel(atmp.afficher_tri_type_art());
}

void garticle::on_tri_etat_art_clicked()
{
    ui->tab_art->setModel(atmp.afficher_tri_etat_art());
}

void garticle::on_tot_afficher_art_clicked()
{
    ui->tab_art->setModel(atmp.afficher());
}



void garticle::on_line_rech_art_textChanged(const QString &arg1)
{

    QString photo;

    if(ui->combo_rech_art->currentText() == "type" || ui->combo_rech_art->currentText() == "etat"){
    ui->tab_art->setModel(atmp.afficher_rech_art(ui->combo_rech_art->currentText(),ui->line_rech_art->text()));
    }
    if(ui->combo_rech_art->currentText() == "num"){
        int val = ui->line_rech_art->text().toInt();
        QString num = QString::number(val);
        ui->tab_art->setModel(atmp.afficher_rech_art(ui->combo_rech_art->currentText(),ui->line_rech_art->text().toInt()));
        QSqlQuery q;
        q.prepare("select * from articles where num_prod like '%"+num+"%'");
        q.exec();
        while(q.next()){
        photo = q.value(5).toString();
        }
        QPixmap p(photo);
        ui->labelpic_art->setPixmap(p.scaled(100,100,Qt::KeepAspectRatio));
    }

}

void garticle::on_notif_clicked()
{
    int num  = ui->line_rech_art->text().toInt();
    QString res = QString::number(num);
    QString date_env;
    QString date_sys;
    QString etat;
    QStringList listd,listS;
    QSqlQuery qrech;
    QSqlQuery qsysd;

    qrech.prepare("select * from articles where num_prod=:num");
    qrech.bindValue(":num",res);
    qsysd.prepare("select to_char(sysdate,'dd/mm/yyyy') from dual");
    qsysd.exec();
    qrech.exec();

    while(qrech.next()){
        date_env=qrech.value(4).toString();
        etat = qrech.value(2).toString();
    }

    while(qsysd.next()){
        date_sys = qsysd.value(0).toString();
    }

    listd = date_env.split("-");
    listS = date_sys.split("/");
    if(etat == "non traite")
    {
        if(listS[2].toInt() > listd[0].toInt())
        {
            popUp->setPopupText("non traite, vous etes renvoyé");
            popUp->show();
        }else{

            if(listS[1].toInt() > listd[1].toInt())
            {
                popUp->setPopupText("non traite, vous etes en retard de quelques mois");
                popUp->show();


            }else{
                if(listS[0].toInt() > listd[2].toInt())
                {
                    popUp->setPopupText("non traite, vous etes en retard de quelques jours");
                    popUp->show();
                }else{
                    popUp->setPopupText("non traite, il vous reste du temps");
                    popUp->show();
                }
            }
        }
    }else{
        popUp->setPopupText("Bravo!!! Traite.");
        popUp->show();
    }
}
