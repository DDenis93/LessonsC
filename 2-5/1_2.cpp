#include <iostream>
using namespace std;

int main(){
	//int bulls, cows, calfs;
	int bull = 0, cow = 0, calf = 0;
	//for(int bull = 0; bull <= 10; bull++){
	while(bull <= 10){
		//for(int cow = 0; cow <= 20; cow++){
		cow = 0;
		while(cow <= 20){
			//for(int calf = 0; calf <= 200; calf++){
			calf = 0;
			while(calf <= 200){
				if (bull + cow + calf == 100 && bull*10 + cow*5 + calf*0.5 == 100){
					/*bulls = bull;
					cows = cow;
					calfs = calf;*/
					cout << bull << ' ' << cow << ' ' << calf << endl;
				}
				calf++;
			}
			cow++;
		}
		bull++;
	}
	
}
