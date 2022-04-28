#include "clients.h"
#include "ui_clients.h"
#include "gclients.h"
#include "statistiques.h"
#include "map.h"
#include "QMessageBox"
#include <QSqlError>
//Tryin ScrollArea
#include <QPushButton>
#include <QVBoxLayout>
#include  <QDesktopServices>
#include <QPdfWriter>
#include <QPrinter>
#include "QPrintDialog"
#include "employee.h"
#include "gproduits.h"
#include "garticle.h"
#include "gmat.h"
#include "arduino.h"
#include "suppliers.h"

Employee *e4;
Gproduits *g4;
garticle *a4;
gmat *gm4;
Suppliers *s5;

// Holds current value of calculation
double calcVal=0.0;
// Holds current value of memory
double mem=0.0;
// Will define if this was the last math button clicked
bool divTrigger=false;
bool multTrigger=false;
bool addTrigger=false;
bool subTrigger=false;

// Constructor
Clients::Clients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clients)
{
    ui->setupUi(this);
    //les controles de saisie sur les lineEdits
    ui->lineEdit_CIN->setValidator(new QIntValidator(0,9999999,this)); // controle de saisie lineedit va accepter juste les nombre de 0 a 9999999
    ui->lineEdit_FirstName->setValidator(new QRegExpValidator( QRegExp("[A-Za-z ]*") , this ));// controle de saisie linEedit va accepter juste les lettres miniscules + majuscules
    ui->lineEdit_LastName->setValidator(new QRegExpValidator( QRegExp("[A-Za-z ]*") , this ));// controle de saisie lineEdit va accepter juste les lettres miniscules + majuscules
    //Calculator Initialiation
    // Put 0.0 in Display
    ui->Display->setText(QString::number(calcVal));
    // Will hold references to all the number buttons
    QPushButton *numButtons[10];
    // Cycle through locating the buttons
    for(int i=0; i<10; i++)
    {
        QString butName = "Button"+ QString::number(i);
        // Get the buttons by name and add to array
        numButtons[i]=Clients::findChild<QPushButton *>(butName);
         // When the button is released call num_pressed()
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    // Connect signals and slots for math buttons
        connect(ui->Add, SIGNAL(released()), this,
                SLOT(MathButtonPressed()));
        connect(ui->Subtract, SIGNAL(released()), this,
                SLOT(MathButtonPressed()));
        connect(ui->Multiply, SIGNAL(released()), this,
                SLOT(MathButtonPressed()));
        connect(ui->Divide, SIGNAL(released()), this,
                SLOT(MathButtonPressed()));

        // Connect equals button
        connect(ui->Equals, SIGNAL(released()), this,
                SLOT(EqualButtonPressed()));

        // Connect change sign
        connect(ui->ChangeSign, SIGNAL(released()), this,
                SLOT(ChangeNumberSign()));
        A = new Arduino();
        A->setType("clients");
        //Arduino: connect label to updatelabel
        int ret=A->connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A->get_arduino_portname();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A->get_arduino_portname();
           break;
        case(-1):qDebug() << "arduino is not available";
        }
        if(A)
         QObject::connect(A->getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
         //le slot update_label suite à la reception du signal readyRead (reception des données).

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
    QString adresse=ui->lineEdit_Adresse->text();
    Gclients G(cin,nom,prenom,sexe,"pas encore",date,adresse);//instancier un objet de la classe GClient
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
        ui->lineEdit_Adresse->clear();
        ui->tableView->setModel(Etmp.afficherClient());
        ui->label_info_client->setText("Ajout effectue.");
    }
    else //Si la requete non effectué ==> QMessageBox::critical
    ui->label_info_client->setText("Ajout non effectue.");


}

void Clients::on_pushButton_ShowAll_clicked()
{
        ui->label_info_client->clear();
        //Calcul Reduction
        QString resultat = Etmp.CalculReduction();
        ui->label_info_client->setText(resultat);
        //UPDATE AFFICHAGE
         ui->tableView->setModel(Etmp.afficherClient());

}

void Clients::on_pushButton_delete_clicked()
{
    int cin=ui->lineEdit_CIN->text().toInt();
    bool test=Etmp.supprimerClient(cin);
    if(test)
    {
       ui->tableView->setModel(Etmp.afficherClient());
        ui->label_info_client->setText("Suppression effectue.");
    }
    else
     ui->label_info_client->setText("Suppression non effectue.");
}

void Clients::on_pushButton_modify_clicked()
{
    //recuperation des info du form
        int cin=ui->lineEdit_CIN->text().toInt();
        QString nom=ui->lineEdit_FirstName->text();
        QString prenom=ui->lineEdit_LastName->text();
        QString sexe=ui->comboBox_Gender->currentText();
        QString date=ui->dateEdit_BirthDate->date().toString();
        QString adresse=ui->lineEdit_Adresse->text();
        bool test=Etmp.modifierClient(cin,nom,prenom,sexe,date,adresse); //inserer l'objet GClient instancie dans la table Clients
                                    //recuperer la valeur de retour de querry.exec()
        if(test) //si la requete executée ==>QMessageBox::information
        {
            ui->tableView->setModel(Etmp.afficherClient());
            ui->label_info_client->setText("Modification effectue.");
        }
        else //Si la requete non effectué ==> QMessageBox::critical
        ui->label_info_client->setText("Modification non effectue.");
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



void Clients::on_tableView_activated(const QModelIndex &index)
{
    ui->label_info_client->clear();
QString c=ui->tableView->model()->data(index).toString();
QSqlQuery qry;
qry.prepare("select * from clients where cin=:cin");
qry.bindValue(":cin",c);

if (qry.exec())
{
        while(qry.next())
        {
            ui->lineEdit_CIN->setText((qry.value(0).toString()));
            ui->lineEdit_FirstName->setText((qry.value(1).toString()));
            ui->lineEdit_LastName->setText((qry.value(2).toString()));
            ui->comboBox_Gender->setCurrentText((qry.value(3).toString()));
            //ui->dateEdit_BirthDate->setDate((qry.value(4).toString()).todate());
            ui->lineEdit_Adresse->setText((qry.value(7).toString()));
        }
}
else
{
    ui->label_info_client->setText("error:");
}
}
void Clients::on_pushButton_Stats_clicked()
{
    dial = new statistiques(this);
    dial->start_stat();
    dial->show();
}

void Clients::on_pushButton_StatsNB_clicked()
{
    dial = new statistiques(this);
    dial->start_statNB();
    dial->show();
}

void Clients::on_pushButton_Quit_clicked()
{
    close();
}

void Clients::on_pushButton_Quit_2_clicked()
{
    close();
}

void Clients::on_pushButton_print_clicked()
{
    QSqlDatabase db;

                    QTableView tabemploye;

                    Modal =new  QSqlQueryModel();



                    QSqlQuery qry;
                    QString d_info = QDateTime::currentDateTime().toString();
                     qry.prepare("SELECT * FROM clients ");

                     qry.exec();

                     Modal->setQuery(qry);

                     tabemploye.setModel(Modal);



                     db.close();



                     QString strStream;

                     QTextStream out(&strStream);



                     const int rowCount = tabemploye.model()->rowCount();

                     const int columnCount =  tabemploye.model()->columnCount();



                     const QString strTitle ="Document";





                     out <<  "<html>\n"

                             "<img src='C:/Users/Public/Documents/Mikroelektronika/mikroC PRO for PIC/Packages/libstock_api/Images/1531382271_conv_thumb.png' height='120' width='120'/>"
                              "<p style=\"text-align:right\">"+d_info+"</p>"

                         "<head>\n"

                             "<meta Content=\"Text/html; charset=Windows-1251\">\n"

                         <<  QString("<title>%1</title>\n").arg(strTitle)

                         <<  "</head>\n"

                         "<body bgcolor=#ffffff link=#5000A0>\n"

                        << QString("<h3 style=\" font-size: 50px; font-family: Arial, Helvetica, sans-serif; color: #e80e32; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste des Clients")

                        <<"<br>"



                        <<"<table border=1 cellspacing=0 cellpadding=2 width=\"100%\">\n";

                     out << "<thead><tr bgcolor=#f0f0f0>";

                     for (int column = 0; column < columnCount; column++)

                         if (!tabemploye.isColumnHidden(column))

                             out << QString("<th>%1</th>").arg(tabemploye.model()->headerData(column, Qt::Horizontal).toString());

                     out << "</tr></thead>\n";



                     for (int row = 0; row < rowCount; row++) {

                         out << "<tr>";

                         for (int column = 0; column < columnCount; column++) {

                             if (!tabemploye.isColumnHidden(column)) {

                                 QString data = tabemploye.model()->data(tabemploye.model()->index(row, column)).toString().simplified();

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

                     printer.setOutputFileName("/tmp/clients.pdf");

                     printer.setPageMargins(QMarginsF(15, 15, 15, 15));



                     delete document;
}
void Clients::NumPressed(){

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get number on button
    QString butVal = button->text();

    // Get the value in the display
    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        //write on display the value of the button num that has been clicked
        // calcVal = butVal.toDouble();
        ui->Display->setText(butVal);

    } else {
        // Put the new number to the right of whats there (case already fama 3dad f display)
        QString newVal = displayVal + butVal;

        // Double version of number
        double dblNewVal = newVal.toDouble();

        // calcVal = newVal.toDouble();

        // Set value in display and allow up to 16
        // digits before using exponents
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));

    }
}
void Clients::MathButtonPressed(){

    // Cancel out previous math button clicks
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    // Store current value in Display
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get math symbol on the button
    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }

    // Clear display
    ui->Display->setText("");

}
void Clients::EqualButtonPressed(){

    // Holds new calculation
    double solution = 0.0;

    // Get value in display
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    // Make sure a math button was pressed
    if(addTrigger || subTrigger || multTrigger || divTrigger ){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }

    // Put solution in display
    ui->Display->setText(QString::number(solution));
}
void Clients::ChangeNumberSign(){

    // Get the value in the display
    QString displayVal = ui->Display->text();

    // Regular expression checks if it is a number
    // plus sign
    QRegExp reg("[-+]?[0-9.]*");

    // If it is a number change the sign
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        // Put solution in display
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}

void Clients::on_Clear_clicked()
{
    // Clear display
    ui->Display->setText("");
}


void Clients::on_memAdd_released()
{
    // Get value in display
    QString displayVal = ui->Display->text();
    mem = displayVal.toDouble();
}

void Clients::on_memClear_clicked()
{
    //Clear Memory
    mem=0.0;
}

void Clients::on_memGet_released()
{
    // Put Memory Value in display
    if(mem==0.0)
    {
        ui->Display->setText("");
    }
    else
        ui->Display->setText(QString::number(mem));
}

void Clients::on_pushButton_released()
{
    // Holds new calculation
    double ApresReduction = 0.0;

    // Get value in display
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    // Calcul reduction
        ApresReduction = dblDisplayVal - (dblDisplayVal * 20)/100;

    // Put solution in display
    ui->Display->setText(QString::number(ApresReduction));
}

void Clients::on_lineEdit_SearchBar_textChanged(const QString &arg1)
{
    QString res=ui->lineEdit_SearchBar->text();
    ui->tableView->setModel(Etmp.recherche(res));
}

void Clients::on_MAP_clicked()
{
    m = new map(this);
    m->show();
}
void Clients::update_label()// arduino
{
    data=A->read_from_arduino();
    qDebug() << data;
    QString temp = QString::fromStdString(data.toStdString());
    qDebug() << temp;

     //capteur presence + distance

     /*ui->distance->setText(temp); // si les données reçues de arduino via la liaison série sont égales à 1
     if (temp.toFloat()<10 && temp.toFloat()!=0 )
     {
         ui->etat->setText("DANGER");
         A.write_to_arduino("1");
     }
     else
     {
          ui->etat->setText("En Sécurité");
     }*/

     //clavier
    ui->NumArticle->setText(temp);
        int te=temp.toInt();
        QSqlQuery query;
        //prepare()prend la requete en param pour la preparer a l'execution
        query.prepare("SELECT ETAT_PROD FROM ARTICLES where NUM_PROD=:t");
        //creation des variable liés
        query.bindValue(":t",te);
        query.exec();
        if(!query.exec()) {
                ui->label_info_securite->setText("Erreur de base de donnees.Erreur lors de l'execution de la requete.");
                return;
            }
        /* Vérifie s'il y a des résultats */
            if (!query.first()) {
                ui->label_info_securite->setText("Erreur! Num Article inexistant.");
                return;
            }
        //while (query.next()) {
        QString state=query.value(0).toString();
        ui->EtatAticle->setText(state);
        if(state=="Prete"){
        A->write_to_arduino("1");
        }
        else if(state=="En Cours")
        {
            A->write_to_arduino("0");
        }
        //}




}

void Clients::on_tabWidget_currentChanged(int index)
{
    if(index == 0){
        A->close_arduino();
        hide();
        e4 = new Employee(this);
        e4->show();
    }
    if(index == 1){
        A->close_arduino();
        hide();
        g4 = new Gproduits(this);
        g4->show();
    }
    if(index == 2){
        A->close_arduino();
        hide();
        a4 = new garticle(this);
        a4->show();
    }
    if(index == 3){
        A->close_arduino();
        hide();
        gm4 = new gmat(this);
        gm4->show();
    }
    if(index == 5){
        A->close_arduino();
        hide();
        s5 = new Suppliers(this);
        s5->show();
    }
}
