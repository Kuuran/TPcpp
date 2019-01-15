#include "Joueur.hpp"

bool Joueur::perdreVie(int vie) {
    this->vie -= vie;
    return this->estMorte();
}