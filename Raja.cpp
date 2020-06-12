#include "Raja.h"

Raja::Raja(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
}

bool Raja::validar(int Fila, int Columna){
	if(validarPosicion(Fila,Columna)){
		//revisar si el movimiento es valido.
		
		return true;
	}else{
		return false;
	}
}

Raja::~Raja()
{
}
