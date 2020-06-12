#include "Infanteria.h"

Infanteria::Infanteria(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
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
