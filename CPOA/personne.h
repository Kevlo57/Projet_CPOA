/**
* @file personne.h
* @brief Fichier de déclaration de la classe personne
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef PERSONNE_H
#define PERSONNE_H
#include "compte.h"
#include <iostream>
#include <string>

/**
* @class personne
* @brief Classe representant une personne
* @date 07/12/2022
*/
class Personne
{
protected:

    char* nom;     //!< Le nom de la personne
    char* prenom;  //!< Le prenom de la personne
    char* mail;    //!< Le mail de la personne
    Compte compte; //!< Le compte de la personne (vide a la creation)

public:
    Personne(char n[],char p[],char m[]);
    ~Personne();
    void SetNom(char n[]);
    void SetPrenom(char p[]);
    void SetMail(char sm[]);
    char* GetNom();
    char* GetPrenom();
    char* GetMail();
    void CreerCompte(char id[],int mdp[]);
    bool PossedeUnCompte();
    void virtual Print();
};
#endif // PERSONNE_H
