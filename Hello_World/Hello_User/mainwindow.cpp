#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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
    if (ui->lineEdit->isModified())
    {
        QMessageBox::information(this, "Greeting", QString("Hello, " + ui->lineEdit->text()));
    }
    else
    {
        QMessageBox::information(this, "Input error", QString("Sorry, enter your name please."));
    }
}

