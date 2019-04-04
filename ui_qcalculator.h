/********************************************************************************
** Form generated from reading UI file 'qcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCALCULATOR_H
#define UI_QCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QCalculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Divide;
    QPushButton *Button1;
    QPushButton *Button6;
    QPushButton *ChangeSign;
    QPushButton *Clear;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button2;
    QPushButton *Button7;
    QPushButton *Button8;
    QLineEdit *Display;
    QPushButton *Button5;
    QPushButton *Button3;
    QPushButton *Multiply;
    QPushButton *Button0;
    QPushButton *Equal;
    QPushButton *Add;
    QPushButton *Substract;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QCalculator)
    {
        if (QCalculator->objectName().isEmpty())
            QCalculator->setObjectName(QStringLiteral("QCalculator"));
        QCalculator->resize(400, 255);
        QIcon icon;
        icon.addFile(QStringLiteral(":/svg/accessories-calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QCalculator->setWindowIcon(icon);
        QCalculator->setStyleSheet(QLatin1String("QMainWindow {\n"
"	border-radius: 2%;\n"
"	background-color: #F2F2F2;\n"
"}"));
        centralWidget = new QWidget(QCalculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Divide, 4, 3, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button1, 6, 0, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button6, 5, 2, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 8, 2, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Clear, 8, 0, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button9, 4, 2, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button4, 5, 0, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button2, 6, 1, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button7, 4, 0, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button8, 4, 1, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"	border-radius: 10%;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button5, 5, 1, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button3, 6, 2, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Multiply, 5, 3, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Button0, 8, 1, 1, 1);

        Equal = new QPushButton(centralWidget);
        Equal->setObjectName(QStringLiteral("Equal"));
        sizePolicy.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy);
        Equal->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Equal, 9, 0, 1, 4);

        Add = new QPushButton(centralWidget);
        Add->setObjectName(QStringLiteral("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Add, 6, 3, 1, 1);

        Substract = new QPushButton(centralWidget);
        Substract->setObjectName(QStringLiteral("Substract"));
        sizePolicy.setHeightForWidth(Substract->sizePolicy().hasHeightForWidth());
        Substract->setSizePolicy(sizePolicy);
        Substract->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: #888888;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #404040;\n"
"	color: #ffffff;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	border-radius: 10%;\n"
"}"));

        gridLayout->addWidget(Substract, 8, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 4);

        QCalculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QCalculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        QCalculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(QCalculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QCalculator->setStatusBar(statusBar);

        retranslateUi(QCalculator);

        QMetaObject::connectSlotsByName(QCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *QCalculator)
    {
        QCalculator->setWindowTitle(QApplication::translate("QCalculator", "QCalculator", nullptr));
        Divide->setText(QApplication::translate("QCalculator", "/", nullptr));
        Button1->setText(QApplication::translate("QCalculator", "1", nullptr));
        Button6->setText(QApplication::translate("QCalculator", "6", nullptr));
        ChangeSign->setText(QApplication::translate("QCalculator", "-/+", nullptr));
        Clear->setText(QApplication::translate("QCalculator", "AC", nullptr));
        Button9->setText(QApplication::translate("QCalculator", "9", nullptr));
        Button4->setText(QApplication::translate("QCalculator", "4", nullptr));
        Button2->setText(QApplication::translate("QCalculator", "2", nullptr));
        Button7->setText(QApplication::translate("QCalculator", "7", nullptr));
        Button8->setText(QApplication::translate("QCalculator", "8", nullptr));
        Display->setText(QApplication::translate("QCalculator", "0.0", nullptr));
        Button5->setText(QApplication::translate("QCalculator", "5", nullptr));
        Button3->setText(QApplication::translate("QCalculator", "3", nullptr));
        Multiply->setText(QApplication::translate("QCalculator", "*", nullptr));
        Button0->setText(QApplication::translate("QCalculator", "0", nullptr));
        Equal->setText(QApplication::translate("QCalculator", "=", nullptr));
        Add->setText(QApplication::translate("QCalculator", "+", nullptr));
        Substract->setText(QApplication::translate("QCalculator", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QCalculator: public Ui_QCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCALCULATOR_H
