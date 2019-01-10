#include "Entité.hpp"
#include<string>

using namespace std;
 
Entité::Entité() :
{
    string nom;
    int camp;
    int vie=100;

}



string Entité::getCamps()
{
return camp;
}


int Entité::getVie()
{
return vie;
}


string Entité::getNom()
{
return nom;
}

void Entité::setCamps(string val )
{
camp=val;
}

void Entité::setVie (int tmpvie)
{
vie=tmpvie;
}

void Entité::setNom (string name )
{
nom=name;
}
