#include "calorieaddwindow.h"
#include "ui_calorieaddwindow.h"
#include <macros.cpp>
#include <QMessageBox>

CalorieAddWindow::CalorieAddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalorieAddWindow)
{
    ui->setupUi(this);

    ui->doubleSpinBox->setSingleStep(5);
    ui->doubleSpinBox->setRange(0,1000);

    std::vector<Macros> Products;

    ui->comboBox->addItem("Chicken") ;
    ui->comboBox->addItem("Egg") ;
    ui->comboBox->addItem("Rice") ;
    ui->comboBox->addItem("Tomato") ;
    ui->comboBox->addItem("Paprika") ;
    ui->comboBox->addItem("Potato") ;
    ui->comboBox->addItem("Pasta") ;
    ui->comboBox->addItem("Bread") ;
    ui->comboBox->addItem("Oatmeal") ;
    ui->comboBox->addItem("Milk") ;

}

CalorieAddWindow::~CalorieAddWindow()
{
    delete ui;
}

void CalorieAddWindow::on_pushButton_clicked()
{
    auto Chicken = Macros(31, 0, 3.6);
    auto Egg = Macros(13, 0.7, 9.5);
    auto Rice = Macros(6, 79, 1);
    auto Tomato = Macros(0.9, 3.9, 0.2);
    auto Paprika = Macros(0, 6, 1);
    auto Beef =  Macros(18, 0, 18);
    auto Potato = Macros(2, 18, 0);
    auto Pasta = Macros(15, 58, 3);
    auto Bread = Macros(6, 51, 2);
    auto Oatmeal = Macros( 17, 66, 7);
    auto Milk = Macros(3, 5, 3.2);
    double a;
    auto Weigh = ui->doubleSpinBox->value();
    if ( ui->comboBox->currentIndex() == 0 )
       a = CalorieIntake(Weigh, Chicken);

    QMessageBox::information(this, "title", QString::number(a) );
}
