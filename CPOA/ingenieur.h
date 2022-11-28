#ifndef INGENIEUR_H
#define INGENIEUR_H

#include "personne.h"

class Ingenieur : public Personne
{
public:
    Ingenieur(char n[],char p[],char m[]);
    ~Ingenieur();
    void Print();

};

#endif // INGENIEUR_H
