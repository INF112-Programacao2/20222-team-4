#include "funcionarios.h"
#include "ui_funcionarios.h"

Funcionarios::Funcionarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Funcionarios)
{
    ui->setupUi(this);
}

Funcionarios::~Funcionarios()
{
    delete ui;
}
