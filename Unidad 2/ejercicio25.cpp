// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main(){
	int c[5] = {30,50,10,20,5};
	int *p3;
	int *p4;
	p4 = c;
	p3 = &c[0];
	int sam;
	sam = *(p3+3);
	cout << "*p3 = " << *p3 << endl;
	cout << "sam = " << sam << endl;
	cout << "p4 = " << p4 << endl;
	cout << " c = " << c << endl;
//	p3 += 2;
	//cout << "*p3 = " << *p3 << endl;
	
	return 0;
}
