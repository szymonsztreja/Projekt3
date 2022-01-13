#ifndef BMI_WINDOW_H
#define BMI_WINDOW_H

#include <QDialog>

namespace Ui {
class BMI_window;
}

class BMI_window : public QDialog
{
    Q_OBJECT

public:
    explicit BMI_window(QWidget *parent = 0);
    auto IsDigit(QString number) -> unsigned int;
    ~BMI_window();

private slots:
    void on_pushButton_Calculate_clicked();

private:
    Ui::BMI_window *ui;
};

#endif // BMI_WINDOW_H
