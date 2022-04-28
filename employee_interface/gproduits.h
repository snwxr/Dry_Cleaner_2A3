#ifndef GPRODUITS_H
#define GPRODUITS_H

#include <QDialog>
#include "produit.h"
#include "arduino.h"

namespace Ui {
class Gproduits;
}

class Gproduits : public QDialog
{
    Q_OBJECT

public:
    explicit Gproduits(QWidget *parent = nullptr);
    ~Gproduits();

private slots:
    void on_btn_ajout_netoy_clicked();

    void on_btn_sup_netoy_clicked();

    void on_comboBox_modif_netoy_currentIndexChanged(const QString &arg1);

    void on_btn_modif_netoy_clicked();

    void on_pdf_netoy_clicked();

    void on_tri_nom_netoy_clicked();

    void on_tri_quantite_netoy_clicked();

    void on_tri_reference_netoy_clicked();

    void on_tout_afficher_netoy_clicked();

    void on_line_rech_netoy_textChanged(const QString &arg1);

    void on_quitter_netoy_clicked();

    void on_btn_cmd_netoy_clicked();

    void on_tab_employee_2_currentChanged(int index);

    void on_scan_code_clicked();

    void update_label();

private:
    Ui::Gproduits *ui;
    Produit ptmp;
    Arduino *A;
};

#endif // GPRODUITS_H
