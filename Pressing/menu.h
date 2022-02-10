#ifndef MENU_H
#define MENU_H
#include<logininfo.h>
#include <QDialog>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_Clients_clicked();

    void on_pushButton_Employees_clicked();

    void on_pushButton_Products_clicked();

    void on_pushButton_WashingMachines_clicked();

    void on_pushButton_WashingProducts_clicked();

    void on_pushButton_Suppliers_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
