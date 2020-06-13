#include "Chatarunga.h"

#include <iostream>

#include <string>
using namespace std;


Chatarunga::Chatarunga()
{
	turno = true;
	size = 8;
	tablero = new Pieza**[size];
	
	for(int i = 0;i<size;i++){
		tablero[i] = new Pieza*[size];
	}
	///instanciar size x size casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
		   tablero[i][j] = NULL;
}

void Chatarunga::imprimirTablero(){
	cout<<" A B C D E F G H"<<endl;
	for(int i=0;i<size;i++){
		cout<<endl<<i<<" ";
		
		for(int j=0;j<size;j++){
			if(tablero[i][j] == NULL){
				cout<<" "<<"."<<" ";
			}else{
				cout<<" "<<tablero[i][j]->getCaracter()<<" ";
			}
			
		}
		cout<<endl;
	}
}

void Chatarunga::llenarTablero(){
	//llenado de ministro y raja
	tablero[0][3] = new Raja(0,3,tablero,0);//raja negro
	tablero[size-1][4] = new Raja(size-1,4,tablero,1);//raja blanco
	
	tablero[0][4] = new Ministro(0,4,tablero,0);//ministro negro
	tablero[size-1][3] = new Ministro(size-1,3,tablero,1);//ministro blanco
	
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			
			if(i==1)//llenado de infanterias
				tablero[i][j] = new Infanteria(i,j,tablero,0);
			if(i==6)//llenado de infanterias
				tablero[i][j] = new Infanteria(i,j,tablero,1);
			
			if((i == 0 && j == size-1) || (i == 0 && j == 0))//llenado de torres
				tablero[i][j] = new Torre(i,j,tablero,0);
			
			if((i== size-1 && j == 0) || (i== size-1 && j == size-1))//llenado de torres
				tablero[i][j] = new Torre(i,j,tablero,1);
			
			if((i == 0 && j==1)||(i == 0 && j == size-2))//llenado de cabbalos
				tablero[i][j] = new Caballo(i,j,tablero,0);
				
			if((i == size-1 && j==1)||(i == size-1 && j == size-2))//llenado de caballos
				tablero[i][j] = new Caballo(i,j,tablero,1);
			
			if((i == 0 && j==2)||(i == 0 && j == size-3))  //llenado de elefantes
				tablero[i][j] = new Elefante(i,j,tablero,0);
				
			if((i == size-1 && j==2)||(i == size-1 && j == size-3))//llenado de elefantes
				tablero[i][j] = new Elefante(i,j,tablero,1);
				
		}  
	}//fin del for externo
	
	
		
}

void Chatarunga::jugar(){
	int x,y,i,j;
	x= 0;
	y= 0;
	i = 0;
	j = 0;
	string movimiento;
	if(turno){
		cout<<endl<<"Jugador 1(Piezas Blancas) Ingrese las Coordenadas: ";
		getline(cin,movimiento);
		while(!validarString(movimiento,x,y,i,j)){
			cout<<"Coordenadas Incorrectas"<<endl;
			cout<<endl<<"Jugador 1(Piezas Blancas) Ingrese las Coordenadas: ";
			getline(cin,movimiento);
		}
		tablero[x][y]->movimiento(i,j);
	
		
		
		turno = false;
	}else{
		cout<<endl<<"Jugador 2(Piezas Negras) Ingrese las Coordenadas: ";
		getline(cin,movimiento);
		while(!validarString(movimiento,x,y,i,j)){
			cout<<"Coordenadas Incorrectas"<<endl;
			cout<<endl<<"Jugador 2(Piezas Negras) Ingrese las Coordenadas: ";
			getline(cin,movimiento);
		}
		tablero[x][y]->movimiento(i,j);
		turno = true;
	}
	
}


bool Chatarunga::validarString(string pString,int& x,int& y,int& i,int& j){
	bool validez = false;
	
	x = pString[1] - '0';//fila
	y = pString[0] - 'A';//columna
	
	i = pString[4] - '0';//fila
	j = pString[3] - 'A';//columna
	
	if(((x>=0 && x< 8) && (y >= 0 && y<8)) && ((i>=0 && i< 8) && (j >= 0 && j<8))){
		validez = true;
	}
	return validez;
	
}

Chatarunga::~Chatarunga()
{
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete tablero[i][j];
			tablero[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] tablero[i];
	}
	
	delete[] tablero;
}
