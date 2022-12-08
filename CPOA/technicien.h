/**
* @file technicien.h
* @brief Fichier de déclaration de la classe technicien
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef TECHNICIEN_H
#define TECHNICIEN_H
#include "personne.h"

/**
* @class technicien
* @brief Classe representant un technicien, une sous-classe de la classe personne
* @date 07/12/2022
*/
class Technicien : public Personne
{
public:
    Technicien(char n[],char p[],char m[]);
    ~Technicien();
    void Print();

};

#endif // TECHNICIEN_H
