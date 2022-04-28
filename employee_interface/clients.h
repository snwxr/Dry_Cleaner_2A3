#ifndef CLIENTS_H
#define CLIENTS_H

#include <QDialog>
#include<QString>
#include <QDateTime>
#include "QMessageBox"

#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPrintDialog>
#include <QTextDocument>
#include "gclients.h"
#include "statistiques.h"
#include "arduino.h"
#include "map.h"

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

    //void on_pushButton_Search_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_Stats_clicked();

    void on_pushButton_StatsNB_clicked();

    void on_pushButton_Quit_clicked();

    void on_pushButton_Quit_2_clicked();

    void on_pushButton_print_clicked();
    //*********** Arduino: Ultrason ******************

    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino

//****************Calculator**************************
private slots :
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
    //void clearPressed();
    void on_Clear_clicked();

    void on_memAdd_released();

    void on_memClear_clicked();

    void on_memGet_released();

    void on_pushButton_released();

    void on_lineEdit_SearchBar_textChanged(const QString &arg1);

    void on_MAP_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::Clients *ui;
    Gclients Etmp;
    statistiques *dial;
    //variable arduino
    QByteArray data; // variable contenant les données reçues

    Arduino *A; // objet temporaire
    map *m;
    QSqlQueryModel * Modal;
    QPrintDialog *dialog;
    QTextDocument *document;
};

#endif // CLIENTS_H
