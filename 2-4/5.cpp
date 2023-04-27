#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int n = 5;

namespace myNs{
	int n = 10;
}

int main(){
	int n = 17;
	cout << "main::n = " << n << ' ' << &n << endl; // 17
	cout << "global n = " << ::n << ' ' << &::n << endl; // 5
	cout << "myNs::n = " << myNs::n << ' ' << &myNs::n << endl; // 10
	
	{
		double k = 3.45;
		int n = 31;
		cout << "main::n = " << n << ' ' << &n << endl; // 31
		cout << "global n = " << ::n << ' ' << &::n << endl; // 5
		cout << "myNs::n = " << myNs::n << ' ' << &myNs::n << endl; // 10
	}
	
	cout << k << endl;
	cout << "main::n = " << n << ' ' << &n << endl; // 17
}

