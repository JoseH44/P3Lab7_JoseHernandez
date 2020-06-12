#include "Elefante.h"

Elefante::Elefante(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
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
