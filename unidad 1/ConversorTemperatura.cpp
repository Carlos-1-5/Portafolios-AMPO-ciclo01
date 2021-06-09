 // autor: carlos alberto garcia benitez
 
#include "ConversorTemperatura.h"

using namespace std;

int main(){
	
	char continuar;
	
	do {
	
	int tipo = leerseleccionusuario();
	double temperatura = leertemperatura();
	convertirtemperatura(tipo, temperatura);
	
	cout << "\n Desea convertir otra temperatura? (y/n) ";
	while(!(cin >> continuar)){
		cout << "Seleccione 'y' para cpntinuar 'n' para terminar ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
}
	while(continuar == 'y');
	return 0;
}

