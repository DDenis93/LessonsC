#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
	// ������� ����� �� 1 �� �����, ������� ������������ ������� �� 2017 � 3
	int i = 1;
	while (i < 1000000) {
		cout << i++ << ' '; // 6050
		// i == 6051
		if (i % 2017 == 0 && i % 3 == 0){
			cout << "break" << endl;
			break; // stops the while loop
			//exit(0); // ����� �� ���������
		}
	}
	cout << "next lines" << endl;
}

