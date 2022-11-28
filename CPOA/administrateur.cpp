#include "administrateur.h"

Administrateur::Administrateur(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

Administrateur::~Administrateur()
{

}

void Administrateur::Print(){
    std::cout << "| Administrateur |"<<std::endl;
    Personne::Print();
}
