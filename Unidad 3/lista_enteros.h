// autor: carlos alberto garcia benitez

#ifndef LISTA_ENTEROS_H
#define LISTA_ENTEROS_H
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

class ListaEnteros;

class NodoLista{
	friend class ListaEnteros;
	private:
		int item;
		NodoLista *siguiente;
		public:
			NodoLista(int item) : item(item), siguiente(0){ }
};

class ListaEnteros{
	private:
		int cuenta;
		NodoLista *cabeza;
		NodoLista* obtenerNodo(int indice);
		public: 
		ListaEnteros();
		ListaEnteros(const ListaEnteros &otra);
		~ListaEnteros();
		bool estaVacia();
		int tamanio();
		void insertar(int indice, int item);
		void adjuntar(int item);
		int obtener(int indice);
		bool contiene(int item);
		int remover(int indice);
		string comoCadena();
};

ListaEnteros::ListaEnteros(){
	cout << "Creando una lista vacia... " << endl;
	this->cuenta = 0;
	this->cabeza = 0;
}

ListaEnteros::ListaEnteros(const ListaEnteros &otra){
	cout << "Copiando una lista desde otra... " << endl;
	this->cuenta = 0;
	this->cabeza = 0;
	for(NodoLista *actual = otra.cabeza; actual != 0; actual = actual->siguiente){
		this->adjuntar(actual->item);
	}
}

ListaEnteros::~ListaEnteros(){
	cout << "Destruyendo la lista... " << endl;
	while(this->estaVacia()){
		this->remover(0);
	}
}

bool ListaEnteros::estaVacia(){
	cout << "Comprobado si la lisa esta vacia... " << endl;
	return this->cuenta == 0;
}

int ListaEnteros::tamanio(){
	return this->cuenta;
}
NodoLista* ListaEnteros::obtenerNodo(int indice){
	cout << "Obteniendo el nodo en el indice "<< indice << "..." << endl;
	if(indice < 0 || indice >= this->cuenta){
		throw "Indice fuera de rango";
	}
	NodoLista *actual = this->cabeza;
	for(int i = 0; i < indice; i++){
		actual = actual->siguiente;
	}
	return actual;
}

void ListaEnteros::insertar(int indice, int item){
	cout << "Insertando un nodo en el indice " << indice << "..." << endl;
	if(indice < 0 || indice > this->cuenta){
		throw "Indice fuera de rango";
	}
	
	NodoLista *nuevoNodo = new NodoLista(item);
	
	if(indice == 0){
		nuevoNodo->siguiente = this->cabeza;
		this->cabeza = nuevoNodo;
	}else{
		NodoLista *previo = obtenerNodo(indice -1);
		nuevoNodo->siguiente = previo->siguiente;
		previo->siguiente = nuevoNodo;
	}
	this->cuenta++;
}

void ListaEnteros::adjuntar(int item){
	this->insertar(this->cuenta, item);
}

int ListaEnteros::obtener(int indice){
	cout << "Recuperando elemento en el indice " << indice << endl;
	return this->obtenerNodo(indice)->item;
}

bool ListaEnteros::contiene(int item){
	cout << "Verificando si la lista contiene " << item << "..." << endl;
	for(NodoLista *actual = this->cabeza; actual != 0; actual = actual->siguiente){
		if(actual->item == item){
			return true;
			
		}
	}
	return false;
}

int ListaEnteros::remover(int indice){
	if(indice < 0 || indice >= this->cuenta){
		throw "Indice fuera de rango";
	}
	
	cout << "Removiendo el elemento en el indice " << indice << "..." << endl;
	NodoLista *nodoAeliminar = obtenerNodo(indice);
	int valor = nodoAeliminar->item;
	if(indice == 0){
		this->cabeza = nodoAeliminar->siguiente;
	}else{
		NodoLista *previo = obtenerNodo(indice - 1);
		previo->siguiente = nodoAeliminar->siguiente;
	}
	delete nodoAeliminar;
	this->cuenta--;
	return valor;
}

string ListaEnteros::comoCadena(){
	ostringstream s;
	s << "[";
	for(NodoLista *actual = this->cabeza; actual != 0; actual = actual->siguiente){
		s << actual->item;
		if(actual->siguiente != 0){
			s << ", ";
		}
	}
	s << ", ";
	return s.str();
	
}

#endif













