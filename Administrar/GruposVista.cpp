/*
 * GruposVista.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include<iostream>
#include<string>
#include "GruposVista.h"
#include "Menu.h"
#include "Control.h"
#include "Grupos.h"
#include "Profesor.h"
#include "Materia.h"
#include "GruposBS.h"
#include "GruposBD.h"
using namespace std;

GruposVista::GruposVista() {
	// TODO Auto-generated constructor stub

}

GruposVista::~GruposVista() {
	// TODO Auto-generated destructor stub
}



void GruposVista::sBuscarGrupo(){
	int sec,claveGrupo;
	string nombre,nombreMateria;
	cout<<"Seleccione una opcion para buscar un grupo:\n 1.Buscar por profesor \n 2.Buscar por materia\n 3.Buscar por clave de grupo"<<endl;
	cin>>sec;
	switch(sec){
	case 1:
		cout<<"Ingresar el nombre del profesor"<<endl;
		cin>>nombre;
		break;
	case 2:
		cout<<"Ingresar la materia"<<endl;
		cin>>nombreMateria;
		break;
	case 3:
		cout<<"Ingresar la clave del grupo "<<endl;
		cin>>claveGrupo;
		break;
	}

}


void GruposVista::nCrearGrupo(){
	int grado,numeroAlumnos,claveGrupo,dia,mes,year,claveMateria,noGrado;
	string nombre,primerApellido,segundoApellido,rfc,nombreMateria;
	cout<<"Ingresar el grado: "<<endl;
	cin>>grado;
	cout<<"Ingresar el numero de alumnos: "<<endl;
	cin>>numeroAlumnos;
	cout<<"Asignar una clave de gruppo: "<<endl;
	cin>>claveGrupo;

	Profesor *profesor;
	profesor = new Profesor();
	profesor->getNombre();
	profesor->setNombre(nombre);
	profesor->getPrimerApellido();
	profesor->setPrimerApellido(primerApellido);
	profesor->getSegundoApellido();
	profesor->setSegundoApellido(segundoApellido);
	profesor->getDia();
	profesor->setDia(dia);
	profesor->getMes();
	profesor->setMes(mes);
	profesor->getYear();
	profesor->setYear(year);
	profesor->getRfc();
	profesor->setRfc(rfc);

	Materia *materia;
	materia = new Materia();
	materia->getNombreMateria();
	materia->setNombreMateria(nombreMateria);
	materia->getClaveMateria();
	materia->setClaveMateria(claveMateria);
	materia->getNoGrado();
	materia->setNoGrado(noGrado);

}
