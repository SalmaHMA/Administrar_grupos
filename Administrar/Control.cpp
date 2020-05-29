/*
 * Control.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: DELL
 */

#include <iostream>
#include <string>
#include "Control.h"
#include "Menu.h"
#include "GruposVista.h"

using namespace std;


Control::Control() {
	// TODO Auto-generated constructor stub
}

Control::~Control() {
	// TODO Auto-generated destructor stub
}

int main(){
	int r=0;
	do{
	Menu *menu;
	menu = new Menu();
	menu->muestrameMenu();
	cout<<"Quieres ver de nuevo el menu?"<<endl;
	cin>>r;
	}while(r==1);

}
