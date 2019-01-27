#ifndef ENTITE_HPP
#define ENTITE_HPP

#include <iostream>
#include <string>


class Entite
{
protected:
	std::string nom;
	int vie;
	int camp;

	
public:

	
	Entite();
	Entite(std::string nom, int camp);
	int getCamps();
	int getVie();
	std::string getNom();
    	void setCamps(int val);
   	void setVie (int tmpvie);
    	void setNom (std::string name);
    	virtual bool perdreVie(int vie) =0;
    	bool estMorte();



};

#endif
