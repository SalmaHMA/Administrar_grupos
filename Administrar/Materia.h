/*
 * Materia.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#ifndef MATERIA_H_
#define MATERIA_H_
using namespace std;

class Materia {
private:
	string nombreMateria;
	int claveMateria;
	int noGrado;
public:
	Materia();
	virtual ~Materia();
	void setNombreMateria(string nombreMateria);
	string getNombreMateria();
	void setClaveMateria(int claveMateria);
	int getClaveMateria();
	void setNoGrado(int noGrado);
	int getNoGrado();
};

#endif /* MATERIA_H_ */
