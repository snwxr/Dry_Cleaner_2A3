#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include <QVariant>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class map;
}

class map : public QDialog
{
    Q_OBJECT

public:
    explicit map(QWidget *parent = nullptr);
    ~map();

private:
    Ui::map *ui;

signals:
    void setCenter(QVariant, QVariant);
    void addMarker(QVariant, QVariant);
};

#endif // MAP_H
