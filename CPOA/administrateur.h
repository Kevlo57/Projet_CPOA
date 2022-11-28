#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H

#include "personne.h"

class Administrateur : public Personne
{
public:
    Administrateur(char n[],char p[],char m[]);
    ~Administrateur();
    void Print();

};

#endif // ADMINISTRATEUR_H
