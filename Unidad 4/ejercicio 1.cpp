// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

void Menu();
	Nodo *crearNodo(int, Nodo *);
	void insertar(Nodo *&, int, Nodo *);
	void mostrarArbol(Nodo *, int);
	bool busqueda(Nodo *, int);
	void preorder(Nodo *);
	void inorder(Nodo *);
	void postorder(Nodo *);
	void eliminar(Nodo *, int);
	void eliminarNodo(Nodo *);
	Nodo *minimo(Nodo *);
	void reemplazar(Nodo *, Nodo);
	void destruirNodo(Nodo *);
	Nodo *arbol = NULL;
	
	Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	nuevoNodo->padre = padre;
	return nuevoNodo;	
	}
	


void insertar(Nodo *&arbol, int n, Nodo *padre){
	if(arbol == NULL){
		Nodo *nuevoNodo = crearNodo(n,padre);
		arbol = nuevoNodo;
	} else {
		int valorRaiz = arbol->dato;
		if(n < valorRaiz){
			insertar(arbol->izq, n, arbol);
		} else {
			insertar(arbol->der, n, arbol);
		}
	}
}

void mostrarArbol(Nodo *arbol, int count){
	if(arbol==NULL){
		return;
	} else {
		mostrarArbol(arbol->der, count+1);
		for(int i =0; i < count; i++){
			cout << " ";
		}
		cout << arbol->dato << endl;
		mostrarArbol(arbol->izq, count+1);
	}
}

bool busqueda(Nodo *arbol, int n){
	if(arbol==NULL){
		return false;
	} else if(arbol->dato==n){
		return true;
	}else if(n < arbol->dato){
		return busqueda(arbol->izq, n);
	}else{
		return busqueda(arbol->der, n);
	}
}

void preorder(Nodo *arbol){
	if(arbol == NULL){
		return;
	} else{
		cout << arbol->dato << "_";
		preorder(arbol->izq);
		preorder(arbol->der);
	}
}

void inorder(Nodo *arbol){
	if(arbol == NULL){
		return;
	} else {
		inorder(arbol->izq);
		cout << arbol->dato << "_";
		inorder(arbol->der);
	}
}

void postorder(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		postorder(arbol->izq);
		postorder(arbol->der);
		cout << arbol->dato << "-";
	}
}

Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){
		return NULL;
	}
	if(arbol->izq){
		return minimo(arbol->izq);
	} else{
		return arbol;
	}
}

void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		} else if(arbol->dato = arbol->padre->der->dato){
			arbol->padre->der =nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}

void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	delete nodo;
}

void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	 } else if(nodoEliminar->izq){
	 	reemplazar(nodoEliminar, nodoEliminar->izq);
	 	destruirNodo(nodoEliminar);
	 } else if(nodoEliminar->der){
	 	reemplazar(nodoEliminar, nodoEliminar->der);
	 	destruirNodo(nodoEliminar);
	 } else {
	 	reemplazar(nodoEliminar, NULL);
	 	destruirNodo(nodoEliminar);
	 }
}

void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){
		return;
	} else if (n < arbol->dato){
		eliminar(arbol->izq, n);
	} else if (n > arbol->dato){
		eliminar(arbol->der, n);
	} else {
	 eliminarNodo(arbol);
}
}

void menu(){
	int dato, opcion, contador=0;
	do{
		cout << "-------------------------------------------" << endl;
		cout << "                     menu                  " << endl;
		cout << "Selecciona la opcion deseada:              " << endl;
		cout << "1. insertar nodo" << endl;
		cout << "2. mostrar arbol" << endl;
		cout << "3. buscar nodo" << endl;
		cout << "4. imprimir preorder"<< endl;
		cout << "5. imprimir inorder" << endl;
		cout << "6. imprimir postorder" << endl;
		cout << "7. eliminar un nodo" << endl;
		cout << "8. salir" << endl;
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "digite el nuemro: " << endl;
				cin >> dato;
				insertar(arbol, dato, NULL);
				break;
			case 2:
				cout << "arbol: " << endl;
				mostrarArbol(arbol,contador);
				break;
			case 3:
				cout << "Digite el numero que desea buscar: "<< endl;
				cin >> dato;
				if(busqueda(arbol,dato)){
					cout << "Elemento " << dato << " ha sido encontrado" << endl;
				} else {
					cout << "Elemento no se encuentra en el arbol" << endl;
				}
				break;
			case 4:
				cout << "preorder: " << endl;
				preorder(arbol);
				break;
			case 5:
				cout << "inorder: " << endl;
				inorder(arbol);
				break;
			case 6:
				cout << "postorder: " << endl;
				postorder(arbol);
				break;
			case 7:
				cout << "Digite el numero que desea eliminar: " << endl;
				cin >> dato;
				eliminar(arbol, dato);
				break;
		}
		
	}
	while(opcion!=0);
}

int main(){
	menu();
	return 0;
}





