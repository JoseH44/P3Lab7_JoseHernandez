#include "Raja.h"

Raja::Raja(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'R';
	else if(jugador == 1)	
		this->caracter = 'P';
}

bool Raja::validar(int Fila, int Columna){
bool conclusion = false;
	if(validarPosicion(Fila,Columna)){
		if(this->jugador == 0){
			if((Columna == this->columna+1 ||Columna == this->columna-1 || Columna == this->columna) && (Fila == this->fila+1 || Fila == this->fila-1 ||Fila == this->fila ))
				conclusion = true;
		}else if(this->jugador == 1){
			if((Columna == this->columna+1 ||Columna == this->columna-1 || Columna == this->columna) && (Fila == this->fila+1 || Fila == this->fila-1 ||Fila == this->fila))
				conclusion = true;
		}
		
		
	}
	return conclusion;
}
Raja::~Raja()
{
}
