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

    bool avancer(Plateau p) override;
    int attaquer (Plateau p) override;
    int action1(Plateau p) override;
    int action2 (Plateau p) override;
    int action3(Plateau p) override;


};

#endif