#ifndef GARTICLE_H
#define GARTICLE_H
#include "article.h"
#include <QDialog>

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

private:
    Ui::garticle *ui;
    article atmp;
};

#endif // GARTICLE_H
