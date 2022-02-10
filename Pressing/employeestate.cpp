#include "employeestate.h"
#include "ui_employeestate.h"
#include "menu.h"
EmployeeState::EmployeeState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeState)
{
    ui->setupUi(this);
}

EmployeeState::~EmployeeState()
{
    delete ui;
}

void EmployeeState::on_pushButton_Back_clicked()
{
    Menu m;
    m.exec();
}
