#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->lineEdit->isModified()){
       QMessageBox::information(this, "Hello", QString("Hello, " + ui->lineEdit->text()));
    }
    else {
       QMessageBox::information(this, "Error", QString("Enter your name, please."));
    }
}

