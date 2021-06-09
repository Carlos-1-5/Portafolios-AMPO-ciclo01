// autor: carlos alberto garcia benitez

#include <iostream>
#include <cmath>
#include <string>
#include <cctype>


using namespace std;

int main(){

	int obtenerDigitos;
	cout << "ingrese una cadena de texto o digitos sin espacios: ";
	string cadena;
	char caracter;
	cin >> cadena;
	
	int i = 0;
	while (i < cadena.length()) {
		caracter = cadena.at(i);
		if (isdigit(caracter))
		cout << caracter << endl;
		i++;
		
	}
}


