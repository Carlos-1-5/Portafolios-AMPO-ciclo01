//autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){

	int a = 5, b= 10;
	int*p1, *p2;	
	p1 = &a;		
	p2 = &b;
	*p1 = 10;
	p1 = p2;
	*p1 = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	

return 0;
}


