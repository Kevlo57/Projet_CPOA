#include "ticket.h"

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

Ticket::~Ticket()
{

}
