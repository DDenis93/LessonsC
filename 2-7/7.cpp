#include <iostream>
using namespace std;

int G(int n);

int F(int n)
{
	if (n > 2)
		return F(n-1) + G(n-2);
	else return 1;
}

int G(int n)
{
	if (n > 2)
		return G(n-1) + F(n-2);
	else return 1;
}

int main(){
	cout << F(8) << endl;
}
