/********************************************************************************
** Form generated from reading UI file 'primeiroacesso.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMEIROACESSO_H
#define UI_PRIMEIROACESSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimeiroAcesso
{
public:
    QPushButton *btn_cadastrar_loja;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txt_nome_da_loja;
    QLineEdit *txt_cnpj;
    QLineEdit *txt_endereco;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *txt_nome_adm;
    QLineEdit *txt_email_adm;
    QLineEdit *txt_username_adm;
    QLineEdit *txt_senha_adm;

    void setupUi(QDialog *PrimeiroAcesso)
    {
        if (PrimeiroAcesso->objectName().isEmpty())
            PrimeiroAcesso->setObjectName("PrimeiroAcesso");
        PrimeiroAcesso->resize(767, 538);
        PrimeiroAcesso->setStyleSheet(QString::fromUtf8("#PrimeiroAcesso {\n"
"\n"
"background: #d6cadd;\n"
"\n"
"}"));
        btn_cadastrar_loja = new QPushButton(PrimeiroAcesso);
        btn_cadastrar_loja->setObjectName("btn_cadastrar_loja");
        btn_cadastrar_loja->setGeometry(QRect(480, 350, 241, 45));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font.setBold(true);
        font.setItalic(false);
        btn_cadastrar_loja->setFont(font);
        btn_cadastrar_loja->setCursor(QCursor(Qt::PointingHandCursor));
        btn_cadastrar_loja->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));
        label_3 = new QLabel(PrimeiroAcesso);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 260, 441, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size:20px;"));
        label_4 = new QLabel(PrimeiroAcesso);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 40, 301, 301));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imgs/01 Online Shopping 1.png")));
        label_4->setScaledContents(true);
        widget = new QWidget(PrimeiroAcesso);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 379, 70));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 30px;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size:20px;"));

        verticalLayout->addWidget(label_2);

        widget1 = new QWidget(PrimeiroAcesso);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 110, 401, 141));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txt_nome_da_loja = new QLineEdit(widget1);
        txt_nome_da_loja->setObjectName("txt_nome_da_loja");
        txt_nome_da_loja->setCursor(QCursor(Qt::IBeamCursor));
        txt_nome_da_loja->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout_2->addWidget(txt_nome_da_loja);

        txt_cnpj = new QLineEdit(widget1);
        txt_cnpj->setObjectName("txt_cnpj");
        txt_cnpj->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));
        txt_cnpj->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(txt_cnpj);

        txt_endereco = new QLineEdit(widget1);
        txt_endereco->setObjectName("txt_endereco");
        txt_endereco->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));
        txt_endereco->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(txt_endereco);

        widget2 = new QWidget(PrimeiroAcesso);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(20, 300, 401, 201));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        txt_nome_adm = new QLineEdit(widget2);
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

        txt_email_adm = new QLineEdit(widget2);
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

        txt_username_adm = new QLineEdit(widget2);
        txt_username_adm->setObjectName("txt_username_adm");
        txt_username_adm->setCursor(QCursor(Qt::IBeamCursor));
        txt_username_adm->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout_3->addWidget(txt_username_adm);

        txt_senha_adm = new QLineEdit(widget2);
        txt_senha_adm->setObjectName("txt_senha_adm");
        txt_senha_adm->setCursor(QCursor(Qt::IBeamCursor));
        txt_senha_adm->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));
        txt_senha_adm->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(txt_senha_adm);


        retranslateUi(PrimeiroAcesso);

        QMetaObject::connectSlotsByName(PrimeiroAcesso);
    } // setupUi

    void retranslateUi(QDialog *PrimeiroAcesso)
    {
        PrimeiroAcesso->setWindowTitle(QCoreApplication::translate("PrimeiroAcesso", "Dialog", nullptr));
        btn_cadastrar_loja->setText(QCoreApplication::translate("PrimeiroAcesso", "Cadastrar", nullptr));
        label_3->setText(QCoreApplication::translate("PrimeiroAcesso", "Agora vamos cadastrar o(a) administrador(a):", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("PrimeiroAcesso", "Ol\303\241, boas vindas ao e-cart!", nullptr));
        label_2->setText(QCoreApplication::translate("PrimeiroAcesso", "Primeiro vamos cadastrar seu com\303\251rcio:", nullptr));
        txt_nome_da_loja->setText(QString());
        txt_nome_da_loja->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Nome da Loja", nullptr));
        txt_cnpj->setText(QString());
        txt_cnpj->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "CNPJ", nullptr));
        txt_endereco->setText(QString());
        txt_endereco->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Endere\303\247o", nullptr));
        txt_nome_adm->setText(QString());
        txt_nome_adm->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Nome do(a) administrador(a):", nullptr));
        txt_email_adm->setText(QString());
        txt_email_adm->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Email", nullptr));
        txt_username_adm->setText(QString());
        txt_username_adm->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Username", nullptr));
        txt_senha_adm->setText(QString());
        txt_senha_adm->setPlaceholderText(QCoreApplication::translate("PrimeiroAcesso", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrimeiroAcesso: public Ui_PrimeiroAcesso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMEIROACESSO_H
