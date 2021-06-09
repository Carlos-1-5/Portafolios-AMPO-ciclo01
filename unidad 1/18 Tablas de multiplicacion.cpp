// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

void multiplicacion(int num, int rango){
	for (int i = 1; i <= rango; i++){
		cout << num << " * " << i << " = " << num * i << endl;
	}
}


void multiplicacion(int num){
	for (int i = 1; i <= 10; i++){
		cout << num << " * " << i << " = " << num * i << endl;
	}
}

int main(){
	
	char opt = 'n';
	int num;
	int rango;
	
	cout << "Ingrese un numero positivo: ";
	cin >> num;
	
	cout << "Desea agregar un rango? (y/n): ";
	cin >> opt;
	
	if (opt == 'y'){
		cout << "Ingrese un rango para sus tablas: ";
		cin >> rango;
		multiplicacion(num,rango);
	}else {
		multiplicacion(num);
	}
return 0;	 
}
