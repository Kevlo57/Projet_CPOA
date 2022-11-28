#ifndef CLIENT_H
#define CLIENT_H

#include "personne.h"

class Client : public Personne
{
public:
    Client(char n[],char p[],char m[]);
    ~Client();
    void Print();

};

#endif // CLIENT_H
