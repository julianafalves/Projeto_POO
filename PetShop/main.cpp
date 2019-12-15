#include "mainwindow.h"
#include <QApplication>
#include "estoque.h"
#include "produto.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    estoque* meuestoque = new estoque();

    return a.exec();
}
