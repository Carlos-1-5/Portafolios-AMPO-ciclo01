// autor: carlos alberto garcia benitez

#ifndef CONVERSORTEMPERATURA_CONVERSORTEMPERATURA_H
#define CONVERSORTEMPERATURA_CONVERSORTEMPERATURA_H

#include <iostream>

using namespace std;

// crear un menu para el ususario

int leerseleccionusuario(){
	int seleccion;
	
	cout << "*Conversor de temperatura *" << endl;
	cout << " Seleccione el tipo de conversion " << endl;
	cout << "1- De Celcius a Fahrenheit " << endl;
	cout << "2- De Celsius a Kelvin " << endl;
	cout << "3- De Farhrenheit a Celsius " << endl;
	cout << "4- De Fahrenheit a Kelvin " << endl;
	cout << "5- De Kelvin a Celsius " << endl;
	cout << "6- De Kelvin a Fahrenheit " << endl;
		cout << " Seleccione el tipo de conversion "; 
	
	while(!(cin >> seleccion) || seleccion < 1 || seleccion > 6){
		cout << "Ingrese un valor entre 1 y 6 : ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
 
 return seleccion;	
}

double leertemperatura(){
	double temperatura;
cout << "Ingrese el valor de temperatura a convertir: ";

while(!(cin >> temperatura)){
	cout << "Ingrese un valor de temperatura: ";
	cin.clear();
	cin.ignore(1000, '\n');
	
}
 return temperatura;
}

double convertirtemperatura(int tipo, double temperatura){
	double temperaturaconvertida;
	
switch(tipo){
	case 1:
		temperaturaconvertida = 1.8 * temperatura + 32;
		cout << " La temperatura " << temperatura << " C equivale a " << temperaturaconvertida << " F. " << endl;
		break;
	case 2:
		temperaturaconvertida = temperatura + 273.15;
		cout << " La temperatura " << temperatura << " C equivale a " << temperaturaconvertida << " K. " << endl;
		break;
	case 3:
		temperaturaconvertida = (temperatura - 32)/1.8;
		cout << " La temperatura " << temperatura << " F equivale a " << temperaturaconvertida << " C. " << endl;
		break;
	case 4:
		temperaturaconvertida = (5/9)*(temperatura -32) + 273.15;
		cout << " La temperatura " << temperatura << " F equivale a " << temperaturaconvertida << " K. " << endl;
		break;
	case 5:
		temperaturaconvertida = temperatura - 273.15;
		cout << " La temperatura " << temperatura << " K equivale a " << temperaturaconvertida << " C. " << endl;
		break;
	case 6:
		temperaturaconvertida = (5/9)*(temperatura -32) + 273.15;
		cout << " La temperatura " << temperatura << " K equivale a " << temperaturaconvertida << " F. " << endl;
		break;
	default:
		cout << " opcion no valida";
		break;
	}
	return temperaturaconvertida;
	
}

#endif
