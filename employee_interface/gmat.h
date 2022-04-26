#ifndef GMAT_H
#define GMAT_H
#include "materiels.h"
#include <QDialog>
#include "arduino.h"
namespace Ui {
class gmat;
}

class gmat : public QDialog
{
    Q_OBJECT

public:
    explicit gmat(QWidget *parent = nullptr);
    ~gmat();

private slots:
    void on_ajout_mat_clicked();
    //void sendMail();
    //void mailSent(QString status);

    void on_supp_mat_clicked();

    void on_comboBox_modif_mat_currentIndexChanged(const QString &arg1);

    void on_modif_mat_clicked();

    void on_pdfmat_clicked();

    void on_line_rech_mat_textChanged(const QString &arg1);

    void on_btn_tri_mat_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    //void on_pushButton_7_clicked();

    //void on_push_email_clicked();

    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

    void on_tabWidget_currentChanged(int index);

private:
    Ui::gmat *ui;
    materiels mtmp;
    QByteArrayData d;

};

#endif // GMAT_H
