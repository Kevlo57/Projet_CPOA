/**
* @file technicien.cpp
* @brief Fichier d'implémentation de la classe technicien
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/


#include "technicien.h"

/**
 * @brief Constructeur d'un technicien
 * @param[in] n Le nom du technicien
 * @param[in] p Le prenom du technicien
 * @param[in] m Le mail du technicien
 */
Technicien::Technicien(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

/**
 * @brief Destructeur d'un technicien
 */
Technicien::~Technicien()
{

}

/**
 * @brief Permet l'affichage des caractéristiques d'un technicien
 */
void Technicien::Print(){
    std::cout << "| Technicien |"<<std::endl;
    Personne::Print();
}
