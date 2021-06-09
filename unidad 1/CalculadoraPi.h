// autor: carlos alberto garcia benitez

#ifndef CALCULADORAPI_CALCULADORAPI_H
#define CALCULADORAPI_CALCULADORAPI_H



#include <iostream>
#include <string>


using namespace std;

const double pi = 3.141592653589793238;

double sumar (double x, double y){
	cout << "suma: ";
	return x + y;
	
}

double restar(double x, double y){
	cout << "resta: \n";
	return x - y;
}

double multiplicar(double x, double y){
	cout << "multiplicacion: \n";
	return x * y;
}

double dividir(double x, double y){
	cout << "division: \n";
	return x / y;
}


double SolicitarNumero(string queNumero){
	double numero;
	cout << queNumero << ": \n";
	while(!(cin>> numero)){
		cin.clear();
		cin.ignore(1000,  '\n');
		cout << "valor no valido. intente de nuevo: ";
	}
	return numero;
}

char solicitaroperador(){
	char operador;
	cout << "seleccione la opracion ( + | - | * | / |): ";
		while(!(cin>> operador)){
		cin.clear();
		cin.ignore(1000,  '\n');
	}
	return operador;
}

void ejerciciocalculadora(){
	double numero1, numero2, resultado;
	char operador;
	
	cout << "Calculadora de operaciones con dos numeros" << endl;
	cout << "Por favor ingrese dos numeros" << endl;
	
	numero1 = SolicitarNumero("Primer numero");
	numero2 = SolicitarNumero("Segundo numero");
	operador = solicitaroperador();
	
	switch(operador){
		case '+':
			resultado = sumar(numero1,numero2);
			break;
		case '-':
			resultado = restar(numero1,numero2);
			break;
		case '*':
			resultado = multiplicar(numero1,numero2);
			break;
		case '/':
			resultado = dividir(numero1,numero2);
			break;
		default:
			cout << "Operador no soportado. intentelo de nuevo ";
			resultado = -1.0;
			break;
			
		}
		cout << "El resultado es = " << resultado << endl;
	
	
}

double valorpi(){
	return pi;
	
}



#endif

