// lab2_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	setlocale(0,"");
	
	char ch;
	cout<<"������� �����:";
	cin>>ch;
	switch(ch) {
	case 'a': {cout<<"��������� ����� �"; break;}
	case 'b': {cout<<"��������� ����� �"; break;}
	default: {cout<<"��������� �� � � �� �"; break;}
	}
	system("pause");
	return 0;
}

