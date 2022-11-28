#ifndef PERSONNE_H
#define PERSONNE_H

#include "compte.h"
#include <iostream>
#include <string>

class Personne
{
protected:
    char* nom;
    char* prenom;
    char* mail;
    Compte compte;

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
