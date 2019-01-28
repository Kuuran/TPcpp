#ifndef UNITE_HPP
#define UNITE_HPP

#include "Entite.hpp"

class Unite : public Entite
{
	
public:
    explicit Unite(std::string nom, int camp);
 	virtual ~Unite();
	virtual bool avancer() =0;
	virtual int attaquer () =0;
	virtual bool action1() =0;
	virtual bool action2 () =0;
	virtual bool action3() =0;
	int getAttaque ();
	int getPosition ();
	void setPosition (int pos);
	int getPorteeMin();
	int getPorteeMax();
	void setStatut ();
	bool getStatut();

protected:

	int prix;
	int porteeMin;
	int porteeMax;
	static int id;
	int attaque;
	int position;
	bool statut;

};

#endif
