#include <iostream>
using namespace std;

int main(){
	int a[] = {-10, 3, -2, -1, -4, 5, 6, -7, 11};
	const int size = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < size - 1; i++) {
		int min_i = i;
	
		for (int j = i + 1; j < size; j++) { 
			if (abs(a[j]) < abs(a[min_i]))
				{ min_i = j; } 
		} 
		
		int temp = a[i];
		a[i] = a[min_i];
		a[min_i] = temp; 
	} 
	
	for(int item : a){ //copies
		cout << item << '\t';
	}
}
