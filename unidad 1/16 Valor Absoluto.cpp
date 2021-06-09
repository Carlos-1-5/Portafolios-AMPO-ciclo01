// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

// funcion de tipo int que toma un parametro int
int absoluto(int var){
	if (var < 0)
		var = -var;
		return var;
}

// funcion de tipo double que toma un parametro double

double absoluto(double var){
	if (var < 0)
	var = -var;
	return var;
}

int main(){
	//calcular el valor absoluto de un numero
	int num1 = -496;
	double numd = -1354.268;
	
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) << endl;
	cout << "El valor absoluto de: " << numd << " es = " << absoluto(numd) << endl;
	return 0;
}

