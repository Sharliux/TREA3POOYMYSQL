#pragma once
#include<mysql.h>
#include <iostream>
using namespace std;
class CONEXIONPV{
private: MYSQL* conectar;
public:
	void abrir_conexion() {
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "db_emprendimiento", "Tiend@123456", "db_tienda", 3306, NULL, 0);

	}
	MYSQL* getConectar() {
		return conectar;
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}

};

