/**
* @file compte.h
* @brief Fichier de déclaration de la classe compte
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef COMPTE_H
#define COMPTE_H

/**
* @class compte
* @brief Classe representant un compte
* @date 07/12/2022
*/
class Compte
{
protected:
    char* identifiant;  //!< L'identifiant du compte
    int* mot_de_passe;  //!< Le mot de passe du compte
public:
    Compte();
    ~Compte();
    void SetId(char id[]);
    void SetMdp(int mdp[]);
    char* GetId();
    int* GetMdp();
};

#endif // COMPTE_H
