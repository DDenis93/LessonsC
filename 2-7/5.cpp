#include <iostream>
using namespace std;

int main(){
	double a[] = {-10.4, 3.5, -2.6, -1.7, -4.8, 5.9, 6.0, -7.1, 11.2};
	const int size = sizeof(a)/sizeof(a[0]);
	double *pa[size];
	
	for(int i = 0; i < size; i++){
		pa[i] = &a[i]; //pa[i] = a + i;
	}
	
	for (int i = 0; i < size - 1; i++) {
		int min_i = i;
	
		for (int j = i + 1; j < size; j++) { 
			if (*(pa[j]) < *(pa[min_i]))
				{ min_i = j; } 
		} 
		
		double *temp = pa[i];
		pa[i] = pa[min_i];
		pa[min_i] = temp; 
	} 
	
	for(double item : a){ //copies
		cout << item << '\t';
	}
	cout << endl;
	
	for(double *item : pa){ //copies
		cout << *item << '\t';
	}
}
