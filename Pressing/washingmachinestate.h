#ifndef WASHINGMACHINESTATE_H
#define WASHINGMACHINESTATE_H

#include <QDialog>

namespace Ui {
class WashingMachineState;
}

class WashingMachineState : public QDialog
{
    Q_OBJECT

public:
    explicit WashingMachineState(QWidget *parent = nullptr);
    ~WashingMachineState();

private slots:
    void on_pushButton_BACK_clicked();

private:
    Ui::WashingMachineState *ui;
};

#endif // WASHINGMACHINESTATE_H
