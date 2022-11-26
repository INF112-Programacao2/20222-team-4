#include "cadastrofuncionarios.h"
#include "ui_cadastrofuncionarios.h"

CadastroFuncionarios::CadastroFuncionarios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CadastroFuncionarios)
{
    ui->setupUi(this);
}

CadastroFuncionarios::~CadastroFuncionarios()
{
    delete ui;
}
