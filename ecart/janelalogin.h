#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "janelaprincipal.h"


QT_BEGIN_NAMESPACE
namespace Ui { class JanelaLogin; }
QT_END_NAMESPACE

class JanelaLogin : public QMainWindow
{
    Q_OBJECT

public:
    JanelaLogin(QWidget *parent = nullptr);
    ~JanelaLogin();

private slots:

    void on_btn_login_clicked();

private:
    Ui::JanelaLogin *ui;
    JanelaPrincipal *j_principal;
};
#endif // JANELALOGIN_H
