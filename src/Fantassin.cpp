#include "../include/project/Fantassin.hpp"
 
Fantassin::Fantassin(int camp) : Unite("Fantassin", camp), superSoldat(false)
{
    prix = 10;
    vie =10;
    attaque = 4;
    porteeMin = 1;
    porteeMax = 1;
}

Fantassin::~Fantassin() = default;

bool Fantassin::estSuperSoldat(){
    return superSoldat;
}

bool Fantassin::perdreVie(int vie) {
    Fantassin::vie -= vie;
    return this->estMorte();
}

bool Fantassin::avancer(Plateau p) {

    if (this->camp == 1){
        if( this->position != 10){
            if (p.isEmpty(static_cast<unsigned long>(this->position + 1))){
                return true;
            }
        }
    }
    else if (this->camp == 2){
        if( this->position != 1){
            if (p.isEmpty(static_cast<unsigned long>(this->position - 1))){
                return true;
            }
        }
    }

    return false;
}

int Fantassin::attaquer(Plateau p) {
    if (this->camp == 1){
        if( this->position != 10){
            if (p.getCampPos(static_cast<unsigned long>(this->position +1)) == 2){
                return this->attaque;
            }
        }
        else if (this->position == 10) return this->attaque;
    }
    else if (this->camp == 2){
        if( this->position != 1) {
            if (p.getCampPos(static_cast<unsigned long>(this->position - 1)) == 1) {
                return this->attaque;
            }
        }
        else if (this->position == 1) return this->attaque;
    }

    return 0;
}

int Fantassin::action1(Plateau p) {
    return this->attaquer(p);
}

int Fantassin::action2(Plateau p) {
    return this->avancer(p);
}

int Fantassin::action3(Plateau p) {
    if(this->estSuperSoldat()) return this->attaquer(p);
    return 0;
}
