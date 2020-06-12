#include "Chatarunga.h"

#include <iostream>
using namespace std;



Chatarunga::Chatarunga()
{
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
