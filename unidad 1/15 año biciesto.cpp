// autor: carlos alberto garcia benitez

#include <iostream>

using namespace std;

//calcular si un año es biciesto o no

int main(){
	
	int year;
	cout << "Please give a year: ";
	cin >> year;
	
	if (year % 4 == 0) {
		if (year % 100 == 0){
		
		if (year % 400 == 0)
		cout << year << " It is a leap year! (anio  biciesto)." << endl;
		else
		cout << year <<  " It is not  a leap year! (no es anio biciesto)." << endl;
		}else{
			cout << year << " It is a leap year! (anio biciesto)." << endl;
			}
		}else{
			cout << year << " It is not leap year! (no es anio biciesto)" << endl;
		}

	return 0;
}


