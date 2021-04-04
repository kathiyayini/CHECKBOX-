#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox_1,SIGNAL(clicked(bool)),this,SLOT(oncheckBox1_clicked()));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckBox2_clicked()));
    connect(ui->radioButton_1,SIGNAL(clicked(bool)),this,SLOT(onradioButton1_clicked()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(onradioButton2_clicked()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(onradioButton3_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::oncheckBox1_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_1->isChecked())
    {
        ui->label->setStyleSheet("color: red; font-weight: bold ");
    }
    else
    {
        ui->label->setStyleSheet("QLabel");
    }
}
void MainWindow::oncheckBox2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        ui->label->setStyleSheet("color: green; font: italic ");
    }
    else
    {
         ui->label->setStyleSheet("QLabel");
    }
}
void MainWindow::onradioButton1_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_1->isChecked())
    {
         ui->label->setStyleSheet("color: orange");
    }
}
void MainWindow::onradioButton2_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_2->isChecked())
    {
         ui->label->setStyleSheet("color: pink");
    }
}
void MainWindow::onradioButton3_clicked()
{
    QTextStream stream(stdout);
    if(ui->radioButton_3->isChecked())
    {
         ui->label->setStyleSheet(" color: maroon ");
    }
}
