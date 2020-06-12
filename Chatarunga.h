#ifndef CHATARUNGA_H
#define CHATARUNGA_H
#include "Pieza.h"
#include "Infanteria.h"
#include "Torre.h"
#include "Caballo.h"
#include "Elefante.h"
#include "Ministro.h"
#include "Raja.h"
#include <iostream>

#include <string>
using namespace std;
class Chatarunga
{
	public:
		Chatarunga();
		void llenarTablero();
		void imprimirTablero();
		void jugar();
		bool validarString(string,int&,int&,int&,int&);
		~Chatarunga();
	protected:
		bool turno;
		int size;
		Pieza*** tablero;
		
};

#endif
