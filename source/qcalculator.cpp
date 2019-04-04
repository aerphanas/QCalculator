#include "qcalculator.h"
#include "ui_qcalculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multiTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

QCalculator::QCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QCalculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; ++i) {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = QCalculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Substract, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    connect(ui->Equal, SIGNAL(released()), this, SLOT(EqualButton()));

    connect(ui->ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));

    connect(ui->Clear, SIGNAL(released()), this, SLOT(ClearPressed()));
}

QCalculator::~QCalculator()
{
    delete ui;
}

void QCalculator::NumPressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString butval = button->text();
    QString displayval = ui->Display->text();
    if ((displayval.toDouble() == 0) | (displayval.toDouble() == 0.0)) {
        ui->Display->setText(butval);
    } else {
        QString newVal = displayval + butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void QCalculator::MathButtonPressed()
{
    divTrigger = false;
    multiTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multiTrigger = true;
    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    } else {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void QCalculator::EqualButton()
{
    double solution = 0.0;
    QString displayval = ui->Display->text();
    double dbldisplayval = displayval.toDouble();
    if (divTrigger || multiTrigger || addTrigger || subTrigger) {
        if (divTrigger) {
            solution = calcVal / dbldisplayval;
        } else if (multiTrigger) {
            solution = calcVal * dbldisplayval;
        } else if (addTrigger) {
            solution = calcVal + dbldisplayval;
        } else {
            solution = calcVal - dbldisplayval;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void QCalculator::ChangeNumberSign()
{
    QString displayVal = ui->Display->text();
    QRegExp reg("[-]?[0-9.]*");
    if (reg.exactMatch(displayVal)) {
        double dbldisplayval = displayVal.toDouble();
        double dbldisplayvalsign = -1 * dbldisplayval;
        ui->Display->setText(QString::number(dbldisplayvalsign));
    }
}

void QCalculator::ClearPressed()
{
    ui->Display->clear();
    calcVal = 0.0;
    ui->Display->setText(QString::number(calcVal));
}
