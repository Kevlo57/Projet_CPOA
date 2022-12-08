/**
* @file main.cpp
* @brief Fichier d'implémentation de la classe main
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "easyticket.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    EasyTicket e;

    w.setWindowTitle("EasyTicket");
    w.show();

    return a.exec();
}
