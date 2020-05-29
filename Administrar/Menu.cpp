/*
 * Menu.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include "Menu.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include "GruposVista.h"
#include <stdlib.h>

using namespace std;


Menu::Menu() {
	// TODO Auto-generated constructor stub
}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::muestrameMenu(){
	int opc;
	cout<<"Seleccione una opcion:\n 1.Registrar alumno\n 2.Registrar profesor\n 3.Registrar materia\n 4.Registar grupo\n 5.Administrar grupos\n 6.Asignar materia a profesor\n 7.Inscribir alumno a un curso"<<endl;
	cin>>opc;
	switch(opc){
	case 1:
		cout<<"agregar"<<endl;
		break;
	case 2:
		cout<<"agregar"<<endl;
		break;
	case 3:
		cout<<"agregar"<<endl;
		break;
	case 4:
		cout<<"agregar"<<endl;
		break;
	case 5:
		int adm;
		cout<<"Desea buscar un grupo o crear un grupo:\n 1.Buscar un grupo\n 2.Crear un grupo"<<endl;
		cin>>adm;
		switch(adm){
		case 1:
			GruposVista *gruposVista;
			gruposVista = new GruposVista;
			gruposVista->sBuscarGrupo();
			break;
		case 2:
			GruposVista *gruposVista;
			gruposVista = new GruposVista;
			gruposVista->nCrearGrupo();
			break;
		default:
			cout<<"No existe esa opcion";
			break;
		}
		break;
	case 6:
		cout<<"agregar"<<endl;
		break;
	case 7:
		cout<<"agregar"<<endl;
		break;
	default:
		cout<<"No existe esa opcion";
		break;
	}
}
