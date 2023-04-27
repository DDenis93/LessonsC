#include <iostream>
#include <cstdarg>
using namespace std;
long summa(int k, ...){
	va_list p;
	va_start(p, k);
	long sum = 0;
	for(;k;k--) // for(int i = 0; i < k; i++)
		sum += va_arg(p, int);
	va_end(p);
	return sum;		
}

int main() {
	cout << summa(6, 2, 3, 4, -10, -20, -30) << endl;
	cout << summa(2, 4, 3) << endl;
	return 0;
}
