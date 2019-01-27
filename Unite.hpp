#ifndef UNITE_HPP
#define UNITE_HPP

#include "Entite.hpp"

class Unite : public Entite
{
	
public:
	Unite();
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

#endif