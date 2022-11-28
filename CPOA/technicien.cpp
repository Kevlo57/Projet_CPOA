#include "technicien.h"

Technicien::Technicien(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

Technicien::~Technicien()
{

}

void Technicien::Print(){
    std::cout << "| Technicien |"<<std::endl;
    Personne::Print();
}
