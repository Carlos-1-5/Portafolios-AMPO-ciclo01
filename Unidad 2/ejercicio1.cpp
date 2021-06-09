// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

void imprimirarreglo(int numeros[]){
	for (int i = 0; i < 5; ++i){
		cout << "numeros[" << i << "] : ";
		cout << numeros[i] << " " << endl;
		
	}
	
	cout << endl;
	
}

int main(){
	
	int numeros[5] = {19, 10, 8, 17, 9};
	
	imprimirarreglo(numeros);
	
	numeros[3] = 35;
	
	imprimirarreglo(numeros);
	
	cout << "Ingrese el valor de numeros[4]: ";
	cin >> numeros[4];
	
	imprimirarreglo(numeros);
	
	cout << endl;
	for(int n : numeros){
	
	cout << n << " " << endl;
	
}
	return 0;

}
