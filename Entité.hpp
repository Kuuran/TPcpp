#include <iostream>

class Entité 
{
	string nom;
	int vie;
	string camp;

	
public:

Entité ();
    string Entité::getCamps(Entité e);
    string Entité::getVie(Entité e);
    string Entité::getNom(Entité e);
    void Entité::setCamps(Entité e , string val);
    void Entité::setVie (Entité e);
    void Entité::setNom (Entité e , string name);



};
