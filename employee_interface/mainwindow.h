#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employee.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_signin_clicked();

    void on_signup_clicked();

    void on_remove_user_clicked();

    void on_show_users_clicked();

    void on_modifier_user_clicked();

private:
    Ui::MainWindow *ui;
    Employee *e;
    QSqlQueryModel * afficher();
};
#endif // MAINWINDOW_H
