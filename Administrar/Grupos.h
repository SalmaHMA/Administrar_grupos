/*
 * Grupos.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#include "Profesor.h"
#include "Materia.h"
#ifndef GRUPOS_H_
#define GRUPOS_H_
using namespace std;

class Grupos {
private:
	int grado;
	int numeroAlumnos;
	int claveGrupo;
public:
	Grupos();
	virtual ~Grupos();
	void setGrado(int grado);
	int getGrado();
	void setNumeroAlumnos(int numeroAlumnos);
	int getNumeroAlumnos();
	void setClaveGrupo(int claveGrupo);
	int getClaveGrupo();
	void agregarProfesor(Profesor);
	void agregarMateria(Materia);
};

#endif /* GRUPOS_H_ */
