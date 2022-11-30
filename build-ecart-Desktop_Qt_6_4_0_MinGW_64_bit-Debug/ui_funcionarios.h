/********************************************************************************
** Form generated from reading UI file 'funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIOS_H
#define UI_FUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Funcionarios
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btn_novo_funcionario;

    void setupUi(QDialog *Funcionarios)
    {
        if (Funcionarios->objectName().isEmpty())
            Funcionarios->setObjectName("Funcionarios");
        Funcionarios->resize(750, 451);
        Funcionarios->setStyleSheet(QString::fromUtf8("#Funcionarios {\n"
"background: #d6cadd;\n"
"}"));
        label_3 = new QLabel(Funcionarios);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 30, 711, 37));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 30px;"));
        layoutWidget = new QWidget(Funcionarios);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 180, 531, 131));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color:#800080;\n"
"border-radius: 30px;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"font-size: 20px;"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color:#800080;\n"
"border-radius: 30px;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"font-size: 20px;"));

        horizontalLayout->addWidget(label_2);

        label_4 = new QLabel(Funcionarios);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 140, 377, 25));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size:20px;"));
        label_5 = new QLabel(Funcionarios);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 320, 377, 25));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size:20px;"));
        btn_novo_funcionario = new QPushButton(Funcionarios);
        btn_novo_funcionario->setObjectName("btn_novo_funcionario");
        btn_novo_funcionario->setGeometry(QRect(20, 80, 271, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font1.setBold(true);
        font1.setItalic(false);
        btn_novo_funcionario->setFont(font1);
        btn_novo_funcionario->setCursor(QCursor(Qt::PointingHandCursor));
        btn_novo_funcionario->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        retranslateUi(Funcionarios);

        QMetaObject::connectSlotsByName(Funcionarios);
    } // setupUi

    void retranslateUi(QDialog *Funcionarios)
    {
        Funcionarios->setWindowTitle(QCoreApplication::translate("Funcionarios", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Funcionarios", "Equipe da \"nome da loja\"", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("Funcionarios", "Administradores", nullptr));
        label_5->setText(QCoreApplication::translate("Funcionarios", "Funcion\303\241rios", nullptr));
        btn_novo_funcionario->setText(QCoreApplication::translate("Funcionarios", "Novo Funcion\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Funcionarios: public Ui_Funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIOS_H
