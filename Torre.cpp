#include "Torre.h"

Torre::Torre(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)//representa negras
		this->caracter = 'T';
	else if(jugador == 1)	
		this->caracter = 'Y';
}

bool Torre::validar(int Fila, int Columna){
	bool conclusion = false;
	if(validarPosicion(Fila,Columna)){
		if(this->jugador == 0){
			if((Columna == this->columna) || (Fila == this->fila))
				conclusion = true;
		}else if(this->jugador == 1){
			if((Columna == this->columna) || (Fila == this->fila))
				conclusion = true;
		}
		
		
	}
	return conclusion;
}

Torre::~Torre()
{
}
