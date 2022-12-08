/**
* @file client.cpp
* @brief Fichier d'implémentation de la classe client
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "client.h"

/**
* @brief Constructeur d'un client
* @param[in] n Le nom du client
* @param[in] p Le prenom du client
* @param[in] m Le mail du client
*/
Client::Client(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

/**
* @brief Destructeur d'un client
*/
Client::~Client()
{

}

/**
* @brief Permet l'affichage des caractéristiques d'un client
*/
void Client::Print()
{
    std::cout << "| Client |"<<std::endl;
    Personne::Print();
}
