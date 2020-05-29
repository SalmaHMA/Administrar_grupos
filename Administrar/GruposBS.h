/*
 * GruposBS.h
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include <iostream>
#include <string>
#include "Grupos.h"
#ifndef GRUPOSBS_H_
#define GRUPOSBS_H_

using namespace std;

class GruposBS {
public:
	GruposBS();
	virtual ~GruposBS();
	int buscaGrupo(Grupos grupo);
	int generaGrupo(Grupos grupo);
	int validaGrupo(Grupos grupo);
};

#endif /* GRUPOSBS_H_ */
