// autor: carlos alberto garcia benitez

#include <iostream>
using namespace std;

void imprimirArreglo(int arr[], int size){
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
		cout << endl;
}

//cambiar dos subarreglos L y M en arr
void merge(int arr[], int low, int med, int high){
	// crear L ? A[low...med] y M ? A [med + 1...high]
	int n1 = med - low + 1;
	int n2 = high - med;
	
	int L[n1], M[n2];
	
	for(int i = 0; i < n1; i++)
	L[i] = arr[low + i];
	for(int j = 0; j < n2; j++)
	M[j] = arr[med + 1 + j];
	
	int i, j, k;
	i = 0;
	j = 0;
	k = low;
	// hasta que alcanzemos el final de L o M, escoger el mayor numero
	//de elementos L y M y colocarlos en la posicion correcta
	
	while(i < n1 && j < n2){
		if(L[i] < M[j]){
		arr[k] = L[i];
			i++;	
		}else{
			arr[k] = M[j];
			j++;
		}
		k++;
		}
		// cuando se nos termina los elemntos de L o M 
		// seleccionar los elemntos y colocarlos en el aee{low...high]
		while(i < n1){
			arr[k] = L[i];
			i++;
			k++;	
			
		}
		
		while(j < n2){
			arr[k] = M[j];
			j++;
			k++;
		}
	}
		
		
void mergeSort(int arr[], int low, int high){
	if ( low < high){
		int med = low + (high - low)/2;
		// el punto  medio es donde el arreglo srera dividido entre dos sub arrays
		mergeSort(arr, low, med);
		mergeSort(arr, med + 1, high);
		//mezclar los areglos ordenados
		merge(arr, low, med, high);
	}
}

int main(){
	int arr[] = {6, 5, 12, 10, 9, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, size -1);
	cout << "Arreglo ordenado: \n";
	imprimirArreglo(arr, size);
	return 0;
}

