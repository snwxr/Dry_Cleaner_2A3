#ifndef EMPLOYEESTATE_H
#define EMPLOYEESTATE_H

#include <QDialog>

namespace Ui {
class EmployeeState;
}

class EmployeeState : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeState(QWidget *parent = nullptr);
    ~EmployeeState();

private slots:
    void on_pushButton_Back_clicked();

private:
    Ui::EmployeeState *ui;
};

#endif // EMPLOYEESTATE_H
