// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){
	
	double nota;
	cout << "Ingresa la nota que obtuviste en el examen: ";
	cin >> nota;
	string resultado;
	
	resultado = (nota >= 6) ? "aprobo" : "reprobo";
	cout << "Usted " << resultado << " el examen. " << endl;
	
	resultado = (nota == 0)? "no tiene nota en" : ((nota >= 6) ? "aprobo" : "reprobo");
	cout << "Usted "<< resultado << " el examen" << endl;
	
	return 0;

		
}
