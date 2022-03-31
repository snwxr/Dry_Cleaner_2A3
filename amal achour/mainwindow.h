#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "produitNettoyage.h"
#include "commande.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Button_ajouter_produit_clicked();

    void on_Button_modifier_produit_clicked();

    void on_buttonSupprimer_produit_clicked();

    void on_recuperer_clicked();

     void on_exportpdf_clicked();

    void on_trier_clicked();


    void on_rechercher_clicked();

    void on_ajoutercommande_clicked();

    void on_modifierC_clicked();

    void on_supprimerC_clicked();

    void on_recupererC_clicked();

private:
    Ui::MainWindow *ui;
    ProduitNettoyage tmpp;
    commande co;
};

#endif // MAINWINDOW_H
