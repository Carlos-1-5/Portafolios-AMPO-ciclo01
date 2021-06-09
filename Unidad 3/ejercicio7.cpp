// autor carlos alberto garcia benitez

#include <iostream>
#include <stack>

using namespace std;

int main(){
	char continuar = 's';
	stack <char> mystack;
	//double valor;
	
	mystack.push('m');
	mystack.push('a');
	mystack.pop();
	mystack.push('r');
	mystack.push('i');
	mystack.push('o');
	mystack.pop();
	//mystack.push(24);
	//mystack.push(3.25);
	
	
	cout << "Tamanio de la pila: ";
	cout << mystack.size() << endl;
	
	while ( !mystack.empty()){
		cout << mystack.top() << endl;
		mystack.pop();
	}
	
	return 0;
 }
