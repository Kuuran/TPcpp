#include <iostream>
#include "Entite.hpp"

class Unite : public Entite
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
