#include "washingmachinestate.h"
#include "ui_washingmachinestate.h"
#include "menu.h"
WashingMachineState::WashingMachineState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WashingMachineState)
{
    ui->setupUi(this);
}

WashingMachineState::~WashingMachineState()
{
    delete ui;
}

void WashingMachineState::on_pushButton_BACK_clicked()
{
    Menu m;
    m.exec();
}
