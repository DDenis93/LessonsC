#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){
	double a, b, c;
	cout << "Enter 3 variables: ";
	cin >> a >> b >> c;
	double max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	cout << "max = " << max << endl;
	
	double maxab = (a > b) ? (a) : (b);
	cout << "maxab = " << maxab << endl;
	
	double max3 = (a > b) ? ((c > a) ? c : a) : ((c > b) ? c : b);
	cout << "max3 = " << max3 << endl;
}

