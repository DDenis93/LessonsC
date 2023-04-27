#include <iostream>
using namespace std;

int main(){
	cout << "i\tj\t&&" << endl;
	for(int i = 0; i <= 1; i++){
		for(int j = 0; j <= 1; j++){
			cout << i << '\t' << j << '\t' << (i ^ j) << endl;
		}
	}
}
