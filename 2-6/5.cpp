#include <iostream>
using namespace std;

int main(){
	int *pInt = new int; // a primitive variable, not an array
	*pInt = 56;
	cout << *pInt << endl;
	delete pInt;
	
	int size = 6;
	pInt = new int[size]; // array
	pInt[0] = 12;
	pInt[1] = 13;
	pInt[2] = 14;
	pInt[3] = 15;
	pInt[4] = 16;
	pInt[5] = 17;
	for(int i = 0; i < size; i++){
		cout << pInt[i] << endl;
	}
	delete [] pInt;
}
