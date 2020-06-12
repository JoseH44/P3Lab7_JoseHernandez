#include "Pieza.h"
#include <iostream>
using namespace std;

Pieza::Pieza(int fila,int columna,Pieza*** tablero,int jugador){
	this->fila = fila;
	this->columna = columna;
	this->tablero= tablero;
	this->jugador = jugador;
}

int Pieza::getFila(){
	return fila;
}

int Pieza::getColumna(){
	return columna;
}

char Pieza::getCaracter(){
	return caracter;
}

bool Pieza::validarPosicion(int pFila,int pColumna){
	if((pFila >= 0 && pFila < 8) && (pColumna >= 0 && pColumna < 8)) {
		return true;
	}else{
		return false;
	}
}

bool Pieza::movimiento(int p_fila,int p_columna){
	if(validar(p_fila,p_columna)){
		if(Pieza* ref_pieza = tablero[p_fila][p_columna]){
			delete ref_pieza;
			tablero[p_fila][p_columna] = NULL;
		}
		
		tablero[p_fila][p_columna] = tablero[fila][columna];
		tablero[fila][columna] = NULL;
		fila = p_fila;
		columna = p_columna;
	}else
		return false;
}

Pieza::~Pieza()
{
}
