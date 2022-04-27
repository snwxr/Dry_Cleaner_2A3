/********************************************************************************
** Form generated from reading UI file 'clients.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTS_H
#define UI_CLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clients
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *Clients_Management;
    QGroupBox *groupBox_OrderBy;
    QRadioButton *radioButton_Subscription;
    QRadioButton *radioButton_Names;
    QRadioButton *radioButton_Gender;
    QPushButton *pushButton_OK;
    QGroupBox *groupBox_ClientInfo;
    QPushButton *pushButton_Add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_FirstName;
    QLineEdit *lineEdit_LastName;
    QComboBox *comboBox_Gender;
    QLabel *label_4;
    QDateEdit *dateEdit_BirthDate;
    QPushButton *pushButton_modify;
    QLineEdit *lineEdit_CIN;
    QLabel *label_5;
    QPushButton *pushButton_delete;
    QLabel *label_6;
    QLineEdit *lineEdit_Adresse;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_SearchBar;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_Quit;
    QPushButton *pushButton_ShowAll;
    QTableView *tableView;
    QPushButton *pushButton_print;
    QPushButton *pushButton_Stats;
    QPushButton *pushButton_StatsNB;
    QPushButton *MAP;
    QLabel *label_info_client;
    QWidget *Clients_stats;
    QPushButton *pushButton_Quit_2;
    QLineEdit *Display;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Button0;
    QPushButton *Clear;
    QPushButton *Equals;
    QPushButton *Multiply;
    QPushButton *Button6;
    QPushButton *memClear;
    QPushButton *Button5;
    QPushButton *Button4;
    QPushButton *Add;
    QPushButton *Button3;
    QPushButton *memGet;
    QPushButton *Button2;
    QPushButton *Button1;
    QPushButton *Divide;
    QPushButton *Button9;
    QPushButton *memAdd;
    QPushButton *Button8;
    QPushButton *Button7;
    QPushButton *pushButton;
    QLabel *label_13;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *distance;
    QLabel *etat;
    QGroupBox *groupBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *distance_2;
    QLabel *etat_2;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *NumArticle;
    QLabel *EtatAticle;
    QLabel *label_info_securite;

    void setupUi(QDialog *Clients)
    {
        if (Clients->objectName().isEmpty())
            Clients->setObjectName(QStringLiteral("Clients"));
        Clients->resize(863, 620);
        Clients->setStyleSheet(QLatin1String("/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 50, 255),stop:1 rgba(47, 53, 74, 255));\n"
"	color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #c2c7d5;\n"
"	font-size: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgba(70, 255, 230, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	font-"
                        "size: 10px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid darkgray;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\");\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    border: 1px solid #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #08b099;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	c"
                        "olor: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/*-----QListView-----*/\n"
"QListView\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(50, 61, 80, 255),stop:1 rgba(44, 49, 69, 255));\n"
"	color: #fff;\n"
"	font-size: 12px;\n"
"	font-weight: bold;\n"
"	border: 1px solid #191919;\n"
"	show-decoration-selected: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"	border: none;\n"
"	padding: 5px;\n"
"	border-radius: 0px;\n"
"	padding-left : 10px;\n"
"	height: 42px;\n"
"\n"
"}\n"
"\n"
"QListView::item:selected\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected\n"
"{\n"
"	color:white;\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected:hover\n"
"{\n"
"	color: #bbbcba;\n"
"	background-color: #454e5e;\n"
""
                        "	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTreeView-----*/\n"
"QTreeView \n"
"{\n"
"	background-color: #232939;\n"
"	show-decoration-selected: 0;\n"
"	color: #c2c8d7;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item \n"
"{\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:hover \n"
"{\n"
"	background-color: #606060;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected:active\n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"{\n"
"	image: url(://tree-closed.png);\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"{\n"
"	image: url(://tree-open.png);\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTab"
                        "leView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #232939;\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #232939;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #606060;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"	background-color: #343a49;\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	color: #fff;\n"
"	border-top: 0px;\n"
"	border-bottom: 1px solid gray;\n"
"	"
                        "border-right: 1px solid gray;\n"
"	background-color: #343a49;\n"
"    margin-top:1px;\n"
"	margin-bottom:1px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    color: #fff;\n"
"    background-color: #0ab19a;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
""
                        "\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal \n"
"{\n"
"    background-color: transparent;\n"
"    height: 8px;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal \n"
"{\n"
"    border: none;\n"
"	min-width: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal, \n"
"QScrollBar::sub-line:horizontal,\n"
"QScrollBar::add-page:horizontal, \n"
"QScrollBar::sub-page:horizontal \n"
"{\n"
"    width: 0px;\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical \n"
"{\n"
"    background-color: transparent;\n"
"    width: 8px;\n"
"    margin: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical \n"
"{\n"
"    border: none;\n"
"	min-height: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical, \n"
"QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-page:vertical, \n"
"QScrollBar::sub-page:vertical \n"
"{\n"
"    height: 0px;\n"
"    backgro"
                        "und-color: transparent;\n"
"\n"
"}\n"
"QGroupBox  {\n"
"    border: 1px solid gray;\n"
"    border-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    margin-top: 27px;\n"
"    font-size: 14px;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px 8000px 5px 8000px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}\n"
"QComboBox {\n"
"    border: 2px solid grey;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background"
                        ": white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: white;\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 10px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(/us"
                        "r/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid gray;\n"
"    selection-background-color: lightgray;\n"
"}\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    border-bottom-color: #C2C7CB; /* same a"
                        "s the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    border-color:qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has noth"
                        "ing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
"QRadioButton{\n"
"\n"
"	color:white;\n"
"	font:solid;\n"
"}\n"
"QDateEdit\n"
"{\n"
"    background-color: white;\n"
"	border: 2px solid grey;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    spacing: 5px; \n"
"    min-width: 6em;\n"
"}\n"
"\n"
"\n"
"QDateEdit::drop-down {\n"
"    image: url(:/new/myapp/cbarrowdn.png);\n"
"    width:50px;\n"
"    height:15px;\n"
"    subcontrol-position: right top;\n"
"    subcontrol-origin:margin;\n"
"    background-color: white;\n"
"   	border: 2px solid grey;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    spacing: 5px; \n"
"    min-width: 6em;\n"
"   spacing: 5px; \n"
"}\n"
"QTableView {\n"
"    selection-background-color: qlineargradient(x1: 0, y1"
                        ": 0, x2: 0.5, y2: 0.5,\n"
"                                stop: 0 #FF92BB, stop: 1 white);\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    border: 2px outset white;\n"
"}\n"
"QTableView::indicator:unchecked {\n"
"    background-color: #d7d6d5\n"
"}\n"
""));
        tabWidget = new QTabWidget(Clients);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 40, 791, 581));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        Clients_Management = new QWidget();
        Clients_Management->setObjectName(QStringLiteral("Clients_Management"));
        groupBox_OrderBy = new QGroupBox(Clients_Management);
        groupBox_OrderBy->setObjectName(QStringLiteral("groupBox_OrderBy"));
        groupBox_OrderBy->setGeometry(QRect(660, 420, 120, 121));
        radioButton_Subscription = new QRadioButton(groupBox_OrderBy);
        radioButton_Subscription->setObjectName(QStringLiteral("radioButton_Subscription"));
        radioButton_Subscription->setGeometry(QRect(10, 40, 97, 20));
        radioButton_Subscription->setStyleSheet(QStringLiteral(""));
        radioButton_Names = new QRadioButton(groupBox_OrderBy);
        radioButton_Names->setObjectName(QStringLiteral("radioButton_Names"));
        radioButton_Names->setGeometry(QRect(10, 60, 97, 20));
        radioButton_Gender = new QRadioButton(groupBox_OrderBy);
        radioButton_Gender->setObjectName(QStringLiteral("radioButton_Gender"));
        radioButton_Gender->setGeometry(QRect(10, 80, 97, 20));
        pushButton_OK = new QPushButton(groupBox_OrderBy);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(30, 100, 62, 21));
        groupBox_ClientInfo = new QGroupBox(Clients_Management);
        groupBox_ClientInfo->setObjectName(QStringLiteral("groupBox_ClientInfo"));
        groupBox_ClientInfo->setGeometry(QRect(500, 60, 281, 291));
        pushButton_Add = new QPushButton(groupBox_ClientInfo);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(20, 260, 71, 21));
        label = new QLabel(groupBox_ClientInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 91, 16));
        label_2 = new QLabel(groupBox_ClientInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 91, 16));
        label_3 = new QLabel(groupBox_ClientInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 130, 56, 16));
        lineEdit_FirstName = new QLineEdit(groupBox_ClientInfo);
        lineEdit_FirstName->setObjectName(QStringLiteral("lineEdit_FirstName"));
        lineEdit_FirstName->setGeometry(QRect(120, 40, 141, 22));
        lineEdit_FirstName->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: white;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_LastName = new QLineEdit(groupBox_ClientInfo);
        lineEdit_LastName->setObjectName(QStringLiteral("lineEdit_LastName"));
        lineEdit_LastName->setGeometry(QRect(120, 70, 141, 22));
        comboBox_Gender = new QComboBox(groupBox_ClientInfo);
        comboBox_Gender->setObjectName(QStringLiteral("comboBox_Gender"));
        comboBox_Gender->setGeometry(QRect(120, 130, 141, 22));
        comboBox_Gender->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(groupBox_ClientInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 91, 16));
        dateEdit_BirthDate = new QDateEdit(groupBox_ClientInfo);
        dateEdit_BirthDate->setObjectName(QStringLiteral("dateEdit_BirthDate"));
        dateEdit_BirthDate->setGeometry(QRect(120, 160, 141, 41));
        dateEdit_BirthDate->setStyleSheet(QStringLiteral(""));
        pushButton_modify = new QPushButton(groupBox_ClientInfo);
        pushButton_modify->setObjectName(QStringLiteral("pushButton_modify"));
        pushButton_modify->setGeometry(QRect(100, 260, 81, 21));
        lineEdit_CIN = new QLineEdit(groupBox_ClientInfo);
        lineEdit_CIN->setObjectName(QStringLiteral("lineEdit_CIN"));
        lineEdit_CIN->setGeometry(QRect(120, 100, 141, 22));
        label_5 = new QLabel(groupBox_ClientInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 71, 16));
        pushButton_delete = new QPushButton(groupBox_ClientInfo);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(189, 260, 81, 21));
        label_6 = new QLabel(groupBox_ClientInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 71, 16));
        lineEdit_Adresse = new QLineEdit(groupBox_ClientInfo);
        lineEdit_Adresse->setObjectName(QStringLiteral("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(120, 210, 141, 22));
        label_7 = new QLabel(groupBox_ClientInfo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 210, 91, 16));
        label_8 = new QLabel(groupBox_ClientInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 230, 71, 16));
        lineEdit_SearchBar = new QLineEdit(Clients_Management);
        lineEdit_SearchBar->setObjectName(QStringLiteral("lineEdit_SearchBar"));
        lineEdit_SearchBar->setGeometry(QRect(110, 20, 361, 21));
        pushButton_Search = new QPushButton(Clients_Management);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));
        pushButton_Search->setGeometry(QRect(10, 20, 91, 21));
        pushButton_Quit = new QPushButton(Clients_Management);
        pushButton_Quit->setObjectName(QStringLiteral("pushButton_Quit"));
        pushButton_Quit->setGeometry(QRect(720, 20, 62, 21));
        pushButton_ShowAll = new QPushButton(Clients_Management);
        pushButton_ShowAll->setObjectName(QStringLiteral("pushButton_ShowAll"));
        pushButton_ShowAll->setGeometry(QRect(520, 520, 71, 21));
        tableView = new QTableView(Clients_Management);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(5, 60, 471, 441));
        pushButton_print = new QPushButton(Clients_Management);
        pushButton_print->setObjectName(QStringLiteral("pushButton_print"));
        pushButton_print->setGeometry(QRect(520, 470, 71, 21));
        pushButton_Stats = new QPushButton(Clients_Management);
        pushButton_Stats->setObjectName(QStringLiteral("pushButton_Stats"));
        pushButton_Stats->setGeometry(QRect(280, 510, 181, 31));
        pushButton_StatsNB = new QPushButton(Clients_Management);
        pushButton_StatsNB->setObjectName(QStringLiteral("pushButton_StatsNB"));
        pushButton_StatsNB->setGeometry(QRect(20, 510, 181, 31));
        MAP = new QPushButton(Clients_Management);
        MAP->setObjectName(QStringLiteral("MAP"));
        MAP->setGeometry(QRect(520, 420, 71, 21));
        label_info_client = new QLabel(Clients_Management);
        label_info_client->setObjectName(QStringLiteral("label_info_client"));
        label_info_client->setGeometry(QRect(480, 360, 331, 41));
        tabWidget->addTab(Clients_Management, QString());
        Clients_stats = new QWidget();
        Clients_stats->setObjectName(QStringLiteral("Clients_stats"));
        pushButton_Quit_2 = new QPushButton(Clients_stats);
        pushButton_Quit_2->setObjectName(QStringLiteral("pushButton_Quit_2"));
        pushButton_Quit_2->setGeometry(QRect(720, 20, 62, 21));
        Display = new QLineEdit(Clients_stats);
        Display->setObjectName(QStringLiteral("Display"));
        Display->setGeometry(QRect(10, 80, 781, 161));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ChangeSign = new QPushButton(Clients_stats);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        ChangeSign->setGeometry(QRect(300, 430, 93, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        Subtract = new QPushButton(Clients_stats);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        Subtract->setGeometry(QRect(420, 430, 93, 28));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Button0 = new QPushButton(Clients_stats);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setGeometry(QRect(180, 430, 93, 28));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Clear = new QPushButton(Clients_stats);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(60, 430, 93, 28));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Equals = new QPushButton(Clients_stats);
        Equals->setObjectName(QStringLiteral("Equals"));
        Equals->setGeometry(QRect(540, 430, 93, 28));
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setStyleSheet(QLatin1String("selection-background-color: rgb(255, 170, 0);\n"
"QPushButton {\n"
"     background-color: #ffaa00; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        Multiply = new QPushButton(Clients_stats);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        Multiply->setGeometry(QRect(420, 330, 93, 28));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Button6 = new QPushButton(Clients_stats);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setGeometry(QRect(300, 330, 93, 28));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        memClear = new QPushButton(Clients_stats);
        memClear->setObjectName(QStringLiteral("memClear"));
        memClear->setGeometry(QRect(540, 330, 93, 28));
        sizePolicy1.setHeightForWidth(memClear->sizePolicy().hasHeightForWidth());
        memClear->setSizePolicy(sizePolicy1);
        Button5 = new QPushButton(Clients_stats);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(180, 330, 93, 28));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button4 = new QPushButton(Clients_stats);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(60, 330, 93, 28));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Add = new QPushButton(Clients_stats);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(420, 380, 93, 28));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Button3 = new QPushButton(Clients_stats);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(300, 380, 93, 28));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        memGet = new QPushButton(Clients_stats);
        memGet->setObjectName(QStringLiteral("memGet"));
        memGet->setGeometry(QRect(540, 380, 93, 28));
        sizePolicy1.setHeightForWidth(memGet->sizePolicy().hasHeightForWidth());
        memGet->setSizePolicy(sizePolicy1);
        Button2 = new QPushButton(Clients_stats);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(180, 380, 93, 28));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button1 = new QPushButton(Clients_stats);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(60, 380, 93, 28));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Divide = new QPushButton(Clients_stats);
        Divide->setObjectName(QStringLiteral("Divide"));
        Divide->setGeometry(QRect(420, 280, 93, 28));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Button9 = new QPushButton(Clients_stats);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setGeometry(QRect(300, 280, 93, 28));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        memAdd = new QPushButton(Clients_stats);
        memAdd->setObjectName(QStringLiteral("memAdd"));
        memAdd->setGeometry(QRect(540, 280, 93, 28));
        sizePolicy1.setHeightForWidth(memAdd->sizePolicy().hasHeightForWidth());
        memAdd->setSizePolicy(sizePolicy1);
        Button8 = new QPushButton(Clients_stats);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setGeometry(QRect(180, 280, 93, 28));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button7 = new QPushButton(Clients_stats);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setGeometry(QRect(60, 280, 93, 28));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        pushButton = new QPushButton(Clients_stats);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 280, 93, 181));
        label_13 = new QLabel(Clients_stats);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(670, 340, 71, 20));
        tabWidget->addTab(Clients_stats, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 120, 201, 201));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 60, 81, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 130, 56, 16));
        distance = new QLabel(groupBox);
        distance->setObjectName(QStringLiteral("distance"));
        distance->setGeometry(QRect(120, 60, 56, 16));
        etat = new QLabel(groupBox);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(80, 130, 111, 20));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(250, 0, 201, 201));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 60, 81, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 130, 56, 16));
        distance_2 = new QLabel(groupBox_2);
        distance_2->setObjectName(QStringLiteral("distance_2"));
        distance_2->setGeometry(QRect(120, 60, 56, 16));
        etat_2 = new QLabel(groupBox_2);
        etat_2->setObjectName(QStringLiteral("etat_2"));
        etat_2->setGeometry(QRect(80, 130, 111, 20));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(369, 119, 181, 201));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 60, 81, 16));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 140, 56, 16));
        NumArticle = new QLabel(groupBox_3);
        NumArticle->setObjectName(QStringLiteral("NumArticle"));
        NumArticle->setGeometry(QRect(95, 60, 71, 31));
        EtatAticle = new QLabel(groupBox_3);
        EtatAticle->setObjectName(QStringLiteral("EtatAticle"));
        EtatAticle->setGeometry(QRect(85, 140, 81, 20));
        label_info_securite = new QLabel(tab);
        label_info_securite->setObjectName(QStringLiteral("label_info_securite"));
        label_info_securite->setGeometry(QRect(130, 350, 421, 41));
        tabWidget->addTab(tab, QString());

        retranslateUi(Clients);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Clients);
    } // setupUi

    void retranslateUi(QDialog *Clients)
    {
        Clients->setWindowTitle(QApplication::translate("Clients", "Clients Management", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Clients", "GEmployee", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Clients", "Gproduits", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Clients", "GArticles", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Clients", "GMateriels", Q_NULLPTR));
        groupBox_OrderBy->setTitle(QApplication::translate("Clients", "Ordonner Par:", Q_NULLPTR));
        radioButton_Subscription->setText(QApplication::translate("Clients", "Date Ajout", Q_NULLPTR));
        radioButton_Names->setText(QApplication::translate("Clients", "Nom", Q_NULLPTR));
        radioButton_Gender->setText(QApplication::translate("Clients", "Sexe", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("Clients", "OK", Q_NULLPTR));
        groupBox_ClientInfo->setTitle(QApplication::translate("Clients", "Tapez Les Info Du Clients", Q_NULLPTR));
        pushButton_Add->setText(QApplication::translate("Clients", "AJOUTER", Q_NULLPTR));
        label->setText(QApplication::translate("Clients", "Nom :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Clients", "Prenom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Clients", "Sexe :", Q_NULLPTR));
        comboBox_Gender->clear();
        comboBox_Gender->insertItems(0, QStringList()
         << QApplication::translate("Clients", "Man", Q_NULLPTR)
         << QApplication::translate("Clients", "Woman", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Clients", "Date De ", Q_NULLPTR));
        pushButton_modify->setText(QApplication::translate("Clients", "MODIFIER", Q_NULLPTR));
        label_5->setText(QApplication::translate("Clients", "CIN :", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("Clients", "SUPPRIMIER", Q_NULLPTR));
        label_6->setText(QApplication::translate("Clients", "Naissance :", Q_NULLPTR));
        label_7->setText(QApplication::translate("Clients", "Adresse :", Q_NULLPTR));
        label_8->setText(QApplication::translate("Clients", "(coordinate)", Q_NULLPTR));
        pushButton_Search->setText(QApplication::translate("Clients", "RECHERCHER", Q_NULLPTR));
        pushButton_Quit->setText(QApplication::translate("Clients", "EXIT", Q_NULLPTR));
        pushButton_ShowAll->setText(QApplication::translate("Clients", "Rafraichir", Q_NULLPTR));
        pushButton_print->setText(QApplication::translate("Clients", "Imprimer", Q_NULLPTR));
        pushButton_Stats->setText(QApplication::translate("Clients", "Statistiques Selon Le Sexe", Q_NULLPTR));
        pushButton_StatsNB->setText(QApplication::translate("Clients", "Statistiques Selon Les Ann\303\251es", Q_NULLPTR));
        MAP->setText(QApplication::translate("Clients", "MAP", Q_NULLPTR));
        label_info_client->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Clients_Management), QApplication::translate("Clients", "GClients", Q_NULLPTR));
        pushButton_Quit_2->setText(QApplication::translate("Clients", "EXIT", Q_NULLPTR));
        Display->setText(QApplication::translate("Clients", "0.0", Q_NULLPTR));
        ChangeSign->setText(QApplication::translate("Clients", "+/-", Q_NULLPTR));
        Subtract->setText(QApplication::translate("Clients", "-", Q_NULLPTR));
        Button0->setText(QApplication::translate("Clients", "0", Q_NULLPTR));
        Clear->setText(QApplication::translate("Clients", "AC", Q_NULLPTR));
        Equals->setText(QApplication::translate("Clients", "=", Q_NULLPTR));
        Multiply->setText(QApplication::translate("Clients", "*", Q_NULLPTR));
        Button6->setText(QApplication::translate("Clients", "6", Q_NULLPTR));
        memClear->setText(QApplication::translate("Clients", "M-", Q_NULLPTR));
        Button5->setText(QApplication::translate("Clients", "5", Q_NULLPTR));
        Button4->setText(QApplication::translate("Clients", "4", Q_NULLPTR));
        Add->setText(QApplication::translate("Clients", "+", Q_NULLPTR));
        Button3->setText(QApplication::translate("Clients", "3", Q_NULLPTR));
        memGet->setText(QApplication::translate("Clients", "M", Q_NULLPTR));
        Button2->setText(QApplication::translate("Clients", "2", Q_NULLPTR));
        Button1->setText(QApplication::translate("Clients", "1", Q_NULLPTR));
        Divide->setText(QApplication::translate("Clients", "/", Q_NULLPTR));
        Button9->setText(QApplication::translate("Clients", "9", Q_NULLPTR));
        memAdd->setText(QApplication::translate("Clients", "M+", Q_NULLPTR));
        Button8->setText(QApplication::translate("Clients", "8", Q_NULLPTR));
        Button7->setText(QApplication::translate("Clients", "7", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Clients", "Reduction ", Q_NULLPTR));
        label_13->setText(QApplication::translate("Clients", "Appliquer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Clients_stats), QApplication::translate("Clients", "Calcul", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Clients", "Capteur Distance", Q_NULLPTR));
        label_9->setText(QApplication::translate("Clients", "Distance (cm)", Q_NULLPTR));
        label_10->setText(QApplication::translate("Clients", "Etat", Q_NULLPTR));
        distance->setText(QString());
        etat->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Clients", "Capteur Distance", Q_NULLPTR));
        label_11->setText(QApplication::translate("Clients", "Distance (cm)", Q_NULLPTR));
        label_12->setText(QApplication::translate("Clients", "Etat", Q_NULLPTR));
        distance_2->setText(QString());
        etat_2->setText(QString());
        groupBox_3->setTitle(QApplication::translate("Clients", "Etat Commandes", Q_NULLPTR));
        label_14->setText(QApplication::translate("Clients", "Num Article :", Q_NULLPTR));
        label_15->setText(QApplication::translate("Clients", "Etat     :", Q_NULLPTR));
        NumArticle->setText(QString());
        EtatAticle->setText(QString());
        label_info_securite->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Clients", "S\303\251curit\303\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Clients: public Ui_Clients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTS_H
