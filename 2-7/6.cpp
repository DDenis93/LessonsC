#include<iostream>
using namespace std;

int GCD(int x, int y)
{
	while(x!=y){
		if(x > y) x = x - y;
		else y = y - x;
	}
	return x;
}

int GCD2(int x, int y){
	int minN = min(x, y);
	int maxN = max(x, y);
	while (minN > 0){
		int remainder = maxN % minN;
		maxN = minN;
		minN = remainder;
	}
	return maxN;
}

int main(){
	cout << GCD(600, 125) << endl;
	cout << GCD2(600, 125) << endl;
	cout << GCD(2017, 31) << endl;
	cout << GCD2(2017, 31) << endl;
	cout << GCD(1000, 80) << endl;
	cout << GCD2(1000, 80) << endl;
}
