#include <iostream>
#include <string>


class Entité 
{
protected:
	std::string nom;
	int vie;
	std::string camp;

	
public:

	
	Entité();
	Entité(std::string nom, std::string camp);
    std::string getCamps();

	int getVie();
    std::string getNom();
    void setCamps(std::string val);
    void setVie (int tmpvie);
    void setNom (std::string name);
    virtual void perdreVie(int vie) =0;



};
