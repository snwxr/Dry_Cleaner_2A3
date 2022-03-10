#ifndef GMAT_H
#define GMAT_H
#include "materiels.h"
#include <QDialog>

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

    void on_supp_mat_clicked();

    void on_comboBox_modif_mat_currentIndexChanged(const QString &arg1);

    void on_modif_mat_clicked();

    void on_pdfmat_clicked();

private:
    Ui::gmat *ui;
    materiels mtmp;
};

#endif // GMAT_H
