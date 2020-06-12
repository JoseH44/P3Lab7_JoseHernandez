#include "Ministro.h"

Ministro::Ministro(int fila,int columna,Pieza*** tab):Pieza(fila,columna,tab)
{
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
