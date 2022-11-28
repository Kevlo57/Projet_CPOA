#include "compte.h"

Compte::Compte()
{

}

Compte::~Compte()
{

}

void Compte::SetId(char id[])
{
    identifiant = id;
}

void Compte::SetMdp(int mdp[])
{
    mot_de_passe = mdp;
}

char* Compte::GetId()
{
    return identifiant;
}

int* Compte::GetMdp()
{
    return mot_de_passe;
}
