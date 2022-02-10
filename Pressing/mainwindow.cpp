#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logininfo.h"
#include "menu.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //control saisie Password ne depasse pas 8 char
    ui->lineEdit_Password->setValidator(new QIntValidator(0,99999999));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_SignIn_clicked()
{
    LoginInfo log;
    //recuperation des données Login sans BD et sans verification
    log.setUserName(ui->lineEdit_UserName->text());
    log.setPassword(ui->lineEdit_Password->text());

    Menu m;
    m.exec();

}
