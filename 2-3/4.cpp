// range-based for - iterate in collections
// C++ 11

#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "Hello, world!";
	for(int i = 0; i < s.length(); i++){
		cout << s[i] << endl;
	}
	
	// range-based for
	//for(const auto &c : s)
	for(const char &c : s){ // c = const reference
		cout << c << endl;
		// c = 'a'; // not available because of const 
	}

	//for(auto &c : s)
	for(char &c : s){ // c = reference
		cout << c << endl;
		c = 'a';
	}
	
	//for(auto c : s)
	for(char c : s){ // c = copies
		cout << c << endl;
	}
	
	auto x = 5; // int
	auto y = 6.7; // double
	cout << x << ' ' << y;
	
	return 0;
}
