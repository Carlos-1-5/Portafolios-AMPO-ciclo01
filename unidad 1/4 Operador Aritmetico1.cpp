// autor: carlos alberto garcia benitez

#include <iostream>
using namespace std;

int main() {
	
	int x;
	int y;
	
	cout << " ***calcula operaciones aritmeticas de dos numeros*** \n";
	
	cout << "inserte un numero: ";
	cin >> x;
	
	cout << "inserte otro numero: ";
	cin >> y;
	
	cout << "suma: " << x + y << endl;
	cout << "resta: " << x - y << endl;
	cout << "multiplicacion: " << x * y << endl;
	cout << "division: " << x / y << endl;
	cout << "residuo de division: " << x% y << endl;
	
	++x;
	++y;
	cout << "incremento de uno: " << "x! "<< x << " y: " << y << endl;
	
	--x;
	--y;
	cout << "decremento de uno: " << "y! " << x << " y: " << y << endl;
	
	return 0;
}


