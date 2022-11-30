#include "janelalogin.h"
#include "ui_janelalogin.h"
#include "janelaprincipal.h"
#include <QMessageBox>

static QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("C:/Users/ferre/OneDrive/Documentos/QT Projects/Agenda/database/agenda.db");
    if (!bancoDeDados.open()){
        QMessageBox::warning(this, "Erro","Nao foi possivel abrir o banco de dados!");

    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}



void JanelaLogin::on_btn_login_clicked()
{
    this->close();
    j_principal = new JanelaPrincipal(this);
    j_principal->show();
}


void JanelaLogin::on_btn_primeiro_acesso_clicked()
{
    this->close();
    p_acesso = new PrimeiroAcesso(this);
    p_acesso->show();
}

