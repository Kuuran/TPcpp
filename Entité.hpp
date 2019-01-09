#include <iostream>


class Entité 
{
protected:
	std::string nom;
	int vie;
	std::string camp;

	
public:

    std::string getCamps();

	int getVie();
    std::string getNom();
    void setCamps(std::string val);
    void setVie (int tmpvie);
    void setNom (std::string name);
    virtual void perdreVie(int vie) =0;



};
