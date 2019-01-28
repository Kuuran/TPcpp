#include <utility>

#include "../include/project/IA.hpp"

IA::IA() : Joueur(){}

IA::IA(std::string nom, int camp) : Joueur(std::move(nom), camp){}

IA::~IA() = default;

