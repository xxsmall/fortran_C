#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QDebug>

 extern "C" {void sub_fortran_(int *m, int *n, int *res);}
 extern "C" {void sub_add_(double *a, double *b, double *c);}
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     int m = 2;
     int n = 3;
     int res = 99;
     qDebug()<<res;
     sub_fortran_(&m,&n,&res);
     qDebug()<<res<<"\r\n\r\n";

     double a =2;
     double c =3;
     double d =1000;
     qDebug()<<d;
     sub_add_(&a,&c,&d);
     qDebug()<<d;

}
