// lab 7.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
using namespace std;

// Исходное число раскладывается на простые множители

void prime_factor(int n);

int main()
{
  cout<<111111<<endl;
  prime_factor(111111);
  cout<<1024<<endl;
  prime_factor(1024);
  char ch; cin>>ch;
  return 0;
}
void prime_factor(int n){
	for(int k=2; k*k<=n; k++){
		if(n%k)continue;
		cout<<"\t"<<k;
		prime_factor(n/k);
		return;
	}
	cout<<"\t"<<n<<endl;
}
