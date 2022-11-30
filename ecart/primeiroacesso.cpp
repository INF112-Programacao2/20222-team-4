#include "primeiroacesso.h"
#include "ui_primeiroacesso.h"

PrimeiroAcesso::PrimeiroAcesso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrimeiroAcesso)
{
    ui->setupUi(this);
}

PrimeiroAcesso::~PrimeiroAcesso()
{
    delete ui;
}

void PrimeiroAcesso::on_btn_cadastrar_loja_clicked()
{
    this->close();
    cadastro_funcionarios = new CadastroFuncionarios(this);
    cadastro_funcionarios->show();
}

