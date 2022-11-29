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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_password;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_login;
    QPushButton *btn_primeiro_acesso;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName("JanelaLogin");
        JanelaLogin->resize(614, 363);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-dictionary")));
        JanelaLogin->setWindowIcon(icon);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background: #d6cadd;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 130, 311, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        txt_username = new QLineEdit(layoutWidget);
        txt_username->setObjectName("txt_username");

        horizontalLayout_2->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        txt_password = new QLineEdit(layoutWidget);
        txt_password->setObjectName("txt_password");
        txt_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(txt_password);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_login = new QPushButton(layoutWidget);
        btn_login->setObjectName("btn_login");

        horizontalLayout->addWidget(btn_login);

        btn_primeiro_acesso = new QPushButton(layoutWidget);
        btn_primeiro_acesso->setObjectName("btn_primeiro_acesso");
        btn_primeiro_acesso->setCursor(QCursor(Qt::PointingHandCursor));
        btn_primeiro_acesso->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #000;"));

        horizontalLayout->addWidget(btn_primeiro_acesso);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 60, 121, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/logo1.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 60, 241, 231));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imgs/01 Online Shopping 1.png")));
        label_4->setScaledContents(true);
        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 614, 21));
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
        label->setText(QCoreApplication::translate("JanelaLogin", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaLogin", "Senha       ", nullptr));
        btn_login->setText(QCoreApplication::translate("JanelaLogin", "Login", nullptr));
        btn_primeiro_acesso->setText(QCoreApplication::translate("JanelaLogin", "Primeiro Acesso", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
