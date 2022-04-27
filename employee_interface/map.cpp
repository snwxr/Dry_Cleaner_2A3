#include "map.h"
#include "ui_map.h"
#include "QMessageBox"
#include <QSslSocket>
#include <QGeoRoute>
#include <QQuickItem>
map::map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickWidget->show();

    auto obj = ui->quickWidget->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));


    emit setCenter(36.8991033745, 10.1895738009);
    //emit addMarker(36.8440683,10.1735198);
    //emit addMarker(36.8470106953, 10.2806479195);

    //Marquer les adresses des clients
    QSqlQuery q2;
    q2.prepare("SELECT ADRESSE_C FROM clients WHERE ADRESSE_C IS NOT NULL");
    q2.exec();

    if (q2.exec())
    {
            while(q2.next())
            {
                QString str=q2.value(0).toString();
                QStringList list = str.split(",");
                emit addMarker(list[0].toFloat(),list[1].toFloat());

            }

    }
    else
    {
        QMessageBox::critical(this,tr("error::"),q2.lastError().text());
    }


}

map::~map()
{
    delete ui;
}

