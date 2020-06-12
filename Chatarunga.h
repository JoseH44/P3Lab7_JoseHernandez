#ifndef CHATARUNGA_H
#define CHATARUNGA_H
#include "Pieza.h"
#include "Infanteria.h"
#include "Torre.h"
#include "Caballo.h"
#include "Elefante.h"
#include "Ministro.h"
#include "Raja.h"
class Chatarunga
{
	public:
		Chatarunga();
		void llenarTablero();
		void imprimirTablero();
		~Chatarunga();
	protected:
		int size;
		Pieza*** tablero;
		
};

#endif
