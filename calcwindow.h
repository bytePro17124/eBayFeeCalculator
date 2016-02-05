#ifndef CALCWINDOW_H
#define CALCWINDOW_H

#include <QDialog>

namespace Ui {
class CalcWindow;
}

class CalcWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CalcWindow(QWidget *parent = 0);
    ~CalcWindow();

private:
    Ui::CalcWindow *ui;
};

#endif // CALCWINDOW_H
