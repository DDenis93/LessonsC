#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

enum class weekdays{
	Monday, Tuestay, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main(){
	int n;
	cout << "All digits after your digit: ";
	cin >> n;
	switch(n){
		case 0: std::cout << "0" << endl;
		case 1: cout << "1" << endl;
		case 2: cout << "2" << endl;
		case 3: cout << "3" << endl;
		case 4: cout << "4" << endl;
		case 5: cout << "5" << endl;
		case 6: cout << "6" << endl;
		case 7: cout << "7" << endl;
		case 8: cout << "8" << endl;
		case 9: cout << "9" << endl;
	}
	
	weekdays wd = weekdays::Friday;
	switch(wd){
		case weekdays::Monday: cout << "Monday" << endl;
		// ...
		case weekdays::Friday: cout << "Friday" << endl;
	}
}

