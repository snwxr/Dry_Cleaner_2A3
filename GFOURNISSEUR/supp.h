#ifndef SUPP_H
#define SUPP_H

#include <QDialog>

namespace Ui {
class sUPP;
}

class sUPP : public QDialog
{
    Q_OBJECT

public:
    explicit sUPP(QWidget *parent = nullptr);
    ~sUPP();

private:
    Ui::sUPP *ui;
};

#endif // SUPP_H
