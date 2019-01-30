#include "../include/project/Jeu.hpp"

Jeu::Jeu() : plateau(11), j1("j1", 1), j2("j2", 2){

    Fantassin f = Fantassin(1);
    Fantassin f2 = Fantassin(2);

    plateau.placer(&f, 0);
    plateau.placer(&f2, 11);

}