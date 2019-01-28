#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Unite.hpp"

class Archer : public Unite
{
	
public:

    explicit Archer(int camp);
	bool perdreVie(int vie) override;
};

#endif