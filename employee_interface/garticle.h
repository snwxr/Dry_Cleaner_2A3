#ifndef GARTICLE_H
#define GARTICLE_H
#include "article.h"
#include <QDialog>
#include "popup.h"
#include "arduino.h"
#include <QTextDocument>
#include <QPrintDialog>
namespace Ui {
class garticle;
}

class garticle : public QDialog
{
    Q_OBJECT

public:
    explicit garticle(QWidget *parent = nullptr);
    ~garticle();

private slots:
    void on_ajout_article_clicked();

    void on_supp_article_clicked();

    void on_comboBox_modif_prod_currentIndexChanged(const QString &arg1);

    void on_modif_article_clicked();

    void on_pdfarticle_clicked();

    void on_tri_num_art_clicked();

    void on_tri_type_art_clicked();

    void on_tri_etat_art_clicked();



    void on_tot_afficher_art_clicked();



    void on_line_rech_art_textChanged(const QString &arg1);

    void on_notif_clicked();
    void update_label();

    void on_RFID_clicked();

    void on_open_clicked();

    void on_get_photo_clicked();

    void on_tab_article_currentChanged(int index);

private:
    Ui::garticle *ui;
    article atmp;
    PopUp *popUp;
    QByteArray data;
    QTextDocument *document;
    QPrintDialog *dialog;
    Arduino *A1;
};

#endif // GARTICLE_H
