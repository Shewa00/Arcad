#include <QApplication>
#include "game.h"
#include "mainwindow.h"

Game *game;
MainWindow *Menu;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();

    Menu = new MainWindow();
    Menu->show();


    return a.exec();
}
