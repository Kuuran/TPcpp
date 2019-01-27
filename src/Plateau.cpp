#include "Plateau.hpp"

Plateau::Plateau() : taille(11) {
    for (int i = 0; i<taille; i++){
        plateau.push_back(nullptr);
    }
}

Plateau::Plateau(int taille) : taille(taille) {
    for (int i = 0; i<taille; i++){
        plateau.push_back(nullptr);
    }
}

Plateau::~Plateau() = default;

//return true si il a réussi a placer l'entité sur le plateau
bool Plateau::placer(Entite* e, unsigned long pos){
    if (this->isEmpty(pos)) {
        plateau.at(pos) = e;
        return true;
    }
    return false;
}

void Plateau::retirer(unsigned long pos){
    if(pos<taille) {
        plateau.at(pos) = nullptr;
    }
}

bool Plateau::isEmpty(unsigned long pos){
    if(pos<taille){
        return plateau.at(pos) == nullptr;
    }
    return false;
}