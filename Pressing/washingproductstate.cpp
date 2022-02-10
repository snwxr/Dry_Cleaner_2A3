#include "washingproductstate.h"
#include "ui_washingproductstate.h"
#include "menu.h"
WashingProductState::WashingProductState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WashingProductState)
{
    ui->setupUi(this);
}

WashingProductState::~WashingProductState()
{
    delete ui;
}

void WashingProductState::on_pushButton_BACK_clicked()
{
    Menu m;
    m.exec();
}
