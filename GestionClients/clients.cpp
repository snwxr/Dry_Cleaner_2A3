#include "clients.h"
#include "ui_clients.h"
#include "gclients.h"
#include "statistiques.h"
#include "QMessageBox"
#include <QSqlError>
//Tryin ScrollArea
#include <QPushButton>
#include <QVBoxLayout>
#include  <QDesktopServices>
#include <QPdfWriter>
#include <QPrinter>
#include "QPrintDialog"

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
    Gclients G(cin,nom,prenom,sexe,"pas encore",date);//instancier un objet de la classe GClient
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
        ui->tableView->setModel(Etmp.afficherClient());
        QMessageBox::information(nullptr,QObject::tr("OK"),
               QObject::tr("Ajout effectué\n"
                           "Click Canel To exist."), QMessageBox::Cancel);
    }
    else //Si la requete non effectué ==> QMessageBox::critical
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                QObject::tr("Ajout non effectuté.\n"
                                            "Click Cancel To Exist."), QMessageBox::Cancel);


}

void Clients::on_pushButton_ShowAll_clicked()
{
        //Calcul Reduction
        Etmp.CalculReduction();
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
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("Suppression effectuée\n"
                            "Click Canel To exist."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                QObject::tr("Suppression non effectuté.\n"
                                            "Click Cancel To Exist."), QMessageBox::Cancel);
}

void Clients::on_pushButton_modify_clicked()
{
    //recuperation des info du form
        int cin=ui->lineEdit_CIN->text().toInt();
        QString nom=ui->lineEdit_FirstName->text();
        QString prenom=ui->lineEdit_LastName->text();
        QString sexe=ui->comboBox_Gender->currentText();
        QString date=ui->dateEdit_BirthDate->date().toString();
        bool test=Etmp.modifierClient(cin,nom,prenom,sexe,date); //inserer l'objet GClient instancie dans la table Clients
                                    //recuperer la valeur de retour de querry.exec()
        if(test) //si la requete executée ==>QMessageBox::information
        {
            ui->tableView->setModel(Etmp.afficherClient());
            QMessageBox::information(nullptr,QObject::tr("OK"),
                   QObject::tr("Modification Effectué\n"
                               "Click Canel To exist."), QMessageBox::Cancel);
        }
        else //Si la requete non effectué ==> QMessageBox::critical
            QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                                    QObject::tr("Modification Non Effectuté.\n"
                                                "Click Cancel To Exist."), QMessageBox::Cancel);
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
           // ui->dateEdit_BirthDate->setDate((qry.value(4).toString()).todate());
        }
}
else
{
    QMessageBox::critical(this,tr("error::"),qry.lastError().text());
}
}
void Clients::on_pushButton_Stats_clicked()
{
    dial = new statistiques();
    dial->start_stat();
    dial->exec();
}

void Clients::on_pushButton_StatsNB_clicked()
{
    dial = new statistiques();
    dial->start_statNB();
    dial->exec();
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
    QPdfWriter pdf("C:/Users/emnaa/Desktop/Atelier QT/Clients.pdf");
                      QPainter painter(&pdf);
                     int i = 4000;
                          painter.setPen(Qt::darkCyan);
                          painter.setFont(QFont("Arial", 30));
                          painter.drawText(3400,1500,"Liste Des Clients");
                          painter.setPen(Qt::black);
                          painter.setFont(QFont("Arial", 50));
                         // painter.drawText(1100,2000,afficheDC);
                          painter.drawRect(1500,200,7300,2600);
                          painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/emnaa/Desktop/Atelier QT/logo.jpg"));
                          painter.drawRect(0,3000,9600,500);
                          painter.setFont(QFont("Arial", 9));
                          painter.drawText(300,3300,"CIN");
                          painter.drawText(1300,3300,"NOM");
                          painter.drawText(2300,3300,"PRENOM");
                          painter.drawText(3400,3300,"SEXE");
                          painter.drawText(4300,3300,"DATE NAISSANCE");
                          painter.drawText(6000,3300,"DATE AJOUT");
                          painter.drawText(7800,3300,"ACCES REDUCTION");

                           QSqlQuery Qd;
                           Qd.prepare("SELECT TO_CHAR(SYSDATE, 'MM-DD-YYYY HH24:MI:SS') FROM dual");
                           Qd.exec();
                           QString date;
                           while(Qd.next())
                           date = Qd.value(0).toString();
                           painter.drawText(300,50,date);


                          //painter.setBackground(Qt::darkCyan);
                          QSqlQuery query;
                          query.prepare("select * from clients");
                          query.exec();
                          while (query.next())
                          {
                              painter.drawText(300,i,query.value(0).toString());
                              painter.drawText(1300,i,query.value(1).toString());
                              painter.drawText(2300,i,query.value(2).toString());
                              painter.drawText(3400,i,query.value(3).toString());
                              painter.drawText(4300,i,query.value(4).toString());
                              painter.drawText(6000,i,query.value(5).toString());
                              painter.drawText(7800,i,query.value(6).toString());


                             i = i +500;
                          }
                          int reponse = QMessageBox::question(this, "CREATION PDF", "PDF ENREGISTRE. OUVRIR PDF?", QMessageBox::Yes |  QMessageBox::No);
                              if (reponse == QMessageBox::Yes)
                              {
                                  QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/emnaa/Desktop/Atelier QT/Clients.pdf"));

                                  painter.end();
                              }
                              if (reponse == QMessageBox::No)
                              {
                                   painter.end();
                              }
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
