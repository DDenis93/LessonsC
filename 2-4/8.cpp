#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
	for(int i = 0, j = 100; i < j && i < 100; i++, j-=2){
		cout << i << ' ' << j << endl;
	}
	for(;;){
		cout << "Infinite loop ";
	}
}

