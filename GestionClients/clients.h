#ifndef CLIENTS_H
#define CLIENTS_H

#include <QDialog>
#include<QString>
#include <QDateTime>
#include "QMessageBox"

#include<QSqlQuery>
#include<QSqlQueryModel>
#include "gclients.h"


namespace Ui {
class Clients;
}

class Clients : public QDialog
{
    Q_OBJECT

public:
    explicit Clients(QWidget *parent = nullptr);
    ~Clients();


private slots:
    void on_pushButton_Add_clicked();

    void on_pushButton_ShowAll_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_modify_clicked();

    void on_pushButton_OK_clicked();

    void on_pushButton_Search_clicked();

private:
    Ui::Clients *ui;
    Gclients Etmp;

};

#endif // CLIENTS_H
