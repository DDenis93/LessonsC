#include <iostream>
#include <algorithm> //STL 
using namespace std;

int main(){
	int mas[10] = {1,2,3,4,5,6,7,8,9,10};
	for(const auto & item : mas){
		cout << item << ' ';
	}
	cout << endl;
	
	random_shuffle(begin(mas), end(mas));
	//random_shuffle(mas, mas+10);
	for(const auto & item : mas){
		cout << item << ' ';
	}
	cout << endl;
}
