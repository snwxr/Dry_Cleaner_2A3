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
#include <QFileDialog>
#include <QDir>
#include "arduino.h"
#include "gproduits.h"
#include "employee.h"
#include "gmat.h"
#include "clients.h"
#include "suppliers.h"

Gproduits *g1;
Employee *e2;
gmat *gm2;
Clients *cl2;
Suppliers *s2;

garticle::garticle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::garticle)
{
    ui->setupUi(this);
    ui->tab_art->setModel(atmp.afficher());
    popUp = new PopUp();
    A1 = new Arduino();
    A1->setType("");
        int ret = A1->connect_arduino();//lancer la connection a arduino
        switch (ret) {
        case 0:qDebug()<<"arduino is available and connected to: "<<A1->get_arduino_portname();
            break;
        case 1:qDebug()<<"arduino is available but not connected to: "<<A1->get_arduino_portname();
            break;
        case -1:qDebug()<<"arduino is not available";
        }
        if(A1)
        QObject::connect(A1->getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));//permet de lancer le slot
        //le slot update_label suite a la reception du signal readyRead (reception des donnees).
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
        ui->label_info_art->setText("Ajout effectue.");

    }else
    ui->label_info_art->setText("Ajout non effectue.");
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
        ui->label_info_art->setText("Suppression effectue.");
    }else
    ui->label_info_art->setText("Suppression non effectue.");
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
        ui->label_info_art->setText("error.");
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
        ui->label_info_art->setText("Modification effectue.");
    }
    else
    ui->label_info_art->setText("Modification non effectue.");
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



                                 document = new QTextDocument();

                                 document->setHtml(strStream);



                                 QPrinter printer;

                                 dialog = new QPrintDialog(&printer, NULL);





                                     document->print(&printer);





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
    if(ui->combo_rech_art->currentText() == "num" || ui->combo_rech_art->currentText() == "client"){
        int val = ui->line_rech_art->text().toInt();
        QString num = QString::number(val);
        ui->tab_art->setModel(atmp.afficher_rech_art(ui->combo_rech_art->currentText(),ui->line_rech_art->text().toInt()));
        QSqlQuery q;
        if(ui->combo_rech_art->currentText() == "num"){
        q.prepare("select * from articles where num_prod like '%"+num+"%'");
        q.exec();
        }
        if(ui->combo_rech_art->currentText() == "client"){
        q.prepare("select * from articles where cin_client like '%"+num+"%'");
        q.exec();
        }
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

void garticle::update_label(){

}

void garticle::on_RFID_clicked()
{
     ui->line_rech_art->clear();
     ui->cin_client->clear();
    QString res;
       QString code = QString(A1->read_from_arduino());
       QStringList lcode =code.split(QRegExp("\\W+"), QString::SkipEmptyParts);
       for(int i=0;i<lcode.length();i++){
        res+=lcode[i];
       }
    ui->line_rech_art->setText(res);
    ui->cin_client->setText(res);
}

void garticle::on_open_clicked()
{
    QString photo,res;
    if(ui->combo_rech_art->currentText() == "num" ){
        int val = ui->line_rech_art->text().toInt();
        QString num = QString::number(val);
        ui->tab_art->setModel(atmp.afficher_rech_art(ui->combo_rech_art->currentText(),ui->line_rech_art->text().toInt()));
        QSqlQuery q;
        if(ui->combo_rech_art->currentText() == "num"){
        q.prepare("select * from articles where num_prod like '%"+num+"%'");
        q.exec();
        }
        while(q.next()){
        photo = q.value(5).toString();
        res =  q.value(0).toString();
        }
        if(res != ""){
            A1->write_to_arduino("1");
        }
        QPixmap p(photo);
        ui->labelpic_art->setPixmap(p.scaled(100,100,Qt::KeepAspectRatio));
    }
}

void garticle::on_get_photo_clicked()
{
    QString FileName = QFileDialog::getOpenFileName(this,"open a file",QDir::homePath());
    FileName.replace(R"(\)",R"(/)");
    ui->photo_prod->setText(FileName);
}

void garticle::on_tab_article_currentChanged(int index)
{
    if(index == 1){
        //A1->close_arduino();
        hide();
        g1 = new Gproduits(this);
        g1->show();
    }
    if(index == 0){
        //A1->close_arduino();
        hide();
        e2 = new Employee(this);
        e2->show();
    }
    if(index == 3){
        //A1->close_arduino();
        hide();
        gm2 = new gmat(this);
        gm2->show();
    }
    if(index == 4){
        //A1->close_arduino();
        hide();
        cl2 = new Clients(this);
        cl2->show();
    }
    if(index == 5){
        hide();
        s2 = new Suppliers(this);
        s2->show();
    }
}
