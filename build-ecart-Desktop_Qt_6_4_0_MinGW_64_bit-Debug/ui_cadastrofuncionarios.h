/********************************************************************************
** Form generated from reading UI file 'cadastrofuncionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROFUNCIONARIOS_H
#define UI_CADASTROFUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroFuncionarios
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *txt_nome_adm;
    QLineEdit *txt_email_adm;
    QLineEdit *txt_email_adm_2;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_cadastrar;
    QPushButton *btn_cadastrar_2;
    QMenuBar *menubar;
    QMenu *menuIn_cio;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CadastroFuncionarios)
    {
        if (CadastroFuncionarios->objectName().isEmpty())
            CadastroFuncionarios->setObjectName("CadastroFuncionarios");
        CadastroFuncionarios->resize(744, 408);
        CadastroFuncionarios->setStyleSheet(QString::fromUtf8("#CadastroFuncionarios {\n"
"\n"
"background: #d6cadd;\n"
"\n"
"}"));
        centralwidget = new QWidget(CadastroFuncionarios);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"\n"
"background: #d6cadd;\n"
"\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 30, 341, 37));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 30px;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 80, 511, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        txt_nome_adm = new QLineEdit(layoutWidget);
        txt_nome_adm->setObjectName("txt_nome_adm");
        txt_nome_adm->setCursor(QCursor(Qt::IBeamCursor));
        txt_nome_adm->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout_3->addWidget(txt_nome_adm);

        txt_email_adm = new QLineEdit(layoutWidget);
        txt_email_adm->setObjectName("txt_email_adm");
        txt_email_adm->setCursor(QCursor(Qt::IBeamCursor));
        txt_email_adm->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout_3->addWidget(txt_email_adm);

        txt_email_adm_2 = new QLineEdit(layoutWidget);
        txt_email_adm_2->setObjectName("txt_email_adm_2");
        txt_email_adm_2->setCursor(QCursor(Qt::IBeamCursor));
        txt_email_adm_2->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout_3->addWidget(txt_email_adm_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 50, 271, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imgs/cel.png")));
        label->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 270, 511, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_cadastrar = new QPushButton(widget);
        btn_cadastrar->setObjectName("btn_cadastrar");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font1.setBold(true);
        font1.setItalic(false);
        btn_cadastrar->setFont(font1);
        btn_cadastrar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastrar->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        horizontalLayout->addWidget(btn_cadastrar);

        btn_cadastrar_2 = new QPushButton(widget);
        btn_cadastrar_2->setObjectName("btn_cadastrar_2");
        btn_cadastrar_2->setFont(font1);
        btn_cadastrar_2->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastrar_2->setStyleSheet(QString::fromUtf8("background:none;\n"
"border-radius: 10px;\n"
"border: 2px solid #800080;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #800080;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        horizontalLayout->addWidget(btn_cadastrar_2);

        CadastroFuncionarios->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CadastroFuncionarios);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 744, 21));
        menubar->setStyleSheet(QString::fromUtf8("#menubar {\n"
"\n"
"background: #d6cadd;\n"
"\n"
"}"));
        menuIn_cio = new QMenu(menubar);
        menuIn_cio->setObjectName("menuIn_cio");
        CadastroFuncionarios->setMenuBar(menubar);
        statusbar = new QStatusBar(CadastroFuncionarios);
        statusbar->setObjectName("statusbar");
        CadastroFuncionarios->setStatusBar(statusbar);

        menubar->addAction(menuIn_cio->menuAction());

        retranslateUi(CadastroFuncionarios);

        QMetaObject::connectSlotsByName(CadastroFuncionarios);
    } // setupUi

    void retranslateUi(QMainWindow *CadastroFuncionarios)
    {
        CadastroFuncionarios->setWindowTitle(QCoreApplication::translate("CadastroFuncionarios", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("CadastroFuncionarios", "Cadastro de funcion\303\241rio", nullptr));
        txt_nome_adm->setText(QString());
        txt_nome_adm->setPlaceholderText(QCoreApplication::translate("CadastroFuncionarios", "Nome", nullptr));
        txt_email_adm->setText(QString());
        txt_email_adm->setPlaceholderText(QCoreApplication::translate("CadastroFuncionarios", "Sal\303\241rio Base", nullptr));
        txt_email_adm_2->setText(QString());
        txt_email_adm_2->setPlaceholderText(QCoreApplication::translate("CadastroFuncionarios", "Horas Semanais", nullptr));
        label->setText(QString());
        btn_cadastrar->setText(QCoreApplication::translate("CadastroFuncionarios", "Cadastrar", nullptr));
        btn_cadastrar_2->setText(QCoreApplication::translate("CadastroFuncionarios", "Cancelar", nullptr));
        menuIn_cio->setTitle(QCoreApplication::translate("CadastroFuncionarios", "In\303\255cio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroFuncionarios: public Ui_CadastroFuncionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROFUNCIONARIOS_H
