/*
Старинная задача. Сколько можно купить быков, коров и телят, 
если плата за быка 10 рублей, за корову - 5 рублей, за теленка - полтинник (0,5 рубля),
если на 100 рублей надо купить 100 голов скота.
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
