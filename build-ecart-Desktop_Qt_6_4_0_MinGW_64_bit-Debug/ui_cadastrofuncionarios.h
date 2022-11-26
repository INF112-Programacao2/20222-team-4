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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroFuncionarios
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CadastroFuncionarios)
    {
        if (CadastroFuncionarios->objectName().isEmpty())
            CadastroFuncionarios->setObjectName("CadastroFuncionarios");
        CadastroFuncionarios->resize(800, 600);
        menubar = new QMenuBar(CadastroFuncionarios);
        menubar->setObjectName("menubar");
        CadastroFuncionarios->setMenuBar(menubar);
        centralwidget = new QWidget(CadastroFuncionarios);
        centralwidget->setObjectName("centralwidget");
        CadastroFuncionarios->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CadastroFuncionarios);
        statusbar->setObjectName("statusbar");
        CadastroFuncionarios->setStatusBar(statusbar);

        retranslateUi(CadastroFuncionarios);

        QMetaObject::connectSlotsByName(CadastroFuncionarios);
    } // setupUi

    void retranslateUi(QMainWindow *CadastroFuncionarios)
    {
        CadastroFuncionarios->setWindowTitle(QCoreApplication::translate("CadastroFuncionarios", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroFuncionarios: public Ui_CadastroFuncionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROFUNCIONARIOS_H
