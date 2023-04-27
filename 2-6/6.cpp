#include <iostream>
#include <time.h>
using namespace std;

int main(){
	int size1 = 3;
	int size2 = 4;
	int **pInt = new int* [size1]; // pointers array
	for(int i = 0; i < size1; i++){
		pInt[i] = new int [size2];
	}
	
	srand(time(0));
	for(int i = 0; i < size1; i++){
		for(int j = 0; j < size2; j++){
			pInt[i][j] = rand() % 100; // i + j
			cout << pInt[i][j] << ' ';
		}
		cout << endl;
	}
	
	for(int i = size1-1; i >= 0; i--){
		delete [] pInt[i];
	}
	delete [] pInt;
}
