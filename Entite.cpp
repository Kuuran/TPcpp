#include "Entite.hpp"
 
Entite::Entite(){
    nom = "";
    camp = "";
    vie=100;
}

Entite::Entite(std::string nom, std::string camp) {
    Entite::nom = nom;
    Entite::camp = camp;
}

std::string Entite::getCamps(){
return camp;
}

int Entite::getVie(){
return vie;
}

std::string Entite::getNom(){
return nom;
}

void Entite::setCamps(std::string val ){
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