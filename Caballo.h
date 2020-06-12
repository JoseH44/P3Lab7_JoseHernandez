#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(int,int,Pieza***);
		bool validar(int,int);
		~Caballo();
	protected:
};

#endif
