/**
* @file ingenieur.cpp
* @brief Fichier d'implémentation de la classe ingenieur
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "ingenieur.h"

/**
 * @brief Constructeur d'un ingenieur
 * @param[in] n Le nom de l'ingenieur
 * @param[in] p Le prenom de l'ingenieur
 * @param[in] m Le mail de l'ingenieur
 */
Ingenieur::Ingenieur(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

/**
 * @brief Destructeur d'un ingenieur
 */
Ingenieur::~Ingenieur()
{

}


/**
 * @brief Permet l'affichage des caractéristiques d'un ingenieur
 */
void Ingenieur::Print(){
    std::cout << "| Ingenieur |"<<std::endl;
    Personne::Print();
}
