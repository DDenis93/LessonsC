#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
	// ������� ����� �� 1 �� �����, ������� ������������ ������� �� 2017 � 3
	int i = 1;
	while (i <= 1000) {
		if (i % 10 == 0 || i % 10 == 5 || i % 10 == 7){
			i++;
			continue; // wont print numbers like 10, 15, 17
		}
		cout << i++ << ' ';
	}
	cout << "next lines" << endl;
}

