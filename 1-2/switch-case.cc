// lab2_1.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	setlocale(0,"");
	
	char ch;
	cout<<"Введите букву:";
	cin>>ch;
	switch(ch) {
	case 'a': {cout<<"Выводится буква а"; break;}
	case 'b': {cout<<"Выводится буква б"; break;}
	default: {cout<<"Выводится не а и не б"; break;}
	}
	system("pause");
	return 0;
}

