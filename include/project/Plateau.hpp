#ifndef PLATEAU_HPP
#define PLATEAU_HPP


#include "Unite.hpp"
#include <iostream>
#include <vector>
#include "Entite.hpp"

class Plateau 
{
private:
    int taille;
    std::vector<Entite*> plateau;

public:
    Plateau();

    explicit Plateau(int taille);
    ~Plateau();

    bool placer(Unite* u, unsigned long pos);

    void retirer(unsigned long pos);
    bool isEmpty(unsigned long pos);
    int getCampPos(unsigned long pos);



};

#endif