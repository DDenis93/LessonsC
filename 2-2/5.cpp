#include <iostream>
#include <string>
using namespace std;

int main(){
	int a = 43, b = 8;
	
	// ����� 2 ���������� ��� ������ �������
	int c;
	c = a;
	a = b;
	b = c;
	
	cout << a << ' ' << b;
}
