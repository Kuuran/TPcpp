#include <utility>

#include <utility>

#include "../include/project/Entite.hpp"
 
Entite::Entite() : nom(""), camp(0), vie(100){}

Entite::Entite(std::string nom, int camp) : nom(std::move(nom)), camp(camp), vie(100){}

Entite::~Entite() = default;

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
nom= std::move(name);
}

bool Entite::estMorte() {
    return vie <= 0;
}

