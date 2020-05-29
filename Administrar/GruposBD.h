/*
 * GruposBD.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#include "Grupos.h"
#ifndef GRUPOSBD_H_
#define GRUPOSBD_H_

using namespace std;

class GruposBD {
public:
	GruposBD();
	virtual ~GruposBD();
	int guardarGrupo(Grupos grupo);
	int verGrupo(Grupos grupo);
};

#endif /* GRUPOSBD_H_ */
