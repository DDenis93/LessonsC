#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(5);
	v[0] = 12;
	v[1] = 13;
	v[2] = 14;
	v.at(3) = 15;
	v.at(4) = 16;
	
	for(const auto & elem : v){
		cout << elem << endl;
	}
}
