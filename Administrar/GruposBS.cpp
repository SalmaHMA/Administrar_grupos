/*
 * GruposBS.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include <iostream>
#include <string>
#include "Grupos.h"
#include "GruposBS.h"
#include "GruposBD.h"

using namespace std;

GruposBS::GruposBS() {
	// TODO Auto-generated constructor stub

}

GruposBS::~GruposBS() {
	// TODO Auto-generated destructor stub
}


int GruposBS::buscaGrupo(Grupos grupo){

}

int GruposBS::generaGrupo(Grupos grupo){
	int validar;
	validar=validaGrupo(grupo);
	if(validar==1){
		GruposBD *grupoBD;
		grupoBD= new GruposBD();
		int crea;
		crea=grupoBD->guardarGrupo(grupo);
		if(crea==1){
			return crea;
		}
	}else {
		return 0;
	}return 1;

}
int GruposBS::validaGrupo(Grupos grupo){
	cout<<"Es valido"<<endl;
	return 1;
}
