/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *Login;
    QSplitter *splitter_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *l_username;
    QLineEdit *LE_user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_pass;
    QLineEdit *LE_pass;
    QPushButton *pb_login;
    QSplitter *splitter;
    QPushButton *pb_save;
    QPushButton *pb_load;
    QPushButton *pb_deletesaved;
    QWidget *Admin;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_barcodedelete;
    QLineEdit *LE_barcodedelete;
    QPushButton *pb_deletebook;
    QPushButton *pb_signout_admin;
    QGroupBox *groupBox;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_3;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *l_title;
    QLabel *l_filter;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *LE_titlesearchadmin;
    QComboBox *cb_filteradmin;
    QPushButton *pb_searchadmin;
    QGroupBox *groupBox_2;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *LE_titleadd;
    QLineEdit *LE_categoryadd;
    QLineEdit *LE_barcodewadd;
    QLineEdit *LE_authoradd;
    QPushButton *pb_addbook;
    QGroupBox *groupBox_4;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_13;
    QListWidget *listWidget_admin;
    QPushButton *pb_dataclear;
    QWidget *User;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QSplitter *splitter_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *l_title_2;
    QLabel *l_filter_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *LE_titlesearchuser;
    QComboBox *cb_filteruser;
    QPushButton *pb_searchuser;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_14;
    QListWidget *listWidget_user;
    QPushButton *pb_dataclear_2;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pb_signout;
    QPushButton *pb_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(891, 694);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        Login = new QWidget();
        Login->setObjectName("Login");
        splitter_2 = new QSplitter(Login);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(80, 220, 561, 191));
        splitter_2->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter_2);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l_username = new QLabel(widget);
        l_username->setObjectName("l_username");
        l_username->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(l_username);

        LE_user = new QLineEdit(widget);
        LE_user->setObjectName("LE_user");

        horizontalLayout->addWidget(LE_user);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        l_pass = new QLabel(widget);
        l_pass->setObjectName("l_pass");
        l_pass->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(l_pass);

        LE_pass = new QLineEdit(widget);
        LE_pass->setObjectName("LE_pass");

        horizontalLayout_2->addWidget(LE_pass);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pb_login = new QPushButton(widget);
        pb_login->setObjectName("pb_login");
        pb_login->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(pb_login);

        splitter_2->addWidget(widget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        pb_save = new QPushButton(splitter);
        pb_save->setObjectName("pb_save");
        pb_save->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        splitter->addWidget(pb_save);
        pb_load = new QPushButton(splitter);
        pb_load->setObjectName("pb_load");
        pb_load->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        splitter->addWidget(pb_load);
        pb_deletesaved = new QPushButton(splitter);
        pb_deletesaved->setObjectName("pb_deletesaved");
        pb_deletesaved->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        splitter->addWidget(pb_deletesaved);
        splitter_2->addWidget(splitter);
        tabWidget->addTab(Login, QString());
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        gridLayout = new QGridLayout(Admin);
        gridLayout->setObjectName("gridLayout");
        groupBox_3 = new QGroupBox(Admin);
        groupBox_3->setObjectName("groupBox_3");
        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 30, 421, 151));
        verticalLayout_15 = new QVBoxLayout(widget1);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        l_barcodedelete = new QLabel(widget1);
        l_barcodedelete->setObjectName("l_barcodedelete");
        l_barcodedelete->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(l_barcodedelete);

        LE_barcodedelete = new QLineEdit(widget1);
        LE_barcodedelete->setObjectName("LE_barcodedelete");

        horizontalLayout_4->addWidget(LE_barcodedelete);


        verticalLayout_9->addLayout(horizontalLayout_4);

        pb_deletebook = new QPushButton(widget1);
        pb_deletebook->setObjectName("pb_deletebook");
        pb_deletebook->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_9->addWidget(pb_deletebook);


        verticalLayout_15->addLayout(verticalLayout_9);

        pb_signout_admin = new QPushButton(widget1);
        pb_signout_admin->setObjectName("pb_signout_admin");
        pb_signout_admin->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_15->addWidget(pb_signout_admin);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(Admin);
        groupBox->setObjectName("groupBox");
        widget2 = new QWidget(groupBox);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(2, 31, 411, 131));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(widget2);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        widget3 = new QWidget(splitter_3);
        widget3->setObjectName("widget3");
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        l_title = new QLabel(widget3);
        l_title->setObjectName("l_title");
        l_title->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(l_title);

        l_filter = new QLabel(widget3);
        l_filter->setObjectName("l_filter");
        l_filter->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(l_filter);

        splitter_3->addWidget(widget3);
        widget4 = new QWidget(splitter_3);
        widget4->setObjectName("widget4");
        verticalLayout_4 = new QVBoxLayout(widget4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        LE_titlesearchadmin = new QLineEdit(widget4);
        LE_titlesearchadmin->setObjectName("LE_titlesearchadmin");

        verticalLayout_4->addWidget(LE_titlesearchadmin);

        cb_filteradmin = new QComboBox(widget4);
        cb_filteradmin->setObjectName("cb_filteradmin");

        verticalLayout_4->addWidget(cb_filteradmin);

        splitter_3->addWidget(widget4);

        verticalLayout_5->addWidget(splitter_3);

        pb_searchadmin = new QPushButton(widget2);
        pb_searchadmin->setObjectName("pb_searchadmin");
        pb_searchadmin->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(pb_searchadmin);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Admin);
        groupBox_2->setObjectName("groupBox_2");
        widget5 = new QWidget(groupBox_2);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(0, 30, 421, 155));
        verticalLayout_8 = new QVBoxLayout(widget5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label = new QLabel(widget5);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(widget5);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_2);

        label_3 = new QLabel(widget5);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_3);

        label_4 = new QLabel(widget5);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        LE_titleadd = new QLineEdit(widget5);
        LE_titleadd->setObjectName("LE_titleadd");

        verticalLayout_7->addWidget(LE_titleadd);

        LE_categoryadd = new QLineEdit(widget5);
        LE_categoryadd->setObjectName("LE_categoryadd");

        verticalLayout_7->addWidget(LE_categoryadd);

        LE_barcodewadd = new QLineEdit(widget5);
        LE_barcodewadd->setObjectName("LE_barcodewadd");

        verticalLayout_7->addWidget(LE_barcodewadd);

        LE_authoradd = new QLineEdit(widget5);
        LE_authoradd->setObjectName("LE_authoradd");

        verticalLayout_7->addWidget(LE_authoradd);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_3);

        pb_addbook = new QPushButton(widget5);
        pb_addbook->setObjectName("pb_addbook");
        pb_addbook->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(pb_addbook);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(Admin);
        groupBox_4->setObjectName("groupBox_4");
        widget6 = new QWidget(groupBox_4);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(0, 20, 421, 541));
        verticalLayout_13 = new QVBoxLayout(widget6);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        listWidget_admin = new QListWidget(widget6);
        listWidget_admin->setObjectName("listWidget_admin");

        verticalLayout_13->addWidget(listWidget_admin);

        pb_dataclear = new QPushButton(widget6);
        pb_dataclear->setObjectName("pb_dataclear");
        pb_dataclear->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_13->addWidget(pb_dataclear);


        gridLayout->addWidget(groupBox_4, 0, 1, 3, 1);

        tabWidget->addTab(Admin, QString());
        User = new QWidget();
        User->setObjectName("User");
        groupBox_5 = new QGroupBox(User);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 20, 423, 191));
        layoutWidget = new QWidget(groupBox_5);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(2, 31, 411, 121));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(layoutWidget);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        layoutWidget_2 = new QWidget(splitter_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        verticalLayout_11 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        l_title_2 = new QLabel(layoutWidget_2);
        l_title_2->setObjectName("l_title_2");
        l_title_2->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(l_title_2);

        l_filter_2 = new QLabel(layoutWidget_2);
        l_filter_2->setObjectName("l_filter_2");
        l_filter_2->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_11->addWidget(l_filter_2);

        splitter_4->addWidget(layoutWidget_2);
        layoutWidget_3 = new QWidget(splitter_4);
        layoutWidget_3->setObjectName("layoutWidget_3");
        verticalLayout_12 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        LE_titlesearchuser = new QLineEdit(layoutWidget_3);
        LE_titlesearchuser->setObjectName("LE_titlesearchuser");

        verticalLayout_12->addWidget(LE_titlesearchuser);

        cb_filteruser = new QComboBox(layoutWidget_3);
        cb_filteruser->setObjectName("cb_filteruser");

        verticalLayout_12->addWidget(cb_filteruser);

        splitter_4->addWidget(layoutWidget_3);

        verticalLayout_10->addWidget(splitter_4);

        pb_searchuser = new QPushButton(layoutWidget);
        pb_searchuser->setObjectName("pb_searchuser");
        pb_searchuser->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_10->addWidget(pb_searchuser);

        groupBox_6 = new QGroupBox(User);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(430, 10, 422, 585));
        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 20, 421, 541));
        verticalLayout_14 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        listWidget_user = new QListWidget(layoutWidget_4);
        listWidget_user->setObjectName("listWidget_user");

        verticalLayout_14->addWidget(listWidget_user);

        pb_dataclear_2 = new QPushButton(layoutWidget_4);
        pb_dataclear_2->setObjectName("pb_dataclear_2");
        pb_dataclear_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_14->addWidget(pb_dataclear_2);

        widget7 = new QWidget(User);
        widget7->setObjectName("widget7");
        widget7->setGeometry(QRect(30, 280, 371, 91));
        horizontalLayout_5 = new QHBoxLayout(widget7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pb_signout = new QPushButton(widget7);
        pb_signout->setObjectName("pb_signout");
        pb_signout->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pb_signout);

        pb_exit = new QPushButton(widget7);
        pb_exit->setObjectName("pb_exit");
        pb_exit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(85, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(pb_exit);

        tabWidget->addTab(User, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 891, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pb_dataclear_2, &QPushButton::clicked, listWidget_user, qOverload<>(&QListWidget::clear));
        QObject::connect(pb_dataclear, &QPushButton::clicked, listWidget_admin, qOverload<>(&QListWidget::clear));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        l_username->setText(QCoreApplication::translate("MainWindow", "User Name: ", nullptr));
        l_pass->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        pb_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pb_save->setText(QCoreApplication::translate("MainWindow", "Save User", nullptr));
        pb_load->setText(QCoreApplication::translate("MainWindow", "Load User", nullptr));
        pb_deletesaved->setText(QCoreApplication::translate("MainWindow", "Delete Saved", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Delete Book", nullptr));
        l_barcodedelete->setText(QCoreApplication::translate("MainWindow", "Barcode:", nullptr));
        pb_deletebook->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pb_signout_admin->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        l_title->setText(QCoreApplication::translate("MainWindow", "  Title", nullptr));
        l_filter->setText(QCoreApplication::translate("MainWindow", "  Filter", nullptr));
        pb_searchadmin->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Add Book", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  Title:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Category:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "  Barcode:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "  Author:", nullptr));
        pb_addbook->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Book Data", nullptr));
        pb_dataclear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Admin), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        l_title_2->setText(QCoreApplication::translate("MainWindow", "  Title", nullptr));
        l_filter_2->setText(QCoreApplication::translate("MainWindow", "  Filter", nullptr));
        pb_searchuser->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Book Data", nullptr));
        pb_dataclear_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pb_signout->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        pb_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(User), QCoreApplication::translate("MainWindow", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
