#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setRowCount(33);
    ui->tableWidget->setColumnCount(33);

}

MainWindow::~MainWindow()
{
    delete ui;
}

