/**
* @file client.h
* @brief Fichier de déclaration de la classe client
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef CLIENT_H
#define CLIENT_H
#include "personne.h"

/**
* @class client
* @brief Classe representant un client, une sous-classe de la classe personne
* @date 07/12/2022
*/
class Client : public Personne
{
public:
    Client(char n[],char p[],char m[]);
    ~Client();
    void Print();

};

#endif // CLIENT_H
