#include <iostream>
#include <vector>
#include "Entite.hpp"

#define TAILLE 11

class Plateau 
{
private:
    int taille;
    std::vector<Entite*> plateau;

public:
    Plateau();

    explicit Plateau(int taille);
    ~Plateau();

    bool placer(Entite* e, unsigned long pos);

    void retirer(unsigned long pos);
    bool isEmpty(unsigned long pos);



};
