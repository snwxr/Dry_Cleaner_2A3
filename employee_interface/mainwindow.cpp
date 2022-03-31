#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "serverwindow.h"
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


void MainWindow::on_pushButton_clicked()
{
    hide();
    e = new Employee(this);
    e->show();
}
