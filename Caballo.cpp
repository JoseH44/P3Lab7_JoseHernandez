#include "Caballo.h"

Caballo::Caballo(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
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
