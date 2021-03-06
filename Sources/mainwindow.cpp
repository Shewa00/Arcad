#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"

extern Game *game;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_ExitButton_clicked()
{
    this->close();
}

void MainWindow::on_PlayButton_clicked()
{
    game->GameStart();
    this->hide();
}


MainWindow::~MainWindow()
{
    delete ui;
}
