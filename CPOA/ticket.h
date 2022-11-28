#ifndef TICKET_H
#define TICKET_H

#include "categorie.cpp"

class Ticket
{
protected:
    int num_ticket;
    Categorie categorie;
    int id_client;
    int id_pris_en_charge;
    int date_deb[3];
    int date_fin[3];


public:
    Ticket(int nt,Categorie c,int idc,int idpec,int dd[3],int df[3]);
    ~Ticket();
};

#endif // TICKET_H
