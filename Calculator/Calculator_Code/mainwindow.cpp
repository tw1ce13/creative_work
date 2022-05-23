#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <math.h>

double D = 0,n = 0;
QString A,B,C;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_pm,SIGNAL(clicked()),this,SLOT(operations()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button =  (QPushButton *) sender();

    double all_numbers;
    QString new_label;
    if (ui->pushButton_AC->isChecked()||n==0)
    {

        all_numbers = (ui->a->text()+button->text()).toDouble();
        new_label = QString::number(all_numbers,'g',10);

        ui->a->setText(new_label);
        if (ui->pushButton_e->isChecked())
        {
            n+=1;
            A = new_label;
        }
    }
    else if (n == 1)
    {
        all_numbers = (ui->b->text()+button->text()).toDouble();
        new_label = QString::number(all_numbers,'g',10);
        ui->b->setText(new_label);
        if (ui->pushButton_e->isChecked())
        {
            n+=1;
            B = new_label;
        }
    }
    else if (n == 2)
    {
        all_numbers = (ui->c->text()+button->text()).toDouble();
        new_label = QString::number(all_numbers,'g',10);
        ui->c->setText(new_label);
        if (ui->pushButton_e->isChecked())
        {
            C = new_label;
        }
    }

}


void MainWindow::on_pushButton_dot_clicked()
{
    if  (n == 0)
    {
        if (!(ui->a->text().contains('.')))
        {
            ui->a->setText(ui->a->text()+".");
        }
    }
    else if (n == 1)
    {
        if (!(ui->b->text().contains('.')))
        {
            ui->b->setText(ui->b->text()+".");
        }
    }
    else if (n == 2)
    {
        if (!(ui->c->text().contains('.')))
        {
            ui->c->setText(ui->c->text()+".");
        }
    }
}
void MainWindow::operations()
{
    QPushButton *button =  (QPushButton *) sender();

    double all_numbers;
    QString new_label;
    if (button->text()== "+/-")
    {
        if  (n == 0)
        {
            all_numbers = (ui->a->text()).toDouble();
            all_numbers = all_numbers * (-1);
            new_label = QString::number(all_numbers,'g',10);

            ui->a->setText(new_label);
            A = new_label;
        }
        else if (n == 1)
        {
            all_numbers = (ui->b->text()).toDouble();
            all_numbers = all_numbers * (-1);
            new_label = QString::number(all_numbers,'g',10);

            ui->b->setText(new_label);
            B = new_label;
        }
        else if (n == 2)
        {
            all_numbers = (ui->c->text()).toDouble();
            all_numbers = all_numbers * (-1);
            new_label = QString::number(all_numbers,'g',10);

            ui->c->setText(new_label);
            C = new_label;
        }
    }
}

void MainWindow::on_pushButton_AC_clicked()
{

    ui->a->setText("0");
    ui->b->setText("0");
    ui->c->setText("0");
    QPushButton *button =  (QPushButton *) sender();
    button->setChecked(true);
    n = 0;
}


void MainWindow::on_pushButton_e_clicked()
{
    QPushButton *button =  (QPushButton *) sender();
    button->setChecked(true);
    n+=1;
}



void MainWindow::on_pushButton_end_clicked()
{
    double x,x1,al,bt,bt1;
    double a1,b1,c1;
    a1 = ui->a->text().toDouble();
    b1 = ui->b->text().toDouble();
    c1 = ui->c->text().toDouble();
    D = (b1*b1)-(4*a1*c1);
    QMessageBox::StandardButton answer =  QMessageBox::question(this,"Подтверждение","Вы уверены",QMessageBox::Yes|QMessageBox::No);
    if (answer == QMessageBox::Yes && a1!=0)
    {
        if (D>0)
        {
            x = (-b1+sqrt(D))/(2*a1);
            x1 = (-b1-sqrt(D))/(2*a1);

            QMessageBox::information(this,"The answers",QString("x = %10, x1 = %1").arg(x).arg(x1));
        }
        else if (D == 0 && a1!=0)
        {
            x = (-b1)/(2*a1);

            QMessageBox::information(this,"The answer",QString("x = %10").arg(x));

        }
        else if (D<0 && a1!=0)
        {
            D = D*(-1);
            al = (-b1)/(2*a1);
            bt = sqrt(D)/(2*a1);
            bt1 = -(sqrt(D)/(2*a1));
            QMessageBox::information(this,"The answers",QString("x = %1+i%10,x1 = %1-i%100").arg(al).arg(bt).arg(bt1));
        }
        else if (a1 == 0)
        {
            QMessageBox::warning(this,"The mistake","Коэффицент при x в квадрате равен нулю!");
        }
    }

}

void MainWindow::on_pushButton_C_clicked()
{
    if (n == 0)
    {
        ui->a->setText("0");
    }
    else if (n == 1)
    {
        ui->b->setText("0");
    }
    else
    {
        ui->c->setText("0");
    }
}
