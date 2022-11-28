#include "client.h"

Client::Client(char n[],char p[],char m[]) : Personne(n,p,m)
{

}

Client::~Client()
{

}

void Client::Print()
{
    std::cout << "| Client |"<<std::endl;
    Personne::Print();
}
