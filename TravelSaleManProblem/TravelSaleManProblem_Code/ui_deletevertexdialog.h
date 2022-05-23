/********************************************************************************
** Form generated from reading UI file 'deletevertexdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEVERTEXDIALOG_H
#define UI_DELETEVERTEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteVertexDialog
{
public:
    QLineEdit *DelitableVertexIndexLineEdit;
    QLabel *label;
    QPushButton *ApplySettingsPushButton;
    QPushButton *CancelPushButton;

    void setupUi(QDialog *DeleteVertexDialog)
    {
        if (DeleteVertexDialog->objectName().isEmpty())
            DeleteVertexDialog->setObjectName(QString::fromUtf8("DeleteVertexDialog"));
        DeleteVertexDialog->resize(253, 129);
        DeleteVertexDialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
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
"color: black;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QLabel {\n"
"margin-bottom: 4px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color: #FFFFE0;\n"
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
        DelitableVertexIndexLineEdit = new QLineEdit(DeleteVertexDialog);
        DelitableVertexIndexLineEdit->setObjectName(QString::fromUtf8("DelitableVertexIndexLineEdit"));
        DelitableVertexIndexLineEdit->setGeometry(QRect(170, 20, 61, 41));
        label = new QLabel(DeleteVertexDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 151, 41));
        ApplySettingsPushButton = new QPushButton(DeleteVertexDialog);
        ApplySettingsPushButton->setObjectName(QString::fromUtf8("ApplySettingsPushButton"));
        ApplySettingsPushButton->setGeometry(QRect(20, 70, 101, 41));
        CancelPushButton = new QPushButton(DeleteVertexDialog);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));
        CancelPushButton->setGeometry(QRect(130, 70, 101, 41));

        retranslateUi(DeleteVertexDialog);

        QMetaObject::connectSlotsByName(DeleteVertexDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteVertexDialog)
    {
        DeleteVertexDialog->setWindowTitle(QCoreApplication::translate("DeleteVertexDialog", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        DelitableVertexIndexLineEdit->setText(QString());
        label->setText(QCoreApplication::translate("DeleteVertexDialog", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        ApplySettingsPushButton->setText(QCoreApplication::translate("DeleteVertexDialog", "\320\236\320\272", nullptr));
        CancelPushButton->setText(QCoreApplication::translate("DeleteVertexDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteVertexDialog: public Ui_DeleteVertexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEVERTEXDIALOG_H
