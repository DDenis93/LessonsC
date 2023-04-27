#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cout << "Enter 4 bytes (0-255)";
	cin >> a >> b >> c >> d;
	// a.b.c.d
	
	int ip = (a << 24) + (b << 16) + (c << 8) + (d);
	cout << "ip = " << ip << endl;
	
	int a1, b1, c1, d1;
	d1 = ip & 255;
	c1 = (ip >> 8) & 255;
	b1 = (ip >> 16) & 255;
	a1 = (ip >> 24) & 255;
	cout << a1 << '.' << b1 << '.' << c1 << '.' << d1 << endl;
}
