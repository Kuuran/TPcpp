#include "project/Unite.hpp"
#include <iostream>

Unite::Unite() {

if(camp==1) position = 0;
if(camp==2) position = 11;

action=false;

}

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

