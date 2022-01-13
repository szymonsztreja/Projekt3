#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include "bmi_window.h"
#include "calorieaddwindow.h"

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

void MainWindow::on_actionBMI_Calculator_triggered()
{
    BMI_window bmi;
    bmi.setModal(true);
    bmi.exec();
}

void MainWindow::on_pushButton_clicked()
{
    CalorieAddWindow CAW;
    CAW.setModal(true);
    CAW.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    CalorieAddWindow CAW;
    CAW.setModal(true);
    CAW.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    CalorieAddWindow CAW;
    CAW.setModal(true);
    CAW.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    CalorieAddWindow CAW;
    CAW.setModal(true);
    CAW.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    CalorieAddWindow CAW;
    CAW.setModal(true);
    CAW.exec();
}
