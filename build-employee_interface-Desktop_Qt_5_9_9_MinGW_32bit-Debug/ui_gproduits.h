/********************************************************************************
** Form generated from reading UI file 'gproduits.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPRODUITS_H
#define UI_GPRODUITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gproduits
{
public:
    QTabWidget *tab_employee_2;
    QWidget *tab_employee;
    QWidget *tab_6;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QPushButton *tout_afficher_netoy;
    QPushButton *pdf_netoy;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *tri_nom_netoy;
    QRadioButton *tri_quantite_netoy;
    QRadioButton *tri_reference_netoy;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_num_netoy;
    QLineEdit *line_nom_netoy;
    QLineEdit *line_qty_netoy;
    QLineEdit *line_ref_netoy;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_ajout_netoy;
    QPushButton *btn_modif_netoy;
    QPushButton *btn_sup_netoy;
    QPushButton *quitter_netoy;
    QPushButton *btn_cmd_netoy;
    QLabel *label_info_netoy;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *line_rech_netoy;
    QTableView *tabNetoy;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_modif_netoy;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_rech_netoy;
    QPushButton *scan_code;
    QWidget *tab_4;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_5;

    void setupUi(QDialog *Gproduits)
    {
        if (Gproduits->objectName().isEmpty())
            Gproduits->setObjectName(QStringLiteral("Gproduits"));
        Gproduits->resize(1048, 591);
        Gproduits->setStyleSheet(QLatin1String("/*-----QWidget-----*/\n"
"\n"
"QWidget\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 50, 255),stop:1 rgba(47, 53, 74, 255));\n"
"\n"
"	color: #000000;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"\n"
"QLabel\n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	color: #c2c7d5;\n"
"\n"
"	font-size: 13px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"\n"
"QPushButton\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"\n"
"	color: #fff;\n"
"\n"
"	font-size: 11px;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: none;\n"
"\n"
"	border-radius: 3px;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton::pressed\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 1"
                        "79, 255),stop:1 rgba(70, 255, 230, 255));\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"\n"
"QCheckBox\n"
"\n"
"{\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	color: #fff;\n"
"\n"
"	font-size: 10px;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: none;\n"
"\n"
"	border-radius: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"\n"
"QCheckBox::indicator\n"
"\n"
"{\n"
"\n"
"    color: #b1b1b1;\n"
"\n"
"    background-color: #323232;\n"
"\n"
"    border: 1px solid darkgray;\n"
"\n"
"    width: 12px;\n"
"\n"
"    height: 12px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"\n"
"{\n"
"\n"
"    image:url(\"./ressources/check.png\");\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"\n"
"    border: 1px solid #607cff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover"
                        "\n"
"\n"
"{\n"
"\n"
"    border: 1px solid #08b099;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"\n"
"{\n"
"\n"
"	color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"\n"
"{\n"
"\n"
"	background-color: #656565;\n"
"\n"
"	color: #656565;\n"
"\n"
"    border: 1px solid #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"\n"
"QLineEdit\n"
"\n"
"{\n"
"\n"
"	background-color: #c2c7d5;\n"
"\n"
"	color: #000;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: none;\n"
"\n"
"	border-radius: 2px;\n"
"\n"
"	padding: 3px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QListView-----*/\n"
"\n"
"QListView\n"
"\n"
"{\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(50, 61, 80, 255),stop:1 rgba(44, 49, 69, 255));\n"
"\n"
"	color: #fff;\n"
"\n"
"	font-size: 12px;\n"
"\n"
"	font-weight: bold;\n"
"\n"
"	border: 1px solid #191919;\n"
"\n"
"	show-decoration-selec"
                        "ted: 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QListView::item\n"
"\n"
"{\n"
"\n"
"	color: #31cecb;\n"
"\n"
"	background-color: #454e5e;\n"
"\n"
"	border: none;\n"
"\n"
"	padding: 5px;\n"
"\n"
"	border-radius: 0px;\n"
"\n"
"	padding-left : 10px;\n"
"\n"
"	height: 42px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QListView::item:selected\n"
"\n"
"{\n"
"\n"
"	color: #31cecb;\n"
"\n"
"	background-color: #454e5e;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QListView::item:!selected\n"
"\n"
"{\n"
"\n"
"	color:white;\n"
"\n"
"	background-color: transparent;\n"
"\n"
"	border: none;\n"
"\n"
"	padding-left : 10px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QListView::item:!selected:hover\n"
"\n"
"{\n"
"\n"
"	color: #bbbcba;\n"
"\n"
"	background-color: #454e5e;\n"
"\n"
"	border: none;\n"
"\n"
"	padding-left : 10px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QTreeView-----*/\n"
"\n"
"QTreeView \n"
"\n"
"{\n"
"\n"
"	background-color: #232939;\n"
"\n"
"	show-decoration-selected: 0;\n"
"\n"
""
                        "	color: #c2c8d7;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTreeView::item \n"
"\n"
"{\n"
"\n"
"	border-top-color: transparent;\n"
"\n"
"	border-bottom-color: transparent;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTreeView::item:hover \n"
"\n"
"{\n"
"\n"
"	background-color: #606060;\n"
"\n"
"	color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTreeView::item:selected \n"
"\n"
"{\n"
"\n"
"	background-color: #0ab19a;\n"
"\n"
"	color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTreeView::item:selected:active\n"
"\n"
"{\n"
"\n"
"	background-color: #0ab19a;\n"
"\n"
"	color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"\n"
"{\n"
"\n"
"	image: url(://tree-closed.png);\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"\n"
"{\n"
"\n"
"	image: url(:"
                        "//tree-open.png);\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"\n"
"QTableView\n"
"\n"
"{\n"
"\n"
"    background-color: #232939;\n"
"\n"
"	border: 1px solid gray;\n"
"\n"
"    color: #f0f0f0;\n"
"\n"
"    gridline-color: #232939;\n"
"\n"
"    outline : 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::disabled\n"
"\n"
"{\n"
"\n"
"    background-color: #242526;\n"
"\n"
"    border: 1px solid #32414B;\n"
"\n"
"    color: #656565;\n"
"\n"
"    gridline-color: #656565;\n"
"\n"
"    outline : 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:hover \n"
"\n"
"{\n"
"\n"
"    background-color: #606060;\n"
"\n"
"    color: #f0f0f0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:selected \n"
"\n"
"{\n"
"\n"
"	background-color: #0ab19a;\n"
"\n"
"    color: #F0F0F0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"\n"
"{\n"
"\n"
"    background-color: #1a1b1c;\n"
"\n"
"    border:"
                        " 2px solid #525251;\n"
"\n"
"    color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"\n"
"{\n"
"\n"
"	background-color: #343a49;\n"
"\n"
"    color: #fff;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section\n"
"\n"
"{\n"
"\n"
"	color: #fff;\n"
"\n"
"	border-top: 0px;\n"
"\n"
"	border-bottom: 1px solid gray;\n"
"\n"
"	border-right: 1px solid gray;\n"
"\n"
"	background-color: #343a49;\n"
"\n"
"    margin-top:1px;\n"
"\n"
"	margin-bottom:1px;\n"
"\n"
"	padding: 5px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"\n"
"{\n"
"\n"
"    background-color: #525251;\n"
"\n"
"    color: #656565;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"\n"
"{\n"
"\n"
"    color: #fff;\n"
"\n"
"    background-color: #0ab19a;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"\n"
"{\n"
"\n"
"    color: #656565;\n"
"\n"
"    background-color: #525251;\n"
"\n"
""
                        "\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"\n"
"QHeaderView::section::vertical::only-one\n"
"\n"
"{\n"
"\n"
"    border-top: 1px solid #353635;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"\n"
"{\n"
"\n"
"    border-top: 1px solid #353635;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"\n"
"QHeaderView::section::horizontal::only-one\n"
"\n"
"{\n"
"\n"
"    border-left: 1px solid #353635;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"\n"
"{\n"
"\n"
"    border-left: 1px solid #353635;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"\n"
"QScrollBar:horizontal \n"
"\n"
"{\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    height: 8px;\n"
"\n"
"    margin: 0px;\n"
"\n"
"    padding: 0px;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::handle:horizontal \n"
"\n"
"{\n"
"\n"
"    border: none;\n"
"\n"
""
                        "	min-width: 100px;\n"
"\n"
"    background-color: #56576c;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal, \n"
"\n"
"QScrollBar::sub-line:horizontal,\n"
"\n"
"QScrollBar::add-page:horizontal, \n"
"\n"
"QScrollBar::sub-page:horizontal \n"
"\n"
"{\n"
"\n"
"    width: 0px;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar:vertical \n"
"\n"
"{\n"
"\n"
"    background-color: transparent;\n"
"\n"
"    width: 8px;\n"
"\n"
"    margin: 0;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::handle:vertical \n"
"\n"
"{\n"
"\n"
"    border: none;\n"
"\n"
"	min-height: 100px;\n"
"\n"
"    background-color: #56576c;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QScrollBar::add-line:vertical, \n"
"\n"
"QScrollBar::sub-line:vertical,\n"
"\n"
"QScrollBar::add-page:vertical, \n"
"\n"
"QScrollBar::sub-page:vertical \n"
"\n"
"{\n"
"\n"
"    height: 0px;\n"
"\n"
"    background-color: transparent;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
""
                        "QGroupBox  {\n"
"\n"
"    border: 1px solid gray;\n"
"\n"
"    border-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"\n"
"    margin-top: 27px;\n"
"\n"
"    font-size: 14px;\n"
"\n"
"    border-radius: 15px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QGroupBox::title  {\n"
"\n"
"    subcontrol-origin: margin;\n"
"\n"
"    subcontrol-position: top center;\n"
"\n"
"    padding: 5px 8000px 5px 8000px;\n"
"\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"\n"
"    color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QLineEdit {\n"
"\n"
"    border: 2px solid gray;\n"
"\n"
"    border-radius: 10px;\n"
"\n"
"    padding: 0 8px;\n"
"\n"
"    background: white;\n"
"\n"
"    selection-background-color: darkgray;\n"
"\n"
"}\n"
"\n"
"QComboBox {\n"
"\n"
"    border: 2px solid grey;\n"
"\n"
"    border-radius: 10px;\n"
"\n"
"    padding:"
                        " 0 8px;\n"
"\n"
"    min-width: 6em;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:editable {\n"
"\n"
"    background: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"\n"
"     background: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"\n"
"    padding-top: 3px;\n"
"\n"
"    padding-left: 4px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox::drop-down {\n"
"\n"
"    subcontrol-origin: padding;\n"
"\n"
"    subcontrol-position: top right;\n"
"\n"
"    width: 15px;\n"
"\n"
"\n"
"\n"
"    border-left-width: 1px;\n"
"\n"
"    border-left-color: darkgray;\n"
""
                        "\n"
"    border-left-style: solid; /* just a single line */\n"
"\n"
"    border-top-right-radius: 10px; /* same radius as the QComboBox */\n"
"\n"
"    border-bottom-right-radius: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow {\n"
"\n"
"    image: url(/usr/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"\n"
"    top: 1px;\n"
"\n"
"    left: 1px;\n"
"\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"\n"
"    border: 2px solid gray;\n"
"\n"
"    selection-background-color: lightgray;\n"
"\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"\n"
"    border-top: 2px solid #C2C7CB;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabWidget::tab-bar {\n"
"\n"
"    left: 5px; /* move to the right by 5px */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"\n"
"QTabBar::tab {\n"
"\n"
"    background: qlineargradient(x1"
                        ": 0, y1: 0, x2: 0, y2: 1,\n"
"\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"\n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"\n"
"    border-top-left-radius: 4px;\n"
"\n"
"    border-top-right-radius: 4px;\n"
"\n"
"    min-width: 8ex;\n"
"\n"
"    padding: 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:selected {\n"
"\n"
"    border-color:qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"\n"
"    border-bottom-c"
                        "olor: #C2C7CB; /* same as pane color */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:!selected {\n"
"\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"\n"
"QTabBar::tab:selected {\n"
"\n"
"    /* expand/overlap to the left and right by 4px */\n"
"\n"
"    margin-left: -4px;\n"
"\n"
"    margin-right: -4px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:first:selected {\n"
"\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:last:selected {\n"
"\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTabBar::tab:only-one {\n"
"\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"\n"
"}\n"
"\n"
"QRadioButton{\n"
"\n"
"\n"
"\n"
"	color:white;\n"
"\n"
"	font:solid;\n"
"\n"
"}\n"
"\n"
"QDateEdit\n"
"\n"
"{\n"
"\n"
"    backgrou"
                        "nd-color: white;\n"
"\n"
"	border: 2px solid grey;\n"
"\n"
"    border-radius: 10px;\n"
"\n"
"    padding: 0 8px;\n"
"\n"
"    spacing: 5px; \n"
"\n"
"    min-width: 6em;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QDateEdit::drop-down {\n"
"\n"
"    image: url(:/new/myapp/cbarrowdn.png);\n"
"\n"
"    width:50px;\n"
"\n"
"    height:15px;\n"
"\n"
"    subcontrol-position: right top;\n"
"\n"
"    subcontrol-origin:margin;\n"
"\n"
"    background-color: white;\n"
"\n"
"   	border: 2px solid grey;\n"
"\n"
"    border-radius: 10px;\n"
"\n"
"    padding: 0 8px;\n"
"\n"
"    spacing: 5px; \n"
"\n"
"    min-width: 6em;\n"
"\n"
"   spacing: 5px; \n"
"\n"
"}"));
        tab_employee_2 = new QTabWidget(Gproduits);
        tab_employee_2->setObjectName(QStringLiteral("tab_employee_2"));
        tab_employee_2->setGeometry(QRect(20, 30, 1001, 541));
        tab_employee = new QWidget();
        tab_employee->setObjectName(QStringLiteral("tab_employee"));
        tab_employee_2->addTab(tab_employee, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 280, 441, 171));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 391, 101));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tout_afficher_netoy = new QPushButton(layoutWidget);
        tout_afficher_netoy->setObjectName(QStringLiteral("tout_afficher_netoy"));

        verticalLayout_6->addWidget(tout_afficher_netoy);

        pdf_netoy = new QPushButton(layoutWidget);
        pdf_netoy->setObjectName(QStringLiteral("pdf_netoy"));

        verticalLayout_6->addWidget(pdf_netoy);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tri_nom_netoy = new QRadioButton(layoutWidget);
        tri_nom_netoy->setObjectName(QStringLiteral("tri_nom_netoy"));

        verticalLayout_5->addWidget(tri_nom_netoy);

        tri_quantite_netoy = new QRadioButton(layoutWidget);
        tri_quantite_netoy->setObjectName(QStringLiteral("tri_quantite_netoy"));

        verticalLayout_5->addWidget(tri_quantite_netoy);

        tri_reference_netoy = new QRadioButton(layoutWidget);
        tri_reference_netoy->setObjectName(QStringLiteral("tri_reference_netoy"));

        verticalLayout_5->addWidget(tri_reference_netoy);


        horizontalLayout_4->addLayout(verticalLayout_5);

        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 170, 431, 281));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 381, 211));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_num_netoy = new QLineEdit(layoutWidget1);
        line_num_netoy->setObjectName(QStringLiteral("line_num_netoy"));

        verticalLayout->addWidget(line_num_netoy);

        line_nom_netoy = new QLineEdit(layoutWidget1);
        line_nom_netoy->setObjectName(QStringLiteral("line_nom_netoy"));

        verticalLayout->addWidget(line_nom_netoy);

        line_qty_netoy = new QLineEdit(layoutWidget1);
        line_qty_netoy->setObjectName(QStringLiteral("line_qty_netoy"));

        verticalLayout->addWidget(line_qty_netoy);

        line_ref_netoy = new QLineEdit(layoutWidget1);
        line_ref_netoy->setObjectName(QStringLiteral("line_ref_netoy"));

        verticalLayout->addWidget(line_ref_netoy);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_ajout_netoy = new QPushButton(layoutWidget1);
        btn_ajout_netoy->setObjectName(QStringLiteral("btn_ajout_netoy"));

        horizontalLayout_2->addWidget(btn_ajout_netoy);

        btn_modif_netoy = new QPushButton(layoutWidget1);
        btn_modif_netoy->setObjectName(QStringLiteral("btn_modif_netoy"));

        horizontalLayout_2->addWidget(btn_modif_netoy);

        btn_sup_netoy = new QPushButton(layoutWidget1);
        btn_sup_netoy->setObjectName(QStringLiteral("btn_sup_netoy"));

        horizontalLayout_2->addWidget(btn_sup_netoy);


        verticalLayout_3->addLayout(horizontalLayout_2);

        quitter_netoy = new QPushButton(tab_6);
        quitter_netoy->setObjectName(QStringLiteral("quitter_netoy"));
        quitter_netoy->setGeometry(QRect(860, 10, 75, 41));
        btn_cmd_netoy = new QPushButton(tab_6);
        btn_cmd_netoy->setObjectName(QStringLiteral("btn_cmd_netoy"));
        btn_cmd_netoy->setGeometry(QRect(770, 10, 75, 41));
        label_info_netoy = new QLabel(tab_6);
        label_info_netoy->setObjectName(QStringLiteral("label_info_netoy"));
        label_info_netoy->setGeometry(QRect(46, 464, 901, 20));
        layoutWidget2 = new QWidget(tab_6);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 451, 241));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        line_rech_netoy = new QLineEdit(layoutWidget2);
        line_rech_netoy->setObjectName(QStringLiteral("line_rech_netoy"));

        horizontalLayout_3->addWidget(line_rech_netoy);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tabNetoy = new QTableView(layoutWidget2);
        tabNetoy->setObjectName(QStringLiteral("tabNetoy"));

        verticalLayout_4->addWidget(tabNetoy);

        layoutWidget3 = new QWidget(tab_6);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(510, 100, 234, 56));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBox_modif_netoy = new QComboBox(layoutWidget3);
        comboBox_modif_netoy->setObjectName(QStringLiteral("comboBox_modif_netoy"));

        horizontalLayout_5->addWidget(comboBox_modif_netoy);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_rech_netoy = new QComboBox(layoutWidget3);
        comboBox_rech_netoy->setObjectName(QStringLiteral("comboBox_rech_netoy"));

        horizontalLayout_6->addWidget(comboBox_rech_netoy);


        verticalLayout_7->addLayout(horizontalLayout_6);

        scan_code = new QPushButton(tab_6);
        scan_code->setObjectName(QStringLiteral("scan_code"));
        scan_code->setGeometry(QRect(660, 10, 93, 41));
        tab_employee_2->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_employee_2->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_employee_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_employee_2->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab_employee_2->addTab(tab_5, QString());

        retranslateUi(Gproduits);

        tab_employee_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gproduits);
    } // setupUi

    void retranslateUi(QDialog *Gproduits)
    {
        Gproduits->setWindowTitle(QApplication::translate("Gproduits", "Dialog", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_employee), QApplication::translate("Gproduits", "Gemployee", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Gproduits", "Trier Par:", Q_NULLPTR));
        tout_afficher_netoy->setText(QApplication::translate("Gproduits", "Tout afficher", Q_NULLPTR));
        pdf_netoy->setText(QApplication::translate("Gproduits", "PDF", Q_NULLPTR));
        tri_nom_netoy->setText(QApplication::translate("Gproduits", "Nom", Q_NULLPTR));
        tri_quantite_netoy->setText(QApplication::translate("Gproduits", "Quantite", Q_NULLPTR));
        tri_reference_netoy->setText(QApplication::translate("Gproduits", "Reference", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Gproduits", "Les inforamtions du produit", Q_NULLPTR));
        label->setText(QApplication::translate("Gproduits", "Numero:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Gproduits", "Nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Gproduits", "Quantite:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Gproduits", "Reference:", Q_NULLPTR));
        btn_ajout_netoy->setText(QApplication::translate("Gproduits", "AJOUTER", Q_NULLPTR));
        btn_modif_netoy->setText(QApplication::translate("Gproduits", "MODIFIER", Q_NULLPTR));
        btn_sup_netoy->setText(QApplication::translate("Gproduits", "SUPPRIMER", Q_NULLPTR));
        quitter_netoy->setText(QApplication::translate("Gproduits", "Quitter", Q_NULLPTR));
        btn_cmd_netoy->setText(QApplication::translate("Gproduits", "Commandes", Q_NULLPTR));
        label_info_netoy->setText(QString());
        label_7->setText(QApplication::translate("Gproduits", "Recherche:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Gproduits", "Num:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Gproduits", "type de recherche:", Q_NULLPTR));
        comboBox_rech_netoy->clear();
        comboBox_rech_netoy->insertItems(0, QStringList()
         << QApplication::translate("Gproduits", "Numero ou Quantite", Q_NULLPTR)
         << QApplication::translate("Gproduits", "Nom", Q_NULLPTR)
         << QApplication::translate("Gproduits", "Reference", Q_NULLPTR)
        );
        scan_code->setText(QApplication::translate("Gproduits", "Scan", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_6), QApplication::translate("Gproduits", "GProduits", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_4), QApplication::translate("Gproduits", "GArticles", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_2), QApplication::translate("Gproduits", "GMateriels", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_3), QApplication::translate("Gproduits", "GClients", Q_NULLPTR));
        tab_employee_2->setTabText(tab_employee_2->indexOf(tab_5), QApplication::translate("Gproduits", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Gproduits: public Ui_Gproduits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPRODUITS_H
