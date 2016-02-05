#include "calcwindow.h"
#include "ui_calcwindow.h"
#include <QMessageBox>
#include <QDoubleValidator>
#include <QString>

CalcWindow::CalcWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalcWindow)
{
    ui->setupUi(this);
    ui->Final_Item_Price_Field->setInputMask("000000.00;_");
    ui->Shipping_Charged_Field->setInputMask("000000.00;_");
    ui->Actual_Shipping_Cost_Field->setInputMask("000000.00;_");
    final_sale_price = shipping_price = \
            actual_shipping_cost = ebay_fees = paypal_fees = 0;
}

CalcWindow::~CalcWindow()
{
    delete ui;
}

void CalcWindow::on_Calculate_button_released()
{
    if (ui->Final_Item_Price_Field->text().isEmpty()) {
        QMessageBox invalid;
        invalid.setText("Please fill out the the final item price field.");
        invalid.setWindowTitle("Cannot Continue");
        invalid.exec();
    } else if (ui->Shipping_Charged_Field->text().isEmpty()) {
        QMessageBox invalid;
        invalid.setText("Please fill out the the shipping chargee field.");
        invalid.setWindowTitle("Cannot Continue");
        invalid.exec();
    } else if (ui->Actual_Shipping_Cost_Field->text().isEmpty()) {
        QMessageBox invalid;
        invalid.setText("Please fill out the the actual shipping charged field.");
        invalid.setWindowTitle("Cannot Continue");
        invalid.exec();
    } else {
        final_sale_price = ui->Final_Item_Price_Field->text().toFloat();
        actual_shipping_cost = ui->Actual_Shipping_Cost_Field->text().toFloat();
        shipping_price = ui->Shipping_Charged_Field->text().toFloat();
        ebay_fees = calculate_Ebay_Fees(ui->Final_Item_Price_Field->text().toFloat(), \
                                        ui->Shipping_Charged_Field->text().toFloat());
        paypal_fees = calculate_Paypal_Fees(ui->Final_Item_Price_Field->text().toFloat(), \
                                          ui->Shipping_Charged_Field->text().toFloat());
        ui->Details_Text_Area->setText("TotalProfit = $" + QString::number((final_sale_price + shipping_price) \
                                                                          - (ebay_fees + paypal_fees) ));


   //     QString qStr = QString::number(iNumber);
    }
}

void CalcWindow::on_Close_button_released()
{
    qApp->quit();
}

void CalcWindow::on_actionExit_triggered()
{
    qApp->quit();
}

float CalcWindow::calculate_Ebay_Fees(const float& finalprice, const float& shippingprice) {
    float ebayfees;
    if (finalprice+shippingprice <= 7500){
        ebayfees = (finalprice + shippingprice) * .10;
    } else {
        ebayfees = (7500) * .10;
    }
    return ebayfees;
}

float CalcWindow::calculate_Paypal_Fees(const float& finalprice, const float& shippingprice) {

    float paypalfees = .30  + ((finalprice + shippingprice) * .03);

    return paypalfees;
}
