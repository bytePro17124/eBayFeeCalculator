#ifndef CALCWINDOW_H
#define CALCWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class CalcWindow;
}

class CalcWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalcWindow(QWidget *parent = 0);
    ~CalcWindow();

private slots:


    void on_Calculate_button_released();

    void on_Close_button_released();

    void on_actionExit_triggered();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_PepperBay_button_released();

    void on_actionAbout_triggered();

private:

    Ui::CalcWindow *ui;

    float calculate_Ebay_Fees(const float&, const float&);
    float calculate_Paypal_Fees(const float&, const float&);

    float final_sale_price, shipping_price, actual_shipping_cost, ebay_fees, paypal_fees;

    QMediaPlayer * chaching;

    bool soundon;



};

#endif // CALCWINDOW_H
