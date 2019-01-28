#ifndef IA_HPP
#define IA_HPP

#include <iostream>
#include "Joueur.hpp"

class IA : public Joueur 
{
	
	
public:

    IA();
    IA(std::string nom, int camp);
    ~IA();



};

#endif