// вещественные константы

#include <iostream>
using namespace std;

//точка входа
int main(){
	cout << .4 << endl; //0.4
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << 5. << endl; // 5.0
	cout << 6.7 << endl;
	cout << 1.3e+2 << endl;
	cout << 1.3e+20 << endl;
	cout.unsetf(ios::fixed);
	cout << 1.3e+2 << endl;
	cout << 1.3e+20 << endl;
	cout.setf(ios::scientific);
	cout << 1.3e+2 << endl;
	cout << 1.3e+20 << endl;
	
	if (1 > 0) {
		cout << "ok" << endl;
	}
	
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;
}
