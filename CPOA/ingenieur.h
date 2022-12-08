/**
* @file ingenieur.h
* @brief Fichier de déclaration de la classe ingenieur
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef INGENIEUR_H
#define INGENIEUR_H

#include "personne.h"

/**
* @class ingenieur
* @brief Classe representant un ingenieur, une sous-classe de la classe personne
* @date 07/12/2022
*/
class Ingenieur : public Personne
{
public:
    Ingenieur(char n[],char p[],char m[]);
    ~Ingenieur();
    void Print();

};

#endif // INGENIEUR_H
