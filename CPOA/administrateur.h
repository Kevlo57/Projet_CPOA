/**
* @file administrateur.h
* @brief Fichier de déclaration de la classe administrateur
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include "personne.h"

/**
* @class aministrateur
* @brief Classe representant un administrateur, une sous-classe de la classe personne
* @date 07/12/2022
*/
class Administrateur : public Personne
{
public:
    Administrateur(char n[],char p[],char m[]);
    ~Administrateur();
    void Print();

};

#endif // ADMINISTRATEUR_H
