/********************************************************************************
** Form generated from reading UI file 'editvertexdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITVERTEXDIALOG_H
#define UI_EDITVERTEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditVertexDialog
{
public:
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QPushButton *CancelPushButton;
    QPushButton *ApplyPushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *EditVertexDialog)
    {
        if (EditVertexDialog->objectName().isEmpty())
            EditVertexDialog->setObjectName(QString::fromUtf8("EditVertexDialog"));
        EditVertexDialog->resize(313, 215);
        EditVertexDialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #00FA9A, stop:1 #90EE90);\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: #E0FFFF;\n"
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
"color:black;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QLabel {\n"
"margin-bottom: 4px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color: #8FBC8F;\n"
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
        lineEdit = new QLineEdit(EditVertexDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 50, 71, 41));
        label_3 = new QLabel(EditVertexDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 41, 21));
        label_2 = new QLabel(EditVertexDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 110, 101, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("segoe ui semibold"));
        label_2->setFont(font);
        label_5 = new QLabel(EditVertexDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 291, 31));
        label = new QLabel(EditVertexDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 91, 21));
        CancelPushButton = new QPushButton(EditVertexDialog);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));
        CancelPushButton->setGeometry(QRect(210, 160, 81, 41));
        ApplyPushButton = new QPushButton(EditVertexDialog);
        ApplyPushButton->setObjectName(QString::fromUtf8("ApplyPushButton"));
        ApplyPushButton->setGeometry(QRect(120, 160, 81, 41));
        lineEdit_3 = new QLineEdit(EditVertexDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 50, 71, 41));
        lineEdit_4 = new QLineEdit(EditVertexDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 100, 71, 41));
        lineEdit_2 = new QLineEdit(EditVertexDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 100, 71, 41));
        label_4 = new QLabel(EditVertexDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 41, 21));
        pushButton = new QPushButton(EditVertexDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 160, 101, 41));

        retranslateUi(EditVertexDialog);

        QMetaObject::connectSlotsByName(EditVertexDialog);
    } // setupUi

    void retranslateUi(QDialog *EditVertexDialog)
    {
        EditVertexDialog->setWindowTitle(QCoreApplication::translate("EditVertexDialog", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\264\320\273\320\270\320\275 \321\200\320\265\320\261\320\265\321\200 \320\274\320\265\320\266\320\264\321\203 \320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("EditVertexDialog", "\342\204\226", nullptr));
        label_2->setText(QCoreApplication::translate("EditVertexDialog", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("EditVertexDialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\265\320\261\321\200\320\260 \320\274\320\265\320\266\320\264\321\203 \320\262\320\265\321\200\321\210\320\270\320\275\320\260\320\274\320\270", nullptr));
        label->setText(QCoreApplication::translate("EditVertexDialog", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        CancelPushButton->setText(QCoreApplication::translate("EditVertexDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        ApplyPushButton->setText(QCoreApplication::translate("EditVertexDialog", "\320\236\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("EditVertexDialog", "\342\204\226", nullptr));
        pushButton->setText(QCoreApplication::translate("EditVertexDialog", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditVertexDialog: public Ui_EditVertexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITVERTEXDIALOG_H
