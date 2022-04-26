#include "supp.h"
#include "ui_supp.h"

sUPP::sUPP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sUPP)
{
    ui->setupUi(this);
}

sUPP::~sUPP()
{
    delete ui;
}
