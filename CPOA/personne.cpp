/**
* @file personne.cpp
* @brief Fichier d'implémentation de la classe personne
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "personne.h"
#include <cstring>

/**
 * @brief Constructeur d'une personne
 * @param[in] n Le nom de la personne
 * @param[in] p Le prenom de la personne
 * @param[in] m Le mail de la personne
 */
Personne::Personne(char n[],char p[],char m[]){
    nom = n;
    prenom  = p;
    mail = m;
}

/**
 * @brief Destructeur d'une personne
 */
Personne::~Personne(){

}

/**
 * @brief Permet la modification du nom de la personne
 * @param[in] n Le nouveau nom
 */
void Personne::SetNom(char n[]){
   nom = n;
}

/**
 * @brief Permet la modification du prenom de la personne
 * @param[in] p Le nouveau prenom
 */
void Personne::SetPrenom(char p[]){
    prenom = p;
}

/**
 * @brief Permet la modification du mail de la personne
 * @param[in] m Le nouveau mail
 */
void Personne::SetMail(char m[]){
    mail = m;
}

/**
 * @brief Permet d'obtenir le nom de la personne
 * @return Le nom de la personne
 */
char* Personne::GetNom(){
    return nom;
}

/**
 * @brief Permet d'obtenir le prenom de la personne
 * @return Le prenom de la personne
 */
char* Personne::GetPrenom(){
    return prenom;
}

/**
 * @brief Permet d'obtenir le mail de la personne
 * @return Le mail de la personne
 */
char* Personne::GetMail(){
    return mail;
}

/**
 * @brief Permet a la personne de creer un compte
 * @param[in] id L'identifiant du compte
 * @param[in] mdp Le mot de passe du compte
 */
void Personne::CreerCompte(char id[],int mdp[])
{
    compte.SetId(id);
    compte.SetMdp(mdp);
}

/**
 * @brief Permet de savoir si la personne possede un compte
 * @return Vrai si la personne possede un compte Faux sinon
 */
bool Personne::PossedeUnCompte(){
    return !(strcmp(compte.GetId(),"") == 0);
}

/**
 * @brief Permet l'affichage des caractéristiques d'une personne
 */
void Personne::Print(){
    std::cout << "Nom = " << nom <<std::endl;
    std::cout << "Prenom = " << prenom << std::endl;
    std::cout << "Mail = " << mail << std::endl;
    if(PossedeUnCompte()){
        std::cout << "Identifiant = " << compte.GetId() << std::endl;
        std::cout << "Mot de passe = " << compte.GetMdp() << std::endl;
    }
}
