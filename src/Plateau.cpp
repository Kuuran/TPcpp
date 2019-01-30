#include "../include/project/Plateau.hpp"

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
bool Plateau::placer(Unite* e, unsigned long pos){
    if (this->isEmpty(pos)) {
        plateau.at(pos) = e;
        e->setPosition((int)pos);
        return true;
    }
    return false;
}

void Plateau::retirer(unsigned long pos){
    if((int)pos<taille) {
        plateau.at(pos) = nullptr;
    }
}

bool Plateau::isEmpty(unsigned long pos){
    if((int)pos<taille){
        return plateau.at(pos) == nullptr;
    }
    return false;
}

int Plateau::getCampPos(unsigned long pos) {
    if(!this->isEmpty(pos)){
        return this->plateau.at(pos)->getCamps();
    }
    return 0;
}