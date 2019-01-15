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

//return true si il a réussi a placer l'entité sur le plateau
bool Plateau::placer(Entite e, unsigned long pos){
    if(pos<taille) {
        if (plateau.at(pos) == nullptr) {
            plateau.at(pos) = &e;
            return true;
        }
        return false;
    }
    return false;
}

void Plateau::retirer(unsigned long pos){
    if(pos<taille){
        plateau.at(pos) = nullptr;
    }
}