/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_username;
    QLineEdit *txt_password;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_login;
    QPushButton *btn_primeiro_acesso;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName("JanelaLogin");
        JanelaLogin->resize(726, 374);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("accessories-dictionary");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        JanelaLogin->setWindowIcon(icon);
        JanelaLogin->setStyleSheet(QString::fromUtf8("#JanelaLogin {\n"
"background: #d6cadd;\n"
"}"));
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background: #d6cadd;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 30, 261, 271));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imgs/01 Online Shopping 1.png")));
        label_4->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 331, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #800080;\n"
"font-size: 30px;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(280, 100, 401, 200));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName("txt_username");
        txt_username->setCursor(QCursor(Qt::IBeamCursor));
        txt_username->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));

        verticalLayout->addWidget(txt_username);

        txt_password = new QLineEdit(layoutWidget);
        txt_password->setObjectName("txt_password");
        txt_password->setStyleSheet(QString::fromUtf8("background:#d6cadd;\n"
"border: none;\n"
"border-bottom-width: 2px; \n"
"border-bottom-style: solid;\n"
"border-bottom-color: #800080;\n"
"color: #800080;\n"
"padding-bottom: 7px;\n"
"font-size: 18px"));
        txt_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(txt_password);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName("btn_login");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zabal DEMO Black")});
        font1.setBold(true);
        font1.setItalic(false);
        btn_login->setFont(font1);
        btn_login->setCursor(QCursor(Qt::PointingHandCursor));
        btn_login->setStyleSheet(QString::fromUtf8("background-color:  #800080;\n"
"border-radius: 10px;\n"
"border: none;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #fff;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
""));

        verticalLayout_2->addWidget(btn_login);

        btn_primeiro_acesso = new QPushButton(layoutWidget);
        btn_primeiro_acesso->setObjectName("btn_primeiro_acesso");
        btn_primeiro_acesso->setFont(font1);
        btn_primeiro_acesso->setCursor(QCursor(Qt::PointingHandCursor));
        btn_primeiro_acesso->setStyleSheet(QString::fromUtf8("background: none;\n"
"border-radius: 10px;\n"
"border: 2px solid #800080;\n"
"font: 900 9pt \"Zabal DEMO Black\";\n"
"color: #800080;\n"
"font-size: 20px;\n"
"padding-top: 10px;\n"
"padding-bottom: 10px;\n"
"\n"
""));

        verticalLayout_2->addWidget(btn_primeiro_acesso);


        verticalLayout_3->addLayout(verticalLayout_2);

        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 726, 21));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName("statusbar");
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("JanelaLogin", "Ol\303\241, seja bem vindo(a)!", nullptr));
        txt_username->setPlaceholderText(QCoreApplication::translate("JanelaLogin", "Username", nullptr));
        txt_password->setPlaceholderText(QCoreApplication::translate("JanelaLogin", "Senha", nullptr));
        btn_login->setText(QCoreApplication::translate("JanelaLogin", "Login", nullptr));
        btn_primeiro_acesso->setText(QCoreApplication::translate("JanelaLogin", "Primeiro Acesso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
