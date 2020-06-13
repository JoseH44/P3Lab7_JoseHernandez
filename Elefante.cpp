#include "Elefante.h"

Elefante::Elefante(int fila,int columna,Pieza*** tab,int jugador):Pieza(fila,columna,tab,jugador)
{
	if(jugador == 0)
		this->caracter = 'E';
	else if(jugador == 1)	
		this->caracter = '3';
}

bool Elefante::validar(int Fila, int Columna){
bool conclusion = false;
	if(validarPosicion(Fila,Columna)){
		if(this->jugador == 0){
			if((Columna == this->columna+2 ||Columna == this->columna-2) && (Fila == this->fila+2 || Fila == this->fila-2))
				conclusion = true;
		}else if(this->jugador == 1){
			if((Columna == this->columna+2 ||Columna == this->columna-2) && (Fila == this->fila+2 || Fila == this->fila-2))
				conclusion = true;
		}
		
		
	}
	return conclusion;
}

Elefante::~Elefante()
{
}
