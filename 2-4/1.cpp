// 100, 500, 1000, 5000 RUR

#include <iostream>
using namespace std;

int main(){
	int amount, k100, k500, k1000, k5000;
	cout << "Enter withdrawal amount: ";
	cin >> amount;
	
	k5000 = amount / 5000;
	amount %= 5000; // amount = amount % 5000;
	// amount = amount - k5000 * 5000;
	
	k1000 = amount / 1000;
	amount %= 1000;
	
	k500 = amount / 500;
	amount %= 500;
	
	k100 = amount / 100;
	amount %= 100;
	
	cout << "k5000 = " << k5000 << endl;
	cout << "k1000 = " << k1000 << endl;
	cout << "k500 = " << k500 << endl;
	cout << "k100 = " << k100 << endl;
	
	cout << "to return to Your account: " << amount << endl;
}
