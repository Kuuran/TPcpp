#include "Joueur.hpp"

Joueur::Joueur() : Entite() {}
Joueur::Joueur(std::string nom, int camp) : Entite(nom, camp){}

bool Joueur::perdreVie(int vie) {
    this->vie -= vie;
    return this->estMorte();
}