#include <iostream>
#include <string>
using namespace std;

int main(){
	int a = 43, b = 8;
	
	// обмен 2 переменных при помощи третьей
	int c;
	c = a;
	a = b;
	b = c;
	
	cout << a << ' ' << b;
}
