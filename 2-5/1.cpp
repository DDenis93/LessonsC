/*
��������� ������. ������� ����� ������ �����, ����� � �����, 
���� ����� �� ���� 10 ������, �� ������ - 5 ������, �� ������� - ��������� (0,5 �����),
���� �� 100 ������ ���� ������ 100 ����� �����.
*/

#include <iostream>
using namespace std;

int main(){
	int bulls, cows, calfs;
	for(int bull = 0; bull <= 10; bull++){
		for(int cow = 0; cow <= 20; cow++){
			for(int calf = 0; calf <= 200; calf++){
				if (bull + cow + calf == 100 && bull*10 + cow*5 + calf*0.5 == 100){
					bulls = bull;
					cows = cow;
					calfs = calf;
				}
			}
		}
	}
	cout << bulls << ' ' << cows << ' ' << calfs << endl;
}
