/********************************************************************************
** Form generated from reading UI file 'gmat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMAT_H
#define UI_GMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gmat
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QWidget *tab_3;
    QWidget *tab;
    QWidget *Gclient;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *line_rech_mat;
    QTableView *tab_mat;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pdfmat;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_5;
    QPushButton *btn_tri_mat;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *id_mat;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nom_mat;
    QVBoxLayout *verticalLayout_2;
    QComboBox *etat_mat;
    QComboBox *gamme_mat;
    QComboBox *type_mat;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ajout_mat;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *modif_mat;
    QPushButton *supp_mat;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_11;
    QPushButton *pushButton_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *comboBox_modif_mat;
    QPushButton *pushButton_3;
    QLabel *label_info_mat;
    QWidget *tab_5;
    QWidget *tab_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *server;
    QLineEdit *port;
    QLineEdit *uname;
    QLineEdit *paswd;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QPushButton *pushButton;
    QTextEdit *msg;

    void setupUi(QDialog *gmat)
    {
        if (gmat->objectName().isEmpty())
            gmat->setObjectName(QStringLiteral("gmat"));
        gmat->resize(861, 530);
        tabWidget = new QTabWidget(gmat);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 861, 531));
        tabWidget->setStyleSheet(QLatin1String("/*-----QWidget-----*/\n"
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
"QTextEdit { color: white }\n"
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
""
                        "	show-decoration-selected: 0;\n"
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
"	show-decoratio"
                        "n-selected: 0;\n"
"\n"
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
""
                        "{\n"
"\n"
"	image: url(://tree-open.png);\n"
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
"    background-color: #1a1b"
                        "1c;\n"
"\n"
"    border: 2px solid #525251;\n"
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
"    background-"
                        "color: #525251;\n"
"\n"
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
""
                        "    border: none;\n"
"\n"
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
""
                        "\n"
"\n"
"\n"
"}\n"
"\n"
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
"    border-radius: 1"
                        "0px;\n"
"\n"
"    padding: 0 8px;\n"
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
"    bor"
                        "der-left-color: darkgray;\n"
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
"    "
                        "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
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
"    border-color:qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255))"
                        ";\n"
"\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
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
""
                        "\n"
"{\n"
"\n"
"    background-color: white;\n"
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
"}\n"
"\n"
""));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        Gclient = new QWidget();
        Gclient->setObjectName(QStringLiteral("Gclient"));
        layoutWidget = new QWidget(Gclient);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 11, 371, 438));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        line_rech_mat = new QLineEdit(layoutWidget);
        line_rech_mat->setObjectName(QStringLiteral("line_rech_mat"));

        horizontalLayout_5->addWidget(line_rech_mat);


        verticalLayout_6->addLayout(horizontalLayout_5);

        tab_mat = new QTableView(layoutWidget);
        tab_mat->setObjectName(QStringLiteral("tab_mat"));
        tab_mat->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(tab_mat);


        verticalLayout_10->addLayout(verticalLayout_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        pdfmat = new QPushButton(layoutWidget);
        pdfmat->setObjectName(QStringLiteral("pdfmat"));

        verticalLayout_9->addWidget(pdfmat);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_9->addWidget(pushButton_9);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_8->addWidget(pushButton_5);

        btn_tri_mat = new QPushButton(layoutWidget);
        btn_tri_mat->setObjectName(QStringLiteral("btn_tri_mat"));

        verticalLayout_8->addWidget(btn_tri_mat);


        horizontalLayout_6->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_6);

        layoutWidget1 = new QWidget(Gclient);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 120, 421, 271));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        id_mat = new QLineEdit(layoutWidget1);
        id_mat->setObjectName(QStringLiteral("id_mat"));

        horizontalLayout->addWidget(id_mat);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        nom_mat = new QLineEdit(layoutWidget1);
        nom_mat->setObjectName(QStringLiteral("nom_mat"));

        horizontalLayout_2->addWidget(nom_mat);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        etat_mat = new QComboBox(layoutWidget1);
        etat_mat->setObjectName(QStringLiteral("etat_mat"));
        etat_mat->setEditable(true);

        verticalLayout_2->addWidget(etat_mat);

        gamme_mat = new QComboBox(layoutWidget1);
        gamme_mat->setObjectName(QStringLiteral("gamme_mat"));
        gamme_mat->setEditable(true);

        verticalLayout_2->addWidget(gamme_mat);

        type_mat = new QComboBox(layoutWidget1);
        type_mat->setObjectName(QStringLiteral("type_mat"));
        type_mat->setEditable(true);

        verticalLayout_2->addWidget(type_mat);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ajout_mat = new QPushButton(layoutWidget1);
        ajout_mat->setObjectName(QStringLiteral("ajout_mat"));

        horizontalLayout_3->addWidget(ajout_mat);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        modif_mat = new QPushButton(layoutWidget1);
        modif_mat->setObjectName(QStringLiteral("modif_mat"));

        horizontalLayout_4->addWidget(modif_mat);

        supp_mat = new QPushButton(layoutWidget1);
        supp_mat->setObjectName(QStringLiteral("supp_mat"));

        horizontalLayout_4->addWidget(supp_mat);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget2 = new QWidget(Gclient);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(670, 10, 151, 56));
        verticalLayout_11 = new QVBoxLayout(layoutWidget2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_11->addWidget(pushButton_4);

        layoutWidget3 = new QWidget(Gclient);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(430, 10, 182, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        comboBox_modif_mat = new QComboBox(layoutWidget3);
        comboBox_modif_mat->setObjectName(QStringLiteral("comboBox_modif_mat"));

        horizontalLayout_7->addWidget(comboBox_modif_mat);

        pushButton_3 = new QPushButton(Gclient);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 470, 93, 28));
        label_info_mat = new QLabel(Gclient);
        label_info_mat->setObjectName(QStringLiteral("label_info_mat"));
        label_info_mat->setGeometry(QRect(400, 400, 401, 31));
        tabWidget->addTab(Gclient, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 110, 56, 16));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 140, 56, 16));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 170, 56, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 200, 56, 16));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 230, 56, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 80, 56, 16));
        server = new QLineEdit(tab_2);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(190, 80, 113, 22));
        port = new QLineEdit(tab_2);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(190, 110, 113, 22));
        uname = new QLineEdit(tab_2);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(190, 140, 113, 22));
        paswd = new QLineEdit(tab_2);
        paswd->setObjectName(QStringLiteral("paswd"));
        paswd->setGeometry(QRect(190, 170, 113, 22));
        rcpt = new QLineEdit(tab_2);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(190, 200, 113, 22));
        subject = new QLineEdit(tab_2);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(190, 230, 113, 22));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 380, 93, 28));
        msg = new QTextEdit(tab_2);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(80, 286, 391, 181));
        msg->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(gmat);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(gmat);
    } // setupUi

    void retranslateUi(QDialog *gmat)
    {
        gmat->setWindowTitle(QApplication::translate("gmat", "Dialog", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("gmat", "Gemployee", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gmat", "GProduits", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gmat", "GArticles", Q_NULLPTR));
        label_3->setText(QApplication::translate("gmat", "search", Q_NULLPTR));
        pdfmat->setText(QApplication::translate("gmat", "print", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("gmat", "excel", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gmat", "show all", Q_NULLPTR));
        btn_tri_mat->setText(QApplication::translate("gmat", "tri", Q_NULLPTR));
        label->setText(QApplication::translate("gmat", "id_mat", Q_NULLPTR));
        label_2->setText(QApplication::translate("gmat", "name_mat", Q_NULLPTR));
        etat_mat->clear();
        etat_mat->insertItems(0, QStringList()
         << QApplication::translate("gmat", "etat", Q_NULLPTR)
         << QApplication::translate("gmat", "a reparer", Q_NULLPTR)
         << QApplication::translate("gmat", "en utilisation ", Q_NULLPTR)
         << QApplication::translate("gmat", "libre", Q_NULLPTR)
        );
        etat_mat->setCurrentText(QApplication::translate("gmat", "etat", Q_NULLPTR));
        gamme_mat->clear();
        gamme_mat->insertItems(0, QStringList()
         << QApplication::translate("gmat", "gamme", Q_NULLPTR)
         << QApplication::translate("gmat", "bas ", Q_NULLPTR)
         << QApplication::translate("gmat", "milieu ", Q_NULLPTR)
         << QApplication::translate("gmat", "haut", Q_NULLPTR)
        );
        gamme_mat->setCurrentText(QApplication::translate("gmat", "gamme", Q_NULLPTR));
        type_mat->clear();
        type_mat->insertItems(0, QStringList()
         << QApplication::translate("gmat", "type", Q_NULLPTR)
         << QApplication::translate("gmat", "Table \303\240 repasser", Q_NULLPTR)
         << QApplication::translate("gmat", "Cabine de d\303\251tachage", Q_NULLPTR)
         << QApplication::translate("gmat", "Mannequin de repassage", Q_NULLPTR)
         << QApplication::translate("gmat", "S\303\251cheuse-repasseuse", Q_NULLPTR)
         << QApplication::translate("gmat", "S\303\251choir \303\251lectrique", Q_NULLPTR)
         << QApplication::translate("gmat", "Machine \303\240 laver", Q_NULLPTR)
         << QApplication::translate("gmat", "fer a repasser", Q_NULLPTR)
        );
        type_mat->setCurrentText(QApplication::translate("gmat", "type", Q_NULLPTR));
        ajout_mat->setText(QApplication::translate("gmat", "add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gmat", "search", Q_NULLPTR));
        modif_mat->setText(QApplication::translate("gmat", "modify", Q_NULLPTR));
        supp_mat->setText(QApplication::translate("gmat", "supprimer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gmat", "Quit", Q_NULLPTR));
        label_4->setText(QApplication::translate("gmat", "id_mat", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gmat", "porte", Q_NULLPTR));
        label_info_mat->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Gclient), QApplication::translate("gmat", "GMateriels", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gmat", "GClients", Q_NULLPTR));
        label_5->setText(QApplication::translate("gmat", "server port", Q_NULLPTR));
        label_6->setText(QApplication::translate("gmat", "username", Q_NULLPTR));
        label_7->setText(QApplication::translate("gmat", "password", Q_NULLPTR));
        label_8->setText(QApplication::translate("gmat", "to", Q_NULLPTR));
        label_9->setText(QApplication::translate("gmat", "subject", Q_NULLPTR));
        label_10->setText(QApplication::translate("gmat", "smtp-server", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gmat", "send", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gmat", "mail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gmat: public Ui_gmat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMAT_H
