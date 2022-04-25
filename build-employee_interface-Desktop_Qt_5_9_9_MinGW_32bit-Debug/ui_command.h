/********************************************************************************
** Form generated from reading UI file 'command.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMAND_H
#define UI_COMMAND_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Command
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *tout_afficher_com;
    QPushButton *pdf_com;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *tri_id_com;
    QRadioButton *tri_nom_com;
    QRadioButton *tri_quantite_com;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_id_cmd;
    QLineEdit *line_nom_cmd;
    QLineEdit *line_quant_cmd;
    QComboBox *comboBox_etat_cmd;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ajout_cmd;
    QPushButton *btn_modif_cmd;
    QPushButton *btn_historique;
    QPushButton *btn_sup_cmd;
    QPushButton *quitter_cmd;
    QLabel *label_info_cmd;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_rech_com;
    QTableView *tabCommand;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_modif_cmd;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_rech_cmd;
    QWidget *tab_2;
    QTableWidget *tabhist;

    void setupUi(QDialog *Command)
    {
        if (Command->objectName().isEmpty())
            Command->setObjectName(QStringLiteral("Command"));
        Command->resize(1121, 612);
        Command->setStyleSheet(QLatin1String("QWidget\n"
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
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgba(70, 255, 2"
                        "30, 255));\n"
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
"QCheckBox::indicator:unchecked:hover\n"
"\n"
"{\n"
"\n"
"    border"
                        ": 1px solid #08b099;\n"
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
"	show-decoration-selected: 0;\n"
"\n"
"\n"
"\n"
"}\n"
""
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
"	color: #c2c8d7;\n"
"\n"
"\n"
""
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
"	image: url(://tree-open.png);\n"
"\n"
"\n"
""
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
"    border: 2px solid #525251;\n"
"\n"
"   "
                        " color: #656565;\n"
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
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""
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
"	min-width: 100px;\n"
"\n"
""
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
"QGroupBox  {\n"
"\n"
"    bo"
                        "rder: 1px solid gray;\n"
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
"    padding: 0 8px;\n"
"\n"
"    min-wid"
                        "th: 6em;\n"
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
"\n"
"    border-left-sty"
                        "le: solid; /* just a single line */\n"
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
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1"
                        ",\n"
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
"    border-bottom-color: #C2C7CB; /* same a"
                        "s pane color */\n"
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
"    background-color: white;\n"
"\n"
""
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
        tabWidget = new QTabWidget(Command);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 19, 1011, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 240, 481, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 441, 101));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tout_afficher_com = new QPushButton(layoutWidget);
        tout_afficher_com->setObjectName(QStringLiteral("tout_afficher_com"));

        verticalLayout_5->addWidget(tout_afficher_com);

        pdf_com = new QPushButton(layoutWidget);
        pdf_com->setObjectName(QStringLiteral("pdf_com"));

        verticalLayout_5->addWidget(pdf_com);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tri_id_com = new QRadioButton(layoutWidget);
        tri_id_com->setObjectName(QStringLiteral("tri_id_com"));

        verticalLayout_6->addWidget(tri_id_com);

        tri_nom_com = new QRadioButton(layoutWidget);
        tri_nom_com->setObjectName(QStringLiteral("tri_nom_com"));

        verticalLayout_6->addWidget(tri_nom_com);

        tri_quantite_com = new QRadioButton(layoutWidget);
        tri_quantite_com->setObjectName(QStringLiteral("tri_quantite_com"));

        verticalLayout_6->addWidget(tri_quantite_com);


        horizontalLayout_4->addLayout(verticalLayout_6);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(540, 150, 451, 241));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 411, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_id_cmd = new QLineEdit(layoutWidget1);
        line_id_cmd->setObjectName(QStringLiteral("line_id_cmd"));

        verticalLayout_2->addWidget(line_id_cmd);

        line_nom_cmd = new QLineEdit(layoutWidget1);
        line_nom_cmd->setObjectName(QStringLiteral("line_nom_cmd"));

        verticalLayout_2->addWidget(line_nom_cmd);

        line_quant_cmd = new QLineEdit(layoutWidget1);
        line_quant_cmd->setObjectName(QStringLiteral("line_quant_cmd"));

        verticalLayout_2->addWidget(line_quant_cmd);

        comboBox_etat_cmd = new QComboBox(layoutWidget1);
        comboBox_etat_cmd->setObjectName(QStringLiteral("comboBox_etat_cmd"));

        verticalLayout_2->addWidget(comboBox_etat_cmd);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_ajout_cmd = new QPushButton(layoutWidget1);
        btn_ajout_cmd->setObjectName(QStringLiteral("btn_ajout_cmd"));

        horizontalLayout_3->addWidget(btn_ajout_cmd);

        btn_modif_cmd = new QPushButton(layoutWidget1);
        btn_modif_cmd->setObjectName(QStringLiteral("btn_modif_cmd"));

        horizontalLayout_3->addWidget(btn_modif_cmd);

        btn_historique = new QPushButton(layoutWidget1);
        btn_historique->setObjectName(QStringLiteral("btn_historique"));

        horizontalLayout_3->addWidget(btn_historique);

        btn_sup_cmd = new QPushButton(layoutWidget1);
        btn_sup_cmd->setObjectName(QStringLiteral("btn_sup_cmd"));

        horizontalLayout_3->addWidget(btn_sup_cmd);


        verticalLayout_4->addLayout(horizontalLayout_3);

        quitter_cmd = new QPushButton(tab);
        quitter_cmd->setObjectName(QStringLiteral("quitter_cmd"));
        quitter_cmd->setGeometry(QRect(900, 10, 75, 51));
        label_info_cmd = new QLabel(tab);
        label_info_cmd->setObjectName(QStringLiteral("label_info_cmd"));
        label_info_cmd->setGeometry(QRect(50, 430, 941, 16));
        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 0, 481, 231));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        line_rech_com = new QLineEdit(layoutWidget2);
        line_rech_com->setObjectName(QStringLiteral("line_rech_com"));

        horizontalLayout->addWidget(line_rech_com);


        verticalLayout->addLayout(horizontalLayout);

        tabCommand = new QTableView(layoutWidget2);
        tabCommand->setObjectName(QStringLiteral("tabCommand"));

        verticalLayout->addWidget(tabCommand);

        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(540, 90, 238, 56));
        verticalLayout_7 = new QVBoxLayout(layoutWidget3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_modif_cmd = new QComboBox(layoutWidget3);
        comboBox_modif_cmd->setObjectName(QStringLiteral("comboBox_modif_cmd"));

        horizontalLayout_5->addWidget(comboBox_modif_cmd);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_rech_cmd = new QComboBox(layoutWidget3);
        comboBox_rech_cmd->setObjectName(QStringLiteral("comboBox_rech_cmd"));

        horizontalLayout_6->addWidget(comboBox_rech_cmd);


        verticalLayout_7->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabhist = new QTableWidget(tab_2);
        tabhist->setObjectName(QStringLiteral("tabhist"));
        tabhist->setGeometry(QRect(70, 40, 831, 321));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Command);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Command);
    } // setupUi

    void retranslateUi(QDialog *Command)
    {
        Command->setWindowTitle(QApplication::translate("Command", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Command", "GroupBox", Q_NULLPTR));
        tout_afficher_com->setText(QApplication::translate("Command", "TOUT AFFICHER", Q_NULLPTR));
        pdf_com->setText(QApplication::translate("Command", "PDF", Q_NULLPTR));
        tri_id_com->setText(QApplication::translate("Command", "ID", Q_NULLPTR));
        tri_nom_com->setText(QApplication::translate("Command", "Nom", Q_NULLPTR));
        tri_quantite_com->setText(QApplication::translate("Command", "Quantite", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Command", "GroupBox", Q_NULLPTR));
        label_2->setText(QApplication::translate("Command", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("Command", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("Command", "Quantite", Q_NULLPTR));
        label_5->setText(QApplication::translate("Command", "Etat", Q_NULLPTR));
        comboBox_etat_cmd->clear();
        comboBox_etat_cmd->insertItems(0, QStringList()
         << QApplication::translate("Command", "non delivree", Q_NULLPTR)
         << QApplication::translate("Command", "delivree", Q_NULLPTR)
        );
        btn_ajout_cmd->setText(QApplication::translate("Command", "AJOUTER", Q_NULLPTR));
        btn_modif_cmd->setText(QApplication::translate("Command", "MODIFIER", Q_NULLPTR));
        btn_historique->setText(QApplication::translate("Command", "HISTORIQUE", Q_NULLPTR));
        btn_sup_cmd->setText(QApplication::translate("Command", "SUPPRIMER", Q_NULLPTR));
        quitter_cmd->setText(QApplication::translate("Command", "QUITTER", Q_NULLPTR));
        label_info_cmd->setText(QString());
        label->setText(QApplication::translate("Command", "Recherche:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Command", "ID:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Command", "Type de recherche:", Q_NULLPTR));
        comboBox_rech_cmd->clear();
        comboBox_rech_cmd->insertItems(0, QStringList()
         << QApplication::translate("Command", "id ou quantite", Q_NULLPTR)
         << QApplication::translate("Command", "nom", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Command", "Command", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Command", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Command: public Ui_Command {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMAND_H
