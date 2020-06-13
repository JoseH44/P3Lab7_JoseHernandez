#include <iostream>
#include <string>
using namespace std;




#include "Chatarunga.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string respuesta;
	Chatarunga* juego = new Chatarunga();
	cout<<"----BIENVENIDO A CHATARUNGA-----"<<endl<<endl;
	do{
		cout<<endl<<"Desea Jugar? (1 = Si): ";
		
		getline(cin,respuesta);
		cout<<endl;
		if(respuesta == "1")
			juego->jugar();
		else
			cout<<endl<<"Esperemos se Haya Divertido!";
	}while(respuesta=="1");
	delete juego;
	return 0;
}
