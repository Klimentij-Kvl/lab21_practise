#include "mainwindow.h"

#include <QApplication>
#include <QTextStream>
using namespace std;

/*
    B9	Задано число, содержащее от двух до девяти цифр.
    Между каждой парой соседних цифр, вставить 9.

    Автор:
    Ковалевский Климентий Евгеньевич 6 группа

    Тесты:
    1234
    123456789
    111111
    12312455
    55555
    */

QTextStream cout(stdout);
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.show();
    return a.exec();
}
