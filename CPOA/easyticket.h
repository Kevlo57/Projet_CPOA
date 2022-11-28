#ifndef EASYTICKET_H
#define EASYTICKET_H


#include "personne.h"
#include "ticket.h"
#include <list>

class EasyTicket
{
protected:
    //list perso a faire
    std::list<Personne> listPersonne;
    std::list<Ticket> listTicket;
public:
    EasyTicket();
    ~EasyTicket();
};

#endif // EASYTICKET_H
