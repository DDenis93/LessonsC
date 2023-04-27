#include <iostream>
using namespace std;

int main(){
	int number = 1024 + 255; 
	// bin: 00000000 00000000 00000100 11111111
	//      11111111 00000100 00000000 00000000
	int *pnum = &number; // &number == adress of number
	cout << "*pnum = " << *pnum << endl;
	cout << "pnum = " << (void *)pnum << endl;
	
	cout << "(pnum + 1) = " << (void *)(pnum + 1) << endl;
	cout << "(pnum + 1) = " << *(pnum + 1) << endl;
	
	cout << "*pnum = " << *pnum << endl;
	cout << "pnum = " << (void *)pnum << endl;	
	
	char *pbyte = (char *)&number;
	cout << "byte 1: " << ((*(int *)pbyte)&255) << endl;
	cout << "byte 2: " << ((*(int *)(pbyte+1))&255) << endl;
	cout << "byte 3: " << ((*(int *)(pbyte+2))&255) << endl;
	cout << "byte 4: " << ((*(int *)(pbyte+3))&255) << endl;	
}
