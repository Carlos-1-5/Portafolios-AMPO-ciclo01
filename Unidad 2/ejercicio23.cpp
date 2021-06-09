// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

	int markus = 25;
	int kara = 90;
	int connor = 22;
	int*alice = &kara;
	int hank = connor;
	int luther = *alice;

void imprimir(){
	
	
	cout << "markus = " << markus << endl;
	cout << "&markus = " << &markus << endl;
	cout << "kara = " << kara << endl;
	cout << "&kara = " << &kara << endl;
	cout << "connor = " << connor << endl;
	cout << "&connor = " << &connor << endl;
	cout << "alice = " << alice << endl;
	cout << "&alice = " << &alice << endl;
	cout << "*alice = " << *alice << endl;
	cout << "&hank = " << &hank << endl;
	cout << "&luther = " << &luther << endl;
	cout << "luther = *alice = " << luther << endl;
	cout << "_______________________________ " << endl;
	
	
}

int main(){
	
	
	imprimir();
	
	*alice = 30;
	
	imprimir();
	
	
	
	return 0;
	
}
