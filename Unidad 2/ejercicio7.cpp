// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){
	
	int numeros[2][3];
	
	cout << "Ingrese 6 numeros:" << endl;
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cin >> numeros[i][j];
		}
	}
	
	cout << "Los numeros ingresados son:" << endl;
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cout << "numeros[" << i << "][" << j << "] = " << numeros[i][j] << endl;
		}
	}
	
	return 0;
}
