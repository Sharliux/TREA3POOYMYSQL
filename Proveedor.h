#pragma once
#include <iostream>
#include <mysql.h>
#include "Persona.h"
#include "CONEXIONPV.h"
using namespace std;
class Proveedor : Persona{
    private: string nit;
public:
	Proveedor() {
	}
	Proveedor(string nom, string dir, int tel, string n) : Persona(nom, dir, tel) {
		nit = n;

	}
	//metodos
	//set (modificar)
	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombre = nom; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }
	//get (mostrar)
	string getNit() { return nit; }
	string getNombres() { return nombre; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
};

