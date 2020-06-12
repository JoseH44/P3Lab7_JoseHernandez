#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	protected:
		Pieza*** tablero;
		int fila;
		int columna;
		char caracter;
		int jugador;
	public:
		Pieza(int,int,Pieza***,int);
		bool movimiento(int,int);
		char getCaracter();
		int getFila();
		int getColumna();
		bool validarPosicion(int,int);
		virtual bool validar(int,int)=0;
		~Pieza();
	
};

#endif
