// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

int main()
{

	int x;
	int y;
	
	cin >> x;
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;

	 // 0 = false ( falso) y 1 = true ( verdadero)
	
	cout << ( x < y) << endl;		// menor que
	cout << ( x > y) << endl;		// mayor que
	cout << ( x <= y) << endl;		// menor o igual que
	cout << ( x >= y) << endl;		// mayor o igual que
	cout << ( x != y) << endl;		// diferente a
	cout << ( x == y) << endl;		// igual que
	
	return 0;	
	
}
