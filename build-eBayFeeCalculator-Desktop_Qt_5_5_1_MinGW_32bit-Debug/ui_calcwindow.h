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
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CalcWindow
{
public:

    void setupUi(QDialog *CalcWindow)
    {
        if (CalcWindow->objectName().isEmpty())
            CalcWindow->setObjectName(QStringLiteral("CalcWindow"));
        CalcWindow->resize(640, 480);

        retranslateUi(CalcWindow);

        QMetaObject::connectSlotsByName(CalcWindow);
    } // setupUi

    void retranslateUi(QDialog *CalcWindow)
    {
        CalcWindow->setWindowTitle(QApplication::translate("CalcWindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CalcWindow: public Ui_CalcWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCWINDOW_H
