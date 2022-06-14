#include "mainwindow.h"
#include "ui_mainwindow.h"

extern "C"
{
    #include "dll.h"
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initdata(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    int in = arg1.toInt();
    initdata(in);
}

void MainWindow::on_pushButton_clicked()
{
    process();
    qDebug()<<output();
    ui->label->setText(QString::number(output()));
}
