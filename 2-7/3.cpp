#include <iostream>
#include <string>
using namespace std;

int main(){
	string a[4] = {"Oslo", "Moscow", "Abu-Dhabi", "Kaliningrad"};
	const int size = sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < size - 1; i++) {
		int min_i = i;
	
		for (int j = i + 1; j < size; j++) { 
			if (a[j] < a[min_i])
				{ min_i = j; } 
		} 
		
		auto temp = a[i];
		a[i] = a[min_i];
		a[min_i] = temp; 
	} 
	
	for(auto item : a){ //copies
		cout << item << '\t';
	}
}
