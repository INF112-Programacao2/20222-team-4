#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include <QDialog>

namespace Ui {
class Funcionarios;
}

class Funcionarios : public QDialog
{
    Q_OBJECT

public:
    explicit Funcionarios(QWidget *parent = nullptr);
    ~Funcionarios();

private:
    Ui::Funcionarios *ui;
};

#endif // FUNCIONARIOS_H
