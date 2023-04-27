#include <iostream>
#include <vector>
using namespace std;

int main(){
	int dd1, mm1, yy1, dd2, mm2, yy2;
	cout << "Enter dates: ";
	cin >> dd1 >> mm1 >> yy1 >> dd2 >> mm2 >> yy2;
	
	vector<int> date1 = {yy1, mm1, dd1};
	vector<int> date2 = {yy2, mm2, dd2};
	if (date1 > date2){
		cout << "date1 was after date2" << endl;
	}
	else{
		cout << "date1 was before date2" << endl;
	}
}

// tuple
