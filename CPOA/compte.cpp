/**
* @file compte.cpp
* @brief Fichier d'implémentation de la classe compte
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "compte.h"

/**
 * @brief Constructeur d'un compte
 */
Compte::Compte()
{

}

/**
 * @brief Destructeur d'un compte
 */
Compte::~Compte()
{

}

/**
 * @brief Permet la modification de l'identifiant du compte
 * @param[in] id Le nouvel identifiant
 */
void Compte::SetId(char id[])
{
    identifiant = id;
}

/**
 * @brief Permet la modification du mot de passe du compte
 * @param[in] mdp Le nouveau mot de passe
 */
void Compte::SetMdp(int mdp[])
{
    mot_de_passe = mdp;
}

/**
 * @brief Permet d'obtenir l'identifiant du compte
 * @return L'identifiant du compte
 */
char* Compte::GetId()
{
    return identifiant;
}

/**
 * @brief Permet d'obtenir le mot de passe du compte
 * @return Le mot de passe du compte
 */
int* Compte::GetMdp()
{
    return mot_de_passe;
}
