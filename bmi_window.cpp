#include "bmi_window.h"
#include "ui_bmi_window.h"
#include <QMessageBox>

BMI_window::BMI_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BMI_window)
{
    ui->setupUi(this);
}

BMI_window::~BMI_window()
{
    delete ui;
}

void BMI_window::on_pushButton_Calculate_clicked()
{
    QString weight = ui->LineEdit_weight->text();
    QString height = ui->LineEdit_height->text();

    double i_weight = IsDigit(weight);
    double i_height = IsDigit(height);

    double BMI = ( (i_height/(i_weight*i_weight)) * 10000 );
    ui->editLine_BMI->setText(QString::number(BMI));


    if(BMI<18.5)
        QMessageBox::warning(this, "Body Masz Index", "You are underweight.");
    else if(BMI<25)
        QMessageBox::warning(this, "Body Mass Index", "Congratulations"
                                                      "you are within the "
                                                      "healthy weight range.");
    else if(BMI<30)
        QMessageBox::warning(this, "Body Masz Index", "You are overweight.");
    else
        QMessageBox::warning(this, "Body Masz Index", "You are obsese, please "
                                                      "contact you doctor.");
}

auto BMI_window::IsDigit(QString number) -> unsigned int
{
    bool ok;
    unsigned int num = number.toInt(&ok);
    if(!ok){
        QMessageBox::warning(this, "Conversion", "Not an Int");
    }
    return num;
}
