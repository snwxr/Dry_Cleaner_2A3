#ifndef COMMAND_H
#define COMMAND_H

#include <QDialog>
#include "commande.h"

namespace Ui {
class Command;
}

class Command : public QDialog
{
    Q_OBJECT

public:
    explicit Command(QWidget *parent = nullptr);
    ~Command();

private slots:
    void on_btn_ajout_cmd_clicked();

    void on_btn_sup_cmd_clicked();

    void on_btn_historique_clicked();

    void on_comboBox_modif_cmd_currentIndexChanged(const QString &arg1);

    void on_btn_modif_cmd_clicked();

    void on_pdf_com_clicked();

    void on_tri_id_com_clicked();

    void on_tri_nom_com_clicked();

    void on_tri_quantite_com_clicked();

    void on_tout_afficher_com_clicked();

    void on_line_rech_com_textChanged(const QString &arg1);

    void on_quitter_cmd_clicked();

private:
    Ui::Command *ui;
    Commande ctmp;
};

#endif // COMMAND_H
