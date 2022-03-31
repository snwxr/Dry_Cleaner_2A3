#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include "employe.h"
#include "serverwindow.h"
#include "chatwindow.h"

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

    void on_pdf_emp_clicked();

    void on_tri_salaire_emp_clicked();

    void on_tri_type_emp_clicked();
    
    void on_tri_nom_emp_clicked();
    


    void on_tout_afficher_emp_clicked();

    void on_rech_emp_clicked();



    void on_btn_chat_emp_clicked();



private:
    Ui::Employee *ui;
    employe etmp;
    ServerWindow *s;
    ChatWindow *c;
};

#endif // EMPLOYEE_H
