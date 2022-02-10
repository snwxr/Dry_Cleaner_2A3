#include "clientstate.h"
#include "ui_clientstate.h"
#include "menu.h"
ClientState::ClientState(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientState)
{
    ui->setupUi(this);
}

ClientState::~ClientState()
{
    delete ui;
}

void ClientState::on_pushButton_BACK_clicked()
{
    Menu m;
    m.exec();
}
