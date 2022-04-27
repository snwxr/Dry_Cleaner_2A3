/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QQuickWidget *quickWidget;

    void setupUi(QDialog *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName(QStringLiteral("map"));
        map->resize(550, 500);
        quickWidget = new QQuickWidget(map);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(10, 10, 531, 481));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QDialog *map)
    {
        map->setWindowTitle(QApplication::translate("map", "MAP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
