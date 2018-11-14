#ifndef QCALCULATOR_H
#define QCALCULATOR_H

#include <QMainWindow>

namespace Ui {
class QCalculator;
}

class QCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit QCalculator(QWidget *parent = 0);
    ~QCalculator();

private:
    Ui::QCalculator *ui;
private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButton();
    void ChangeNumberSign();
    void ClearPressed();
};

#endif // QCALCULATOR_H
