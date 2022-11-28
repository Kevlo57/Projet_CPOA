/**
 * @file main.c
 * @brief Classe main de l'application
 * @author SLIMANI Kamelia | TATOGLU Emel | LODOVICI Kevin
 * @version 1.0
 * @date 28/11/2022
*/

#include "client.h"
#include "easyticket.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    EasyTicket e;

    char c1[] = "kevin";
    char c2[] = "lodovici";
    char c3[] = "kevlo57240@gmail.com";
    char c4[] = "kevlo57";
    int tab[3];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;

    Client* client = new Client(c1,c2,c3);
    client->Print();

    client->CreerCompte(c4,tab);
    client->Print();


    w.setWindowTitle("EasyTicket");
    w.show();
    return a.exec();
}
