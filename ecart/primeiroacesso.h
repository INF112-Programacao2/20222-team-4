#ifndef PRIMEIROACESSO_H
#define PRIMEIROACESSO_H

#include "cadastrofuncionarios.h"

#include <QDialog>

namespace Ui {
class PrimeiroAcesso;
}

class PrimeiroAcesso : public QDialog
{
    Q_OBJECT

public:
    explicit PrimeiroAcesso(QWidget *parent = nullptr);
    ~PrimeiroAcesso();

private slots:
    void on_btn_cadastrar_loja_clicked();

private:
    Ui::PrimeiroAcesso *ui;
    CadastroFuncionarios *cadastro_funcionarios;
};

#endif // PRIMEIROACESSO_H
