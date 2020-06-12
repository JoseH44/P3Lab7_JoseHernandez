#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Pieza.h"

class Infanteria : public Pieza
{
	public:
		Infanteria(int,int,Pieza***);
		bool validar(int,int);
		~Infanteria();
	protected:
		
};

#endif
