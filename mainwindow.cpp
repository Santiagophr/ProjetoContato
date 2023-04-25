#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <telefone.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonTeste_clicked()
{
    ped::Telefone fone1;
    ped::Telefone fone2(55,62,12345);
    QString saida = "Dados dos telefones \n";
    saida += fone1.toString() + "\n";
    saida += fone1.obterTelefone() + "\n";
    saida += fone2.toString() + "\n";
    saida += fone2.obterTelefone();
    ui->textEditTeste->setText(saida);
}

