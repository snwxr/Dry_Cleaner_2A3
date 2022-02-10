#ifndef WASHINGPRODUCTSTATE_H
#define WASHINGPRODUCTSTATE_H

#include <QDialog>

namespace Ui {
class WashingProductState;
}

class WashingProductState : public QDialog
{
    Q_OBJECT

public:
    explicit WashingProductState(QWidget *parent = nullptr);
    ~WashingProductState();

private slots:
    void on_pushButton_BACK_clicked();

private:
    Ui::WashingProductState *ui;
};

#endif // WASHINGPRODUCTSTATE_H
