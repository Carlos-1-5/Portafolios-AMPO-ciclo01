// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){
	int num;

	cout << " ingrese un numero entre 1 y 3: ";
	cin >> num;
	
	switch(num) {
		case 1:
			cout << " mas vale pajaro en mano que cien volando. \n";
		case 2:
			cout << " ojos que no ven, corazon que no siente. \n";
		case 3:
			cout << " no hay mal que por bien no venga. \n";
			break;
		default:
			cout << " debe ingresar 1, 2 o 3. \n";
	}

	return 0;
}
	

