/*
 * Profesor.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include <iostream>
#include <string>
#include "Profesor.h"

using namespace std;

Profesor::Profesor() {
	// TODO Auto-generated constructor stub

}

Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

void Profesor::setNombre(string nombre){
	this->nombre = nombre;
}

string Profesor::getNombre(){
	return nombre;
}

void Profesor::setPrimerApellido(string primerApellido){
	this->primerApellido = primerApellido;
}

string Profesor::getPrimerApellido(){
	return primerApellido;
}

void Profesor::setSegundoApellido(string segundoApellido){
	this->segundoApellido = segundoApellido;
}
string Profesor::getSegundoApellido(){
	return segundoApellido;
}

void Profesor::setDia(int dia){
	this->dia = dia;
}
int Profesor::getDia(){
	return dia;
}

void Profesor::setMes(int mes){
	this->mes = mes;
}
int Profesor::getMes(){
	return mes;
}

void Profesor::setYear(int year){
	this->year = year;
}
int Profesor::getYear(){
	return year;
}

void Profesor::setRfc(string rfc){
	this->rfc = rfc;
}

string Profesor::getRfc(){
	return rfc;
}
