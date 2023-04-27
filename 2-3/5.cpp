#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers = {1, 2, 33, 44, 555, 6666, 77777};
	numbers.push_back(8);
	numbers.insert(numbers.begin(), 0);
	
	cout << "size: " << numbers.size() << endl;
	
	for(int i = 0; i < numbers.size(); i++){
		cout << &(numbers[i]) << endl;
		cout << numbers[i] << endl;
	}
	cout << endl;
	
	for(auto & num : numbers){
		num += 5;
	}
	
	for(const auto & num : numbers){
		cout << num << ' ';
	}
}
