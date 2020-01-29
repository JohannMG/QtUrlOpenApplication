#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

// const QString &text
void MainWindow::LogToWindow(QString text)
{
    ui->plainTextEdit->appendPlainText(text);
}

MainWindow::~MainWindow()
{
    delete ui;
}

