// autor: carlos alberto garcia benitez

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
/* este programa recibe una "lista de numeros y nos devuelve el 
   valor maximo encontrado entre dichos numeros */
using namespace std;

int main(){
	cout << "\nIngrese una cadena de texto sin espacios: ";
	string cadena;
	char caracter;
	cin >> cadena;

	int i = 0;
	while (i < cadena.length()){
		caracter = cadena.at(i);
		if (isdigit(caracter));
		cout << caracter << endl;
		i++;
	}
return 0;

}
   

