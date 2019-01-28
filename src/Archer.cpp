#include "../include/project/Archer.hpp"

Archer::Archer(int camp) : Unite("Archer", camp){
    prix = 12;
    vie =8;
    attaque = 3;
    porteeMin = 1;
    porteeMax = 3;
}

bool Archer::perdreVie(int vie) {
    this->vie -= vie;
    return this->estMorte();
}