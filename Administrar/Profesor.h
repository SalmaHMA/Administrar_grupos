/*
 * Profesor.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include <iostream>
#include <string>
#ifndef PROFESOR_H_
#define PROFESOR_H_

using namespace std;


class Profesor {
private:
	string nombre;
	string primerApellido;
	string segundoApellido;
	string rfc;
	int dia;
	int mes;
	int year;

public:
	Profesor();
	virtual ~Profesor();
	void setNombre(string nombre);
	string getNombre();
	void setPrimerApellido(string primerApellido);
	string getPrimerApellido();
	void setSegundoApellido(string segundoApellido);
	string getSegundoApellido();
	void setRfc(string rfc);
	string getRfc();
	void setDia(int dia);
	int getDia();
	void setMes(int mes);
	int getMes();
	void setYear(int year);
	int getYear();
};

#endif /* PROFESOR_H_ */
