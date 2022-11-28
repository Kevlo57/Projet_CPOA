#ifndef TECHNICIEN_H
#define TECHNICIEN_H

#include "personne.h"

class Technicien : public Personne
{
public:
    Technicien(char n[],char p[],char m[]);
    ~Technicien();
    void Print();

};

#endif // TECHNICIEN_H
