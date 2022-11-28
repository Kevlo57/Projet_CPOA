#include "personne.h"

#include <cstring>

Personne::Personne(char n[],char p[],char m[]){
    nom = n;
    prenom  = p;
    mail = m;
    Compte compte;
}

Personne::~Personne(){

}

void Personne::SetNom(char n[]){
   nom = n;
}

void Personne::SetPrenom(char p[]){
    prenom = p;
}

void Personne::SetMail(char m[]){
    mail = m;
}

char* Personne::GetNom(){
    return nom;
}

char* Personne::GetPrenom(){
    return prenom;
}

char* Personne::GetMail(){
    return mail;
}

void Personne::CreerCompte(char id[],int mdp[])
{
    compte.SetId(id);
    compte.SetMdp(mdp);
}

bool Personne::PossedeUnCompte(){
    return !(strcmp(compte.GetId(),"") == 0);
}

void Personne::Print(){
    std::cout << "Nom = " << nom <<std::endl;
    std::cout << "Prenom = " << prenom << std::endl;
    std::cout << "Mail = " << mail << std::endl;
    if(PossedeUnCompte()){
        std::cout << "Identifiant = " << compte.GetId() << std::endl;
        std::cout << "Mot de passe = " << compte.GetMdp() << std::endl;
    }
}
