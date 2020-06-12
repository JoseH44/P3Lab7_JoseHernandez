#include "Elefante.h"

Elefante::Elefante(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'E';
	else if(jugador == 1)	
		this->caracter = '3';
}

bool Elefante::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Elefante::~Elefante()
{
}
