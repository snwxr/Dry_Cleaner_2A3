#ifndef SUPPLIERSTATE_H
#define SUPPLIERSTATE_H

#include <QDialog>

namespace Ui {
class SupplierState;
}

class SupplierState : public QDialog
{
    Q_OBJECT

public:
    explicit SupplierState(QWidget *parent = nullptr);
    ~SupplierState();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::SupplierState *ui;
};

#endif // SUPPLIERSTATE_H
