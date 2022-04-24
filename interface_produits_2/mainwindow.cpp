#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "garticle.h"

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


void MainWindow::on_next_clicked()
{
    hide();
    g = new garticle(this);
    g->show();
}
