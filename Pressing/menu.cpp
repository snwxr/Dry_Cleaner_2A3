#include "menu.h"
#include "ui_menu.h"
#include "clientstate.h"
#include "employeestate.h"
#include "productstate.h"
#include "washingmachinestate.h"
#include "washingproductstate.h"
#include "supplierstate.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_Clients_clicked()
{
    ClientState Cstate;
    Cstate.exec();
}

void Menu::on_pushButton_Employees_clicked()
{
    EmployeeState EmpState;
    EmpState.exec();
}

void Menu::on_pushButton_Products_clicked()
{
    ProductState ProdState;
    ProdState.exec();
}

void Menu::on_pushButton_WashingMachines_clicked()
{
    WashingMachineState WashMachState;
    WashMachState.exec();
}

void Menu::on_pushButton_WashingProducts_clicked()
{
    WashingProductState WashProdState;
    WashProdState.exec();
}

void Menu::on_pushButton_Suppliers_clicked()
{
    SupplierState SuppState;
    SuppState.exec();
}
