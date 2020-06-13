#include "Ministro.h"

Ministro::Ministro(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'M';
	else if(jugador == 1)	
		this->caracter = 'W';
}

bool Ministro::validar(int Fila, int Columna){
bool conclusion = false;
	if(validarPosicion(Fila,Columna)){
		if(this->jugador == 0){
			if((Columna == this->columna+1 ||Columna == this->columna-1) && (Fila == this->fila+1 || Fila == this->fila-1))
				conclusion = true;
		}else if(this->jugador == 1){
			if((Columna == this->columna+1 ||Columna == this->columna-1) && (Fila == this->fila+1 || Fila == this->fila-1))
				conclusion = true;
		}
		
		
	}
	return conclusion;
}

Ministro::~Ministro()
{
}
