/*
 * GruposVista.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#ifndef GRUPOSVISTA_H_
#define GRUPOSVISTA_H_
using namespace std;

class GruposVista {
public:
	GruposVista();
	virtual ~GruposVista();
	void sBuscarGrupo();
	void nCrearGrupo();
};

#endif /* GRUPOSVISTA_H_ */
