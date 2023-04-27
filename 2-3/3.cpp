#include <iostream>
#include <string>
using namespace std;

int main(){
	for(string s = "a"; s.length() <= 20; ){
		cout << s << endl;
		s += s[0];
	}
	return 0;
}
