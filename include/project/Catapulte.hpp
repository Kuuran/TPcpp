#ifndef CATAPULTE_HPP
#define CATAPULTE_HPP

#include <iostream>
#include "Unite.hpp"

class Catapulte : public Unite
{
	
public:

    explicit Catapulte(int camp);
	bool perdreVie(int vie) override;

//meths



};

#endif