#include "../include/project/Catapulte.hpp"
#include<string>
 
using namespace std;
 
Catapulte::Catapulte(int camp) : Unite("Catapulte", camp)
{
    prix = 20;
    vie =12;
    attaque = 6;
    porteeMin = 2;// 2 a 3 ou 3 a 4 ... est ce que ca marche pour nous ?!
    porteeMax = 3;
}

bool Catapulte::perdreVie(int vie) {
    Catapulte::vie -= vie;
    return this->estMorte();
}
