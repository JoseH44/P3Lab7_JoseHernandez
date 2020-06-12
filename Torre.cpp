#include "Torre.h"

Torre::Torre(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)//representa negras
		this->caracter = 'T';
	else if(jugador == 1)	
		this->caracter = 'Y';
}

bool Torre::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Torre::~Torre()
{
}
