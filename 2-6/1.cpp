#include <iostream>
#include <vector>
#include <algorithm> //STL 
using namespace std;

int main(){
	vector<double> vect(6);
	cout << "Enter vector's elements: ";
	for(auto & item : vect){
		cin >> item;
	}
	
	double maxval = vect[0];
	for(const auto & item : vect){
		//if (item > maxval){
		//	maxval = item;
		//}
		maxval = max(maxval, item);
	}
	double maxval2 = *max_element(begin(vect), end(vect));
	cout << "Max element = " << maxval << ' ' << maxval2 << endl;
}
