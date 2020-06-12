#include "Infanteria.h"

Infanteria::Infanteria(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'I';
	else if(jugador == 1)	
		this->caracter = 'L';
}

bool Infanteria::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Infanteria::~Infanteria()
{
}
