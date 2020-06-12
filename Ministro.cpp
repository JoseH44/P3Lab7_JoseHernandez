#include "Ministro.h"

Ministro::Ministro(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'M';
	else if(jugador == 1)	
		this->caracter = 'W';
}

bool Ministro::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Ministro::~Ministro()
{
}
