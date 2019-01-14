#include <iostream>
#include <string>


class Entite
{
protected:
	std::string nom;
	int vie;
	std::string camp;

	
public:

	
	Entite();
	Entite(std::string nom, std::string camp);
    std::string getCamps();

	int getVie();
    std::string getNom();
    void setCamps(std::string val);
    void setVie (int tmpvie);
    void setNom (std::string name);
    virtual bool perdreVie(int vie) =0;
    bool estMorte();



};
