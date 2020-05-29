/*
 * Materia.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#include "Materia.h"
using namespace std;

Materia::Materia() {
	// TODO Auto-generated constructor stub

}

Materia::~Materia() {
	// TODO Auto-generated destructor stub
}

void Materia::setNombreMateria(string nombreMateria){
	this->nombreMateria = nombreMateria;
}
string Materia::getNombreMateria(){
	return nombreMateria;
}

void Materia::setClaveMateria(int claveMateria){
	this->claveMateria = claveMateria;
}
int Materia::getClaveMateria(){
	return claveMateria;
}

void Materia::setNoGrado(int noGrado){
	this->noGrado = noGrado;
}
int Materia::getNoGrado(){
	return noGrado;
}
