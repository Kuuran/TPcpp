#ifndef UNITE_HPP
#define UNITE_HPP

#include "Entite.hpp"
#include "Plateau.hpp"

class Unite : public Entite
{
	
public:
    explicit Unite(std::string nom, int camp);
 	virtual ~Unite();
	virtual bool avancer(Plateau p) =0;
	virtual int attaquer (Plateau p) =0;
	virtual int action1(Plateau p) =0;
	virtual int action2 (Plateau p) =0;
	virtual int action3(Plateau p) =0;
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
