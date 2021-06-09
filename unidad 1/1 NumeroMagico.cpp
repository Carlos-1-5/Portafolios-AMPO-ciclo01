// Author: carlos alberto garcia benitez

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
		
		
	int magico;
	int intento;
	char respuesta;
		
	// funcion que inicializa la generacion de numero aleatorio
	srand (time(0));
	// numero aleatorio extraido del generador en un rango desde 10 al 1
	magico = rand() % 10 + 1;
		
	cout << " adivina el numero de magico: ";
	cin >> intento;
		
	// condicion para evaluar el numero ingresado
	if (magico == intento){
		cout << " correcto como lo pusiste?" << endl;
	} else if (magico > intento){
			cout << " incorrecto. el numero es mayor que " << intento << endl;
	} else{
		cout << " incorrecto. el numero es menor que " << intento << endl;
			
	}
		
	cout << " quieres saber cual era el numero? (y/n): ";
	cin >> respuesta;
	if (respuesta == 'y'){
		cout << " el numero secreto era: " << magico << endl;
	} else if ( respuesta == 'n'){
		cout << " bueno, esta bien. intentalo de nuevo." << endl;
	}	
	return 0;
}
