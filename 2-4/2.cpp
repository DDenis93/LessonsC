#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(){
	double r;
	cout << "Input r: ";
	cin >> r;
	cout << "S = " << M_PI * pow(r, 2) << endl;
	cout << "L = " << 2 * M_PI * r << endl;
}

