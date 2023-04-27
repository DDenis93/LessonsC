#include <iostream>
using namespace std;

void mySwap(int a, int b){ // a, b = copies
	int vspom = a;
	a = b;
	b = vspom;
	// cout << a << ' ' << b << endl; // copies
}

void mySwap2(int &a, int &b){ // a, b = references
	int vspom = a;
	a = b;
	b = vspom;
	// cout << a << ' ' << b << endl; // references
}

void mySwap3(int *pa, int *pb){ // a, b = references
	int vspom = *pa;
	*pa = *pb;
	*pb = vspom;
	// cout << *pa << ' ' << *pb << endl; // pointers
}

void f4(const int& a){
	cout << a << endl;
	// a++, a = b + c; - error
}

int main(){
	int x = 5, y = 7;
	//swap(x, y);
	//mySwap2(x, y);
	mySwap3(&x, &y);
	//f4(x);
	cout << x << ' ' << y << endl;
	
	cout << "Address of mySwap: " << (void*)mySwap << endl;
	cout << "Address of mySwap: " << (void*)mySwap2 << endl;
	cout << "Address of mySwap: " << (void*)mySwap3 << endl;
	cout << "Address of mySwap: " << (void*)f4 << endl;
	
}
