#include <iostream>
#include "Entité.hpp"

class Unité : public Entité 
{
	
public:
	virtual bool avancer() =0;
    virtual int attaquer () =0;
 
protected:
    int prix;
	int porteeMin;
	int porteeMax;
	static int id;
	int attaque;
	int position;


};
