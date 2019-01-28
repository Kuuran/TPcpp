#include "../include/project/Fantassin.hpp"
 
Fantassin::Fantassin(int camp) : Unite("Fantassin", camp), superSoldat(false)
{
    prix = 10;
    vie =10;
    attaque = 4;
    porteeMin = 1;
    porteeMax = 1;
}

Fantassin::~Fantassin() = default;

bool Fantassin::estSuperSoldat(){
    return superSoldat;
}

bool Fantassin::perdreVie(int vie) {
    Fantassin::vie -= vie;
    return this->estMorte();
}
