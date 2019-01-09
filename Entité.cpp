#include "Entité.hpp"
 
Entité::Entité() :
{
    nom = "";
    camp = "";
    vie=100;

}

Entité::Entité(std::string nom, std::string camp) {
    Entité::nom = nom;
    Entité::camp = camp;
}

std::string Entité::getCamps()
{
return camp;
}


int Entité::getVie()
{
return vie;
}


std::string Entité::getNom()
{
return nom;
}

void Entité::setCamps(std::string val )
{
camp=val;
}

void Entité::setVie (int tmpvie)
{
vie=tmpvie;
}

void Entité::setNom (std::string name )
{
nom=name;
}
