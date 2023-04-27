#include <iostream>
#include <string>
using namespace std;

int main(){
	int number = 164;
	string s1 = "Hello, world!";
	cout << s1 << endl;
	
	string s2;
	// range-based for
	for(char c : s1){
		s2 += c ^ number;
	}
	cout << s2 << endl;
	
	string s3;
	// range-based for
	for(char c : s2){
		s3 += c ^ number;
	}
	cout << s3 << endl;
}
