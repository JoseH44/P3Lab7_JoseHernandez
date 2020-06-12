#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Pieza.h"

class Elefante : public Pieza
{
	public:
		Elefante(int,int,Pieza***);
		bool validar(int,int);
		~Elefante();
	protected:
};

#endif
