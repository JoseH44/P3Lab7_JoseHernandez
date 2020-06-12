#include "Torre.h"

Torre::Torre(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
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
