#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "serverwindow.h"
#include <QTranslator>
#include <QInputDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signin_clicked()
{
    QString username_line = ui->line_username_signin->text();
    QString password_line = ui->line_password_signin->text();
    QString username,password;
    QSqlQuery q;

    q.prepare("select * from authentification where username=:username");
    q.bindValue(":username",username_line);
    q.exec();
    while(q.next())
    {
        username = q.value(0).toString();
        password =q.value(1).toString();
    }
    if(username == username_line && password != password_line)
        ui->statusbar->showMessage("password is incorrect");
    if(username != username_line)
        ui->statusbar->showMessage("username is incorrect");
    if(username == username_line && password == password_line && username_line != "" && password_line != "")
    {
        hide();
        QTranslator t;
        QApplication *A=qApp;
        QStringList languages;
        languages << "French" << "English";
        QString lang =QInputDialog::getItem(NULL,"Select a language","Language",languages);
        if(lang == "English")
            t.load(":/english.qm");
        if(lang != "French")
            A->installTranslator(&t);
        e = new Employee(this);
        e->show();
    }

}

void MainWindow::on_signup_clicked()
{
    QSqlQuery q;
    QString username = ui->line_username_signup->text();
    QString password = ui->line_password_signup->text();
    if(ui->line_admin_password->text() == "123456")
    {
        q.prepare("insert into authentification(username,password) values(:username,:password)");
        q.bindValue(":username",username);
        q.bindValue(":password",password);
        if(q.exec()){
        ui->statusbar->showMessage("user added succesfully");
        ui->line_admin_password->clear();
        ui->line_username_signup->clear();
        ui->line_password_signup->clear();
        }else{
           ui->statusbar->showMessage("username already exists");
        }
    }else
    {
        ui->statusbar->showMessage("admin password is incorrect");
    }
}

QSqlQueryModel * MainWindow::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from authentification");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("username"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("password"));

    return model;
}
void MainWindow::on_remove_user_clicked()
{
    QSqlQuery q;
    QString username= ui->line_username_signup->text();

    q.prepare("Delete from authentification where username=:username");
    q.bindValue(":username",username);
    if(ui->line_admin_password->text() == "123456")
    {
        if(q.exec())
        {
        ui->statusbar->showMessage("user removed successfully");
        ui->line_admin_password->clear();
        ui->line_username_signup->clear();
        ui->line_password_signup->clear();
        }else
        {
        ui->statusbar->showMessage("user could not be removed. Not found in the database.");
        }
    }else
        ui->statusbar->showMessage("admin password is incorrect.");
}

void MainWindow::on_show_users_clicked()
{
    if(ui->line_admin_password->text() == "123456")
    {
        ui->users_table->setModel(afficher());
    }else
        ui->statusbar->showMessage("admin password is incorrect");
}

void MainWindow::on_modifier_user_clicked()
{
    QString username = ui->line_username_signup->text();
    QString password = ui->line_password_signup->text();
    QSqlQuery q;
    if(ui->line_admin_password->text() == "123456")
    {
        q.prepare("update authentification set password=:password where username=:username");
        q.bindValue(":password",password);
        q.bindValue(":username",username);
        if(q.exec())
        {
        ui->statusbar->showMessage("password modified successfully");
        ui->line_admin_password->clear();
        ui->line_username_signup->clear();
        ui->line_password_signup->clear();
        }else
        {
        ui->statusbar->showMessage("password could not be modified.Username not found in the database.");
        }
    }else
        ui->statusbar->showMessage("admin password is incorrect");
}
