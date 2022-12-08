/**
* @file ticket.h
* @brief Fichier de déclaration de la classe ticket
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#ifndef TICKET_H
#define TICKET_H

/**
* @enum categorie
* @brief Enumeration des differentes categorie possible pour un ticket
* @date 07/12/2022
*/
enum class Categorie{GENERALE,INCIDENT,REQUETE};

/**
* @class ticket
* @brief Classe representant une ticket
* @date 07/12/2022
*/
class Ticket
{
protected:
    int num_ticket;         //!< Le numero du ticket
    Categorie categorie;    //!< La categorie du ticket
    int id_client;          //!< L'identifiant du client ayant cree le ticket
    int id_pris_en_charge;  //!< L'identifiant de la personne s'occupant du ticket
    int date_deb[3];        //!< Date de creation du ticket
    int date_fin[3];        //!< Date de cloture du ticket


public:
    Ticket(int nt,Categorie c,int idc,int idpec,int dd[3],int df[3]);
    ~Ticket();
};

#endif // TICKET_H
