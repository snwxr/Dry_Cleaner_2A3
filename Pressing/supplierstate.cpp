#include "supplierstate.h"
#include "ui_supplierstate.h"
#include "menu.h"
SupplierState::SupplierState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SupplierState)
{
    ui->setupUi(this);
}

SupplierState::~SupplierState()
{
    delete ui;
}

void SupplierState::on_pushButton_3_clicked()
{
    Menu m;
    m.exec();
}
