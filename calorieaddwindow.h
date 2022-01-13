#ifndef CALORIEADDWINDOW_H
#define CALORIEADDWINDOW_H

#include <QDialog>

namespace Ui {
class CalorieAddWindow;
}

class CalorieAddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CalorieAddWindow(QWidget *parent = 0);
    ~CalorieAddWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CalorieAddWindow *ui;
};

#endif // CALORIEADDWINDOW_H
