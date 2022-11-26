#ifndef CADASTROFUNCIONARIOS_H
#define CADASTROFUNCIONARIOS_H

#include <QMainWindow>

namespace Ui {
class CadastroFuncionarios;
}

class CadastroFuncionarios : public QMainWindow
{
    Q_OBJECT

public:
    explicit CadastroFuncionarios(QWidget *parent = nullptr);
    ~CadastroFuncionarios();

private:
    Ui::CadastroFuncionarios *ui;
};

#endif // CADASTROFUNCIONARIOS_H
