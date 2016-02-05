/********************************************************************************
** Form generated from reading UI file 'calcwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCWINDOW_H
#define UI_CALCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalcWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CalcWindow)
    {
        if (CalcWindow->objectName().isEmpty())
            CalcWindow->setObjectName(QStringLiteral("CalcWindow"));
        CalcWindow->setEnabled(true);
        CalcWindow->resize(640, 480);
        verticalLayout_2 = new QVBoxLayout(CalcWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(CalcWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Eras Bold ITC"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setFrameShape(QFrame::WinPanel);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(CalcWindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_5 = new QLineEdit(CalcWindow);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(CalcWindow);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(CalcWindow);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        textEdit = new QTextEdit(CalcWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(CalcWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(CalcWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setLayoutDirection(Qt::LeftToRight);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(CalcWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(CalcWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(CalcWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout_6->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(CalcWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_6->addWidget(textBrowser);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(CalcWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        lineEdit_3 = new QLineEdit(CalcWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        pushButton_2 = new QPushButton(CalcWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label->raise();
        label_2->raise();
        pushButton->raise();
        textBrowser->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_3->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        label_4->raise();
        label_5->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        textEdit->raise();
        textEdit->raise();

        retranslateUi(CalcWindow);

        QMetaObject::connectSlotsByName(CalcWindow);
    } // setupUi

    void retranslateUi(QDialog *CalcWindow)
    {
        CalcWindow->setWindowTitle(QApplication::translate("CalcWindow", "Sales Calculator", 0));
        label_3->setText(QApplication::translate("CalcWindow", "eBay Fee Calculator", 0));
        label_4->setText(QApplication::translate("CalcWindow", "Item Name:", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("CalcWindow", "optional", 0));
        label_5->setText(QApplication::translate("CalcWindow", "Auction Number: ", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("CalcWindow", "optional", 0));
        textEdit->setPlaceholderText(QApplication::translate("CalcWindow", "Any other notes. (optional)", 0));
        label->setText(QApplication::translate("CalcWindow", "Final Sale Price:", 0));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("CalcWindow", "0.00", 0));
        label_2->setText(QApplication::translate("CalcWindow", "Shipping Price: ", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("CalcWindow", "0.00", 0));
        pushButton->setText(QApplication::translate("CalcWindow", "Calculate!", 0));
        textBrowser->setPlaceholderText(QApplication::translate("CalcWindow", "Final Results", 0));
        pushButton_3->setText(QApplication::translate("CalcWindow", "Close Program", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("CalcWindow", "Open CSV File", 0));
        pushButton_2->setText(QApplication::translate("CalcWindow", "Append Results to CSV", 0));
    } // retranslateUi

};

namespace Ui {
    class CalcWindow: public Ui_CalcWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCWINDOW_H
