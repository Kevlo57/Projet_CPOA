#include "ingenieur.h"

Ingenieur::Ingenieur(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

Ingenieur::~Ingenieur()
{

}


void Ingenieur::Print(){
    std::cout << "| Ingenieur |"<<std::endl;
    Personne::Print();
}
