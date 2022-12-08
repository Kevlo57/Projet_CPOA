/**
* @file easyticket.h
* @brief Fichier de déclaration de la classe easyticket
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef EASYTICKET_H
#define EASYTICKET_H
#include "personne.h"
#include "ticket.h"
#include <list>

/**
* @class easyticket
* @brief Classe representant l'application easyticket
* @date 07/12/2022
*/
class EasyTicket
{
protected:
    std::list<Personne> listPersonne; //!< La liste des personne
    std::list<Ticket> listTicket;     //!< La liste des ticket
public:
    EasyTicket();
    ~EasyTicket();
};

#endif // EASYTICKET_H
