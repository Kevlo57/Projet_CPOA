#ifndef COMPTE_H
#define COMPTE_H


class Compte
{
protected:
    char* identifiant;
    int* mot_de_passe;
public:
    Compte();
    ~Compte();
    void SetId(char id[]);
    void SetMdp(int mdp[]);
    char* GetId();
    int* GetMdp();
};

#endif // COMPTE_H
