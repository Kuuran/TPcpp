#include <iostream>
#include "Entite.hpp"

class Joueur : public Entite
{
	
	
public:
    Joueur();
    Joueur(std::string nom, int camp);
    bool perdreVie(int vie);



};
