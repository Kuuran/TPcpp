#include "Entité.hpp"
#include<string>

using namespace std;
 
Entité::Entité() :
{
 
}



string Entité::getCamps(Entité e)
{
return e.camps;
}


string Entité::getVie(Entité e)
{
return e.vie;
}


string Entité::getNom(Entité e)
{
return e.nom;
}

void Entité::setCamps(Entité e , string val ) 
{
e.camps=val;
}

void Entité::setVie (Entité e ) 
{
e.vie=100;
}

void Entité::setNom (Entité e , string name ) 
{
e.camps=name;
}
