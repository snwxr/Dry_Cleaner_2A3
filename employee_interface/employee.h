#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include "employe.h"

namespace Ui {
class Employee;
}

class Employee : public QDialog
{
    Q_OBJECT

public:
    explicit Employee(QWidget *parent = nullptr);
    ~Employee();

private slots:

    void on_btn_ajout_clicked();

    void on_btn_sup_clicked();

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void on_btn_modif_clicked();

private:
    Ui::Employee *ui;
    employe etmp;
};

#endif // EMPLOYEE_H
