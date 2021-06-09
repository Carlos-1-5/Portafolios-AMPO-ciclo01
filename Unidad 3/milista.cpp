// autor: carlos alberto garcia benitez

#include <iostream>
#include "lista_generica_h.h"

using namespace std;

int main(int argc, const char * argv[]){
	Lista<int> milista;
	
	milista.adjuntar(5);
	milista.insertar(52);
	milista.adjuntar(63);
	milista.adjuntar(74);
	milista.adjuntar(99);
	milista.adjuntar( 30);
	
	cout << milista.comoCadena() << endl;
	
	return 0;
	
}
