#include <iostream>
#include "lista_enteros.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	ListaEnteros miLista;
	cout << miLista.comoCadena() << endl;
	cout << (miLista.estaVacia() ? "true" : "false") << endl;
	miLista.adjuntar(5);
	miLista.insertar(0, 7);
	miLista.insertar(1, 3);
	cout << miLista.comoCadena() << endl;
	
	miLista.remover(0);
	cout << miLista.comoCadena() << endl;
	
	miLista.adjuntar(2);
	cout << miLista.comoCadena() << endl;
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl;
	cout << "Tamanio de la lista: " << miLista.tamanio() << endl;
	
//	cout << miLista.obtener(4) << endl;
	
//	cout << miLista.obtener(3) << endl;
	cout << miLista.comoCadena() << endl;
	
//	miLista.adjuntar(85);
//	cout << miLista.comoCadena() << endl;
	
	return 0;
}
