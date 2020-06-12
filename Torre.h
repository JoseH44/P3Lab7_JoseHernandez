#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"

class Torre : public Pieza
{
	public:
		Torre(int,int,Pieza***,int);
		bool validar(int,int);
		~Torre();
	protected:
};

#endif
