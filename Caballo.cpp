#include "Caballo.h"

Caballo::Caballo(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'C';
	else if(jugador == 1)	
		this->caracter = 'O';
}

bool Caballo::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Caballo::~Caballo()
{
}
