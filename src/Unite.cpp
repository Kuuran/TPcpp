#include "project/Unite.hpp"

Unite::Unite() {}

int Unite::getAttaque (){

	return attaque;
}

int Unite::getPosition () {
	return position;
}


int Unite::getPorteeMin() {
	return porteeMin;

}

int Unite::getPorteeMax() {
	return porteeMax;
}
void Unite::setStatut (){
	statut=false;
}

bool Unite:: getStatut(){
	return statut; 
}

void Unite:: setPosition (int pos){
	position=pos;
}
