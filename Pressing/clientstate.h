#ifndef CLIENTSTATE_H
#define CLIENTSTATE_H

#include <QDialog>

namespace Ui {
class ClientState;
}

class ClientState : public QDialog
{
    Q_OBJECT

public:
    explicit ClientState(QWidget *parent = nullptr);
    ~ClientState();

private slots:

    void on_pushButton_BACK_clicked();

private:
    Ui::ClientState *ui;
};

#endif // CLIENTSTATE_H
