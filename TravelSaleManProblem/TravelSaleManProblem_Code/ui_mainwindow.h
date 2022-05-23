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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *OpenFileAction;
    QAction *SaveFileAction;
    QAction *SaveFileAsAction;
    QAction *QuitAppAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddVertexPushButton;
    QPushButton *EditVertexPushButton;
    QPushButton *DeleteVertexPushButton;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *GotRouteLabel;
    QLineEdit *GotRouteLineEdit;
    QLabel *GotRouteLengthLabel;
    QLineEdit *GotRouteLengthLineEdit;
    QVBoxLayout *GraphicsLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 618);
        MainWindow->setMinimumSize(QSize(1000, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #00FA9A, stop:1 #90EE90);\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: #7EDFFF;\n"
"border: 2px solid #71BFFF;\n"
"border-radius: 4px;\n"
"\n"
"padding: 6px;\n"
"margin-bottom: 4px;\n"
"}\n"
"\n"
"QLabel, QPushButton, QLineEdit {\n"
"font-size: 16px;\n"
"font-family: \"segoe ui semibold\";\n"
"color: darkblue;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QLabel {\n"
"margin-bottom: 4px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color: #90EE90;\n"
"border: 2px solid #71BFFF;\n"
"padding: 4px;\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover, QLineEdit:hover {\n"
"border: 3px solid #558FCC;\n"
"font-size: 17px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover { background-color: #84F4FF; }"));
        OpenFileAction = new QAction(MainWindow);
        OpenFileAction->setObjectName(QString::fromUtf8("OpenFileAction"));
        SaveFileAction = new QAction(MainWindow);
        SaveFileAction->setObjectName(QString::fromUtf8("SaveFileAction"));
        SaveFileAsAction = new QAction(MainWindow);
        SaveFileAsAction->setObjectName(QString::fromUtf8("SaveFileAsAction"));
        QuitAppAction = new QAction(MainWindow);
        QuitAppAction->setObjectName(QString::fromUtf8("QuitAppAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AddVertexPushButton = new QPushButton(centralwidget);
        AddVertexPushButton->setObjectName(QString::fromUtf8("AddVertexPushButton"));
        AddVertexPushButton->setMaximumSize(QSize(16777215, 16777215));
        AddVertexPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   -webkit-border-radius: 20px;\n"
"   -moz-border-radius: 20px;\n"
"   border-radius: 20px;\n"
"   color: #000000;\n"
"   font-family: Brush Script MT;\n"
"   font-size: 19px;\n"
"   font-weight: 200;\n"
"   padding: 10px;\n"
"   background-color: #E0FFFF;\n"
"   -webkit-box-shadow: 1px 1px 20px 0 #000000;\n"
"   -moz-box-shadow: 1px 1px 20px 0 #000000;\n"
"   box-shadow: 1px 1px 20px 0 #000000;\n"
"   text-shadow: 1px 1px 20px #000000;\n"
"   border: solid #337FED 1px;\n"
"   text-decoration: none;\n"
"   display: inline-block;\n"
"   cursor: pointer;\n"
"   text-align: center;\n"
"}"));

        verticalLayout_2->addWidget(AddVertexPushButton, 0, Qt::AlignTop);

        EditVertexPushButton = new QPushButton(centralwidget);
        EditVertexPushButton->setObjectName(QString::fromUtf8("EditVertexPushButton"));
        EditVertexPushButton->setMaximumSize(QSize(16777215, 16777215));
        EditVertexPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   -webkit-border-radius: 20px;\n"
"   -moz-border-radius: 20px;\n"
"   border-radius: 20px;\n"
"   color: #000000;\n"
"   font-family: Brush Script MT;\n"
"   font-size: 19px;\n"
"   font-weight: 200;\n"
"   padding: 10px;\n"
"   background-color: #E0FFFF;\n"
"   -webkit-box-shadow: 1px 1px 20px 0 #000000;\n"
"   -moz-box-shadow: 1px 1px 20px 0 #000000;\n"
"   box-shadow: 1px 1px 20px 0 #000000;\n"
"   text-shadow: 1px 1px 20px #000000;\n"
"   border: solid #337FED 1px;\n"
"   text-decoration: none;\n"
"   display: inline-block;\n"
"   cursor: pointer;\n"
"   text-align: center;\n"
"}"));

        verticalLayout_2->addWidget(EditVertexPushButton, 0, Qt::AlignTop);

        DeleteVertexPushButton = new QPushButton(centralwidget);
        DeleteVertexPushButton->setObjectName(QString::fromUtf8("DeleteVertexPushButton"));
        DeleteVertexPushButton->setMaximumSize(QSize(16777215, 16777215));
        DeleteVertexPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   -webkit-border-radius: 20px;\n"
"   -moz-border-radius: 20px;\n"
"   border-radius: 20px;\n"
"   color: #000000;\n"
"   font-family: Brush Script MT;\n"
"   font-size: 19px;\n"
"   font-weight: 200;\n"
"   padding: 10px;\n"
"   background-color: #E0FFFF;\n"
"   -webkit-box-shadow: 1px 1px 20px 0 #000000;\n"
"   -moz-box-shadow: 1px 1px 20px 0 #000000;\n"
"   box-shadow: 1px 1px 20px 0 #000000;\n"
"   text-shadow: 1px 1px 20px #000000;\n"
"   border: solid #337FED 1px;\n"
"   text-decoration: none;\n"
"   display: inline-block;\n"
"   cursor: pointer;\n"
"   text-align: center;\n"
"}"));

        verticalLayout_2->addWidget(DeleteVertexPushButton, 0, Qt::AlignTop);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   -webkit-border-radius: 20px;\n"
"   -moz-border-radius: 20px;\n"
"   border-radius: 20px;\n"
"   color: #000000;\n"
"   font-family: Brush Script MT;\n"
"   font-size: 19px;\n"
"   font-weight: 200;\n"
"   padding: 10px;\n"
"   background-color: #E0FFFF;\n"
"   -webkit-box-shadow: 1px 1px 20px 0 #000000;\n"
"   -moz-box-shadow: 1px 1px 20px 0 #000000;\n"
"   box-shadow: 1px 1px 20px 0 #000000;\n"
"   text-shadow: 1px 1px 20px #000000;\n"
"   border: solid #337FED 1px;\n"
"   text-decoration: none;\n"
"   display: inline-block;\n"
"   cursor: pointer;\n"
"   text-align: center;\n"
"}"));

        verticalLayout_2->addWidget(pushButton);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border: 0px;"));
        plainTextEdit->setBackgroundVisible(true);

        verticalLayout_2->addWidget(plainTextEdit);

        GotRouteLabel = new QLabel(centralwidget);
        GotRouteLabel->setObjectName(QString::fromUtf8("GotRouteLabel"));
        GotRouteLabel->setStyleSheet(QString::fromUtf8("margin-top: 20px;\n"
"color:black;"));

        verticalLayout_2->addWidget(GotRouteLabel);

        GotRouteLineEdit = new QLineEdit(centralwidget);
        GotRouteLineEdit->setObjectName(QString::fromUtf8("GotRouteLineEdit"));
        GotRouteLineEdit->setStyleSheet(QString::fromUtf8("margin-bottom: 0px;\n"
"background-color:#E0FFFF;"));
        GotRouteLineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(GotRouteLineEdit);

        GotRouteLengthLabel = new QLabel(centralwidget);
        GotRouteLengthLabel->setObjectName(QString::fromUtf8("GotRouteLengthLabel"));
        GotRouteLengthLabel->setStyleSheet(QString::fromUtf8("margin-top: 10px;\n"
"color:black;"));

        verticalLayout_2->addWidget(GotRouteLengthLabel);

        GotRouteLengthLineEdit = new QLineEdit(centralwidget);
        GotRouteLengthLineEdit->setObjectName(QString::fromUtf8("GotRouteLengthLineEdit"));
        GotRouteLengthLineEdit->setStyleSheet(QString::fromUtf8("margin-bottom: 0px;\n"
"background-color:#E0FFFF;"));
        GotRouteLengthLineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(GotRouteLengthLineEdit);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        GraphicsLayout = new QVBoxLayout();
        GraphicsLayout->setObjectName(QString::fromUtf8("GraphicsLayout"));

        formLayout->setLayout(0, QFormLayout::FieldRole, GraphicsLayout);


        horizontalLayout->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\262\320\276\321\200\321\207\320\265\321\201\320\272\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260, \321\207.2: \320\267\320\260\320\264\320\260\321\207\320\260 \320\272\320\276\320\274\320\274\320\270\320\262\320\276\321\217\320\266\320\265\321\200\320\260", nullptr));
        OpenFileAction->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        OpenFileAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \321\201 \320\274\320\260\321\202\321\200\320\270\321\206\320\265\320\271 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \320\263\321\200\320\260\321\204\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        SaveFileAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        SaveFileAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \320\262 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
        SaveFileAsAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
#if QT_CONFIG(tooltip)
        SaveFileAsAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\203\321\211\321\203\321\216 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270 \320\262 \320\275\320\276\320\262\320\276\320\274 \321\204\320\260\320\271\320\273\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        QuitAppAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        QuitAppAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217, \320\262\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        AddVertexPushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        EditVertexPushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        DeleteVertexPushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        GotRouteLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213 \320\272\320\276\320\274\320\274\320\270\320\262\320\276\321\217\320\266\320\265\321\200\320\260", nullptr));
        GotRouteLineEdit->setText(QString());
        GotRouteLengthLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\277\321\203\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
