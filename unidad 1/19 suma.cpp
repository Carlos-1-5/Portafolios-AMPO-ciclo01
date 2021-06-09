// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){
	
	int n, sum = 0;
	
	while (n >= 0){
		cout << "Ingrese un numero a sumar (-1 para salir): ";
		cin >> n;
		sum += n;
	}

	cout << "Suma = " << sum;
	return 0;

}
