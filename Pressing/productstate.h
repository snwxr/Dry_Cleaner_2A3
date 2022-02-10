#ifndef PRODUCTSTATE_H
#define PRODUCTSTATE_H

#include <QDialog>

namespace Ui {
class ProductState;
}

class ProductState : public QDialog
{
    Q_OBJECT

public:
    explicit ProductState(QWidget *parent = nullptr);
    ~ProductState();

private slots:
    void on_pushButton_Back_clicked();

private:
    Ui::ProductState *ui;
};

#endif // PRODUCTSTATE_H
