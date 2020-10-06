/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_BShelfs;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget_BShelfs;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_addBookShelf;
    QPushButton *pushButton_delBookShelf;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_shelfs;
    QVBoxLayout *verticalLayout_5;
    QListWidget *listWidget_shelfs;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_addShelf;
    QPushButton *pushButton_delShelf;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_books;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget_books;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_author;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_;
    QSpinBox *spinBox_Pages;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_addBook;
    QPushButton *pushButton_delBook;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_BShelfs = new QGroupBox(centralwidget);
        groupBox_BShelfs->setObjectName(QString::fromUtf8("groupBox_BShelfs"));
        verticalLayout_4 = new QVBoxLayout(groupBox_BShelfs);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        listWidget_BShelfs = new QListWidget(groupBox_BShelfs);
        listWidget_BShelfs->setObjectName(QString::fromUtf8("listWidget_BShelfs"));

        verticalLayout_4->addWidget(listWidget_BShelfs);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_addBookShelf = new QPushButton(groupBox_BShelfs);
        pushButton_addBookShelf->setObjectName(QString::fromUtf8("pushButton_addBookShelf"));

        horizontalLayout_3->addWidget(pushButton_addBookShelf);

        pushButton_delBookShelf = new QPushButton(groupBox_BShelfs);
        pushButton_delBookShelf->setObjectName(QString::fromUtf8("pushButton_delBookShelf"));

        horizontalLayout_3->addWidget(pushButton_delBookShelf);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_BShelfs);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_shelfs = new QGroupBox(centralwidget);
        groupBox_shelfs->setObjectName(QString::fromUtf8("groupBox_shelfs"));
        verticalLayout_5 = new QVBoxLayout(groupBox_shelfs);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        listWidget_shelfs = new QListWidget(groupBox_shelfs);
        listWidget_shelfs->setObjectName(QString::fromUtf8("listWidget_shelfs"));

        verticalLayout_5->addWidget(listWidget_shelfs);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_addShelf = new QPushButton(groupBox_shelfs);
        pushButton_addShelf->setObjectName(QString::fromUtf8("pushButton_addShelf"));

        horizontalLayout_4->addWidget(pushButton_addShelf);

        pushButton_delShelf = new QPushButton(groupBox_shelfs);
        pushButton_delShelf->setObjectName(QString::fromUtf8("pushButton_delShelf"));

        horizontalLayout_4->addWidget(pushButton_delShelf);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_shelfs);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_books = new QGroupBox(centralwidget);
        groupBox_books->setObjectName(QString::fromUtf8("groupBox_books"));
        verticalLayout_6 = new QVBoxLayout(groupBox_books);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        listWidget_books = new QListWidget(groupBox_books);
        listWidget_books->setObjectName(QString::fromUtf8("listWidget_books"));

        verticalLayout_6->addWidget(listWidget_books);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        verticalLayout_6->addLayout(horizontalLayout_6);

        label = new QLabel(groupBox_books);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_6->addWidget(label);

        lineEdit_author = new QLineEdit(groupBox_books);
        lineEdit_author->setObjectName(QString::fromUtf8("lineEdit_author"));

        verticalLayout_6->addWidget(lineEdit_author);

        label_2 = new QLabel(groupBox_books);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_6->addWidget(label_2);

        lineEdit_name = new QLineEdit(groupBox_books);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        verticalLayout_6->addWidget(lineEdit_name);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_ = new QLabel(groupBox_books);
        label_->setObjectName(QString::fromUtf8("label_"));

        horizontalLayout_5->addWidget(label_);

        spinBox_Pages = new QSpinBox(groupBox_books);
        spinBox_Pages->setObjectName(QString::fromUtf8("spinBox_Pages"));

        horizontalLayout_5->addWidget(spinBox_Pages);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_addBook = new QPushButton(groupBox_books);
        pushButton_addBook->setObjectName(QString::fromUtf8("pushButton_addBook"));

        horizontalLayout_7->addWidget(pushButton_addBook);

        pushButton_delBook = new QPushButton(groupBox_books);
        pushButton_delBook->setObjectName(QString::fromUtf8("pushButton_delBook"));

        horizontalLayout_7->addWidget(pushButton_delBook);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(groupBox_books);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260", nullptr));
        groupBox_BShelfs->setTitle(QCoreApplication::translate("MainWindow", "\320\250\320\272\320\260\321\204\321\213", nullptr));
        pushButton_addBookShelf->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delBookShelf->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_shelfs->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\272\320\270", nullptr));
        pushButton_addShelf->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delShelf->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_books->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\321\213", nullptr));
        pushButton_addBook->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_delBook->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
