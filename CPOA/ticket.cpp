/**
* @file ticket.cpp
* @brief Fichier d'implémentation de la classe ticket
* @date 07/12/2022
* @author SLIMANI | TATOGLU | LODOVICI
* @version 1.0
*/

#include "ticket.h"

/**
 * @brief Constructeur d'un ticket
 * @param[in] nt Le numero du ticket
 * @param[in] c La categorie du ticket
 * @param[in] idc L'identifiant du client ayant cree le ticket
 * @param[in] idpec L'identifiant de la personne s'occupant du ticket
 * @param[in] dd Date de creation du ticket
 * @param[in] df Date de cloture du ticket
 */
Ticket::Ticket(int nt,Categorie c,int idc,int idpec,int dd[3],int df[3])
{
    num_ticket = nt;
    categorie = c;
    id_client = idc;
    id_pris_en_charge = idpec;
    //test date valide
    for(int i=0;i<3;i++){
        date_deb[i] = dd[i];
        date_fin[i] = df[i];
    }
}

/**
 * @brief Destructeur d'un ticket
 */
Ticket::~Ticket()
{

}
