/*
 * Grupos.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#include "Grupos.h"
#include "Profesor.h"
#include "Materia.h"
using namespace std;

Grupos::Grupos() {
	// TODO Auto-generated constructor stub
}

Grupos::~Grupos() {
	// TODO Auto-generated destructor stub
}

void Grupos::setGrado(int grado){
	this->grado = grado;
}
int Grupos::getGrado(){
	return grado;
}

void Grupos::setNumeroAlumnos(int numeroAlumnos){
	this->numeroAlumnos = numeroAlumnos;
}
int Grupos::getNumeroAlumnos(){
	return numeroAlumnos;
}

void Grupos::setClaveGrupo(int claveGrupo){
	this->claveGrupo = claveGrupo;
}
int Grupos::getClaveGrupo(){
	return claveGrupo;
}

void Grupos::agregarProfesor(Profesor){

}

void Grupos::agregarMateria(Materia){

}
