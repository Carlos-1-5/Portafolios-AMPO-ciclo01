// autor: carlos alberto garcia benitez

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
/* este programa recibe una "lista de numeros y nos devuelve el 
   valor maximo encontrado entre dichos numeros */
using namespace std;

int main(){
	
	int numero;
	int maximo;
	double raizcuadrada;
	
	for (int i = 0; i < 10; i++) {
		cout << "ingrese el numero " << (i+1) << ": ";
		cin >> numero;
		cin.clear();
		cin.ignore(10, '\n');
		if (i == 0)
			maximo = numero;
		if (numero > maximo)
			maximo = numero;
	
	}
		raizcuadrada = sqrt(maximo);
		cout << "el valor maximo es: " << maximo << endl;
		cout << "su raiz cuadrada es: " << raizcuadrada << endl;

return 0;

}
	

