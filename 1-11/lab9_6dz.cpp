// lab 9.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include <iostream>
#include<time.h>
using namespace std;
/* ������������ ��������
������������ ������� ���������� ������ �����
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
	//�������� �������
	//cout<<n%2;
	//if (n/2==0) {/*cout<<n%2;*/return;}
	// bit_element(n/2);

	 //������ �������
	if (n/2==0) {cout<<n%2;return;}
	 bit_element(n/2);
	cout<<n%2;
	}

