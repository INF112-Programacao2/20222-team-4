/********************************************************************************
** Form generated from reading UI file 'janelaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QAction *actionFuncion_rios;
    QAction *actionConsultar_Estoque;
    QAction *actionGerenciar_estoque;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_consultar_estoque;
    QPushButton *btn_cadastrar_cliente;
    QPushButton *btn_registrar_venda;
    QPushButton *btn_registrar_venda_3;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuEstoque;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName("JanelaPrincipal");
        JanelaPrincipal->resize(751, 414);
        JanelaPrincipal->setStyleSheet(QString::fromUtf8("#JanelaPrincipal {\n"
"\n"
"background: #d6cadd;\n"
"\n"
"}"));
        actionFuncion_rios = new QAction(JanelaPrincipal);
        actionFuncion_rios->setObjectName("actionFuncion_rios");
        actionConsultar_Estoque = new QAction(JanelaPrincipal);
        actionConsultar_Estoque->setObjectName("actionConsultar_Estoque");
        actionGerenciar_estoque = new QAction(JanelaPrincipal);
        actionGerenciar_estoque->setObjectName("actionGerenciar_estoque");
        centralwidget = new QWidget(JanelaPrincipal);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background: #d6cadd;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 90, 271, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imgs/shop.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 701, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 30px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(540, 320, 131, 51));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 20px;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 170, 421, 149));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_consultar_estoque = new QPushButton(widget);
        btn_consultar_estoque->setObjectName("btn_consultar_estoque");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font1.setBold(true);
        font1.setItalic(false);
        btn_consultar_estoque->setFont(font1);
        btn_consultar_estoque->setCursor(QCursor(Qt::PointingHandCursor));
        btn_consultar_estoque->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        gridLayout->addWidget(btn_consultar_estoque, 2, 0, 1, 1);

        btn_cadastrar_cliente = new QPushButton(widget);
        btn_cadastrar_cliente->setObjectName("btn_cadastrar_cliente");
        btn_cadastrar_cliente->setFont(font1);
        btn_cadastrar_cliente->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastrar_cliente->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        gridLayout->addWidget(btn_cadastrar_cliente, 0, 1, 1, 1);

        btn_registrar_venda = new QPushButton(widget);
        btn_registrar_venda->setObjectName("btn_registrar_venda");
        btn_registrar_venda->setFont(font1);
        btn_registrar_venda->setCursor(QCursor(Qt::PointingHandCursor));
        btn_registrar_venda->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        gridLayout->addWidget(btn_registrar_venda, 0, 0, 1, 1);

        btn_registrar_venda_3 = new QPushButton(widget);
        btn_registrar_venda_3->setObjectName("btn_registrar_venda_3");
        btn_registrar_venda_3->setFont(font1);
        btn_registrar_venda_3->setCursor(QCursor(Qt::PointingHandCursor));
        btn_registrar_venda_3->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        gridLayout->addWidget(btn_registrar_venda_3, 2, 1, 1, 1);

        JanelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaPrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 751, 20));
        menubar->setStyleSheet(QString::fromUtf8("#menubar {\n"
"background-color: #800080;\n"
"color: #fff;\n"
"	font: 900 9pt \"Zabal DEMO Black\";\n"
"}"));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName("menuGest_o");
        menuEstoque = new QMenu(menubar);
        menuEstoque->setObjectName("menuEstoque");
        JanelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaPrincipal);
        statusbar->setObjectName("statusbar");
        JanelaPrincipal->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuEstoque->menuAction());
        menuGest_o->addSeparator();
        menuGest_o->addAction(actionFuncion_rios);
        menuEstoque->addSeparator();
        menuEstoque->addAction(actionGerenciar_estoque);
        menuEstoque->addAction(actionConsultar_Estoque);

        retranslateUi(JanelaPrincipal);

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QCoreApplication::translate("JanelaPrincipal", "MainWindow", nullptr));
        actionFuncion_rios->setText(QCoreApplication::translate("JanelaPrincipal", "Funcion\303\241rios", nullptr));
        actionConsultar_Estoque->setText(QCoreApplication::translate("JanelaPrincipal", "Consultar estoque", nullptr));
        actionGerenciar_estoque->setText(QCoreApplication::translate("JanelaPrincipal", "Gerenciar estoque", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("JanelaPrincipal", "Ol\303\241, seja bem vindo(a), Usu\303\241rio!", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaPrincipal", "Boas vendas!", nullptr));
        btn_consultar_estoque->setText(QCoreApplication::translate("JanelaPrincipal", "Consultar Estoque", nullptr));
        btn_cadastrar_cliente->setText(QCoreApplication::translate("JanelaPrincipal", "Cadastrar Cliente", nullptr));
        btn_registrar_venda->setText(QCoreApplication::translate("JanelaPrincipal", "Registrar Venda", nullptr));
        btn_registrar_venda_3->setText(QCoreApplication::translate("JanelaPrincipal", "Controle de Caixa", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("JanelaPrincipal", "Gest\303\243o", nullptr));
        menuEstoque->setTitle(QCoreApplication::translate("JanelaPrincipal", "Estoque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
