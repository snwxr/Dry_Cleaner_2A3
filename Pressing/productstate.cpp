#include "productstate.h"
#include "ui_productstate.h"
#include "menu.h"
ProductState::ProductState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductState)
{
    ui->setupUi(this);
}

ProductState::~ProductState()
{
    delete ui;
}

void ProductState::on_pushButton_Back_clicked()
{
    Menu m;
    m.exec();
}
