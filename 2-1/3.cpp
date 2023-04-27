#include <iostream>
#include <string>
using namespace std;

enum {zero, nought=0, one, two, pairr = 2, three};

int main(){
	cout << zero << ' ' << pairr << endl;
	
	cout << 'a' << '\n'; // \n - сомвол конца строки
	cout << 'abc' << '\n'; // ' - символ
	
	//Си-строки
	cout << "abc" << '\n'; // " - строка, ограничена '\0', char *
	char * s1 = (char *)"abcd"; // length = 5 + '\0'
	char s2[4] = {'a', 'b', 'c', 'd'};
	char s3 = 'e';
	cout << s1 << '\n';
	cout << s2 << '\n';
	
	string s4 = "Hello, C++ strings!";
	cout << s4 << '\n';
	s4 += "!!"; // конкатенация
	cout << s4 << '\n';	
}
