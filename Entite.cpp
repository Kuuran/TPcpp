#include "Entite.hpp"
 
Entite::Entite(){
    nom = "";
    camp = 0;
    vie=100;
}

Entite::Entite(std::string nom, int camp) {
    Entite::nom = nom;
    Entite::camp = camp;
}

int Entite::getCamps(){
return camp;
}

int Entite::getVie(){
return vie;
}

std::string Entite::getNom(){
return nom;
}

void Entite::setCamps (int val ){
camp=val;
}

void Entite::setVie (int tmpvie){
vie=tmpvie;
}

void Entite::setNom (std::string name ){
nom=name;
}

bool Entite::estMorte() {
    return vie <= 0;
}