// lab 9.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#include <iostream>
#include<time.h>
using namespace std;
/* ƒемонстраци€ рекурсии
ѕроизводитс€ битова€ распечатка целого числа
*/ 

void bit_element(int n);

int main()
{

  srand(time(0));
  int n;
  do{
	bit_element(10);
	cin>>n;
  }while(n);
  return 0;
}
void bit_element(int n){
	//обратный пор€док
	//cout<<n%2;
	//if (n/2==0) {/*cout<<n%2;*/return;}
	// bit_element(n/2);

	 //пр€мой пор€док
	if (n/2==0) {cout<<n%2;return;}
	 bit_element(n/2);
	cout<<n%2;
	}

