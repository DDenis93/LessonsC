#include <iostream>
#include <string>
using namespace std;

enum {zero, nought=0, one, two, pairr = 2, three};

int main(){
	cout << zero << ' ' << pairr << endl;
	
	cout << 'a' << '\n'; // \n - ������ ����� ������
	cout << 'abc' << '\n'; // ' - ������
	
	//��-������
	cout << "abc" << '\n'; // " - ������, ���������� '\0', char *
	char * s1 = (char *)"abcd"; // length = 5 + '\0'
	char s2[4] = {'a', 'b', 'c', 'd'};
	char s3 = 'e';
	cout << s1 << '\n';
	cout << s2 << '\n';
	
	string s4 = "Hello, C++ strings!";
	cout << s4 << '\n';
	s4 += "!!"; // ������������
	cout << s4 << '\n';	
}
