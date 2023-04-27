#include <iostream>
using namespace std;

int main(){
	// C++ Google Style Guide 
	cout << "i\tj\tk\tMajority function" << endl;
	for(int i = 0; i <= 1; i++){
		for(int j = 0; j <= 1; j++){
			for(int k = 0; k <= 1; k++){
				cout << i << '\t' << j << '\t' << k << '\t' << (i+j+k >= 2) << endl;
			}
		}
	}
}

