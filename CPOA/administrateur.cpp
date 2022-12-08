/**
* @file administrateur.cpp
* @brief Fichier d'implémentation de la classe administrateur
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "administrateur.h"

/**
 * @brief Constructeur d'un administrateur
 * @param[in] n Le nom de l'administrateur
 * @param[in] p Le prenom de l'administrateur
 * @param[in] m Le mail de l'administrateur
 */
Administrateur::Administrateur(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

/**
 * @brief Destructeur d'un administrateur
 */
Administrateur::~Administrateur()
{

}

/**
 * @brief Permet l'affichage des caractéristiques d'un administrateur
 */
void Administrateur::Print(){
    std::cout << "| Administrateur |"<<std::endl;
    Personne::Print();
}
