#ifndef FANTASSIN_HPP
#define FANTASSIN_HPP

#include <iostream>
#include "Unite.hpp"

class Fantassin : public Unite
{
private:
	bool superSoldat;

public:
    explicit Fantassin(int camp);
	~Fantassin();

	bool estSuperSoldat();
	bool perdreVie(int vie) override;


};

#endif