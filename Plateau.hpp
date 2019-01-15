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
    Plateau(int taille);

    bool placer(Entite e, unsigned long pos);

    void retirer(unsigned long pos);



};
