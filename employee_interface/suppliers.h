#ifndef SUPPLIERS_H
#define SUPPLIERS_H
#include "connection.h"
#include "gsuppliers.h"
#include<QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QDateTime>
#include <QDate>
#include <QSqlQueryModel>
#include <vector>
#include <QDebug>
#include <QDialog>
#include <QSqlTableModel>
#include <QPrintDialog>
#include <QTextDocument>
namespace Ui {
class Suppliers;
}

class Suppliers : public QDialog
{
    Q_OBJECT

public:
   explicit Suppliers(QWidget *parent = nullptr);
    ~Suppliers();



private slots:
                     void on_pushButton_2_clicked();//ajout

                     void on_pushButton_3_clicked();//modif

                     void on_pushButton_4_clicked();// remove

                     void on_tablefournisseur_activated(const QModelIndex &index);

                     void on_pushButton_clicked();//rech

                     void on_pushButton_5_clicked(); //affiche tous

                     void on_pushButton_8_clicked();// trie

                     void on_pushButton_6_clicked();

                     void on_pushButton_9_clicked();

                     void on_pushButton_10_clicked();

                     void on_tab_3_currentChanged(int index);

private:
    Ui::Suppliers *ui;
    gSuppliers Etmp;
    QSqlQueryModel * Modal;
    QPrintDialog *dialog;
    QTextDocument *document;
};

#endif // SUPPLIERS_H
