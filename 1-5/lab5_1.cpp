// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
//���� � ����� �������, ���������� ����� � ������������ �������

#include "stdafx.h"
#include <iostream>
#define M 20
#define N 30
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int m,n, a[M][N];
	cout<<"Enter m and n:"<<endl;
	cin>>m>>n;
cout<<"Enter the matrix:"<<endl;
for (int i=0;i<m;i++) //���� ����� ���� ����� �������
for (int j=0;j<n;j++) //���� ����� ��������� ������ �������
	cin>>a[i][j];  

cout<<"\nthe matrix:"<<endl;
for (int i=0;i<m;i++) //���� ������ ���� ����� �������
{
for (int j=0;j<n;j++) {//���� ������ ��������� ������ �������
cout<<a[i][j]<<"\t";
}
cout<<endl; //������� � ������ ����� ������ ����� ������
}

//���������� ����� � ������������ �������
int s=0; int pr=1;
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
{
s+=a[i][j];
pr*=a[i][j];
}
cout<<"sum= "<<s<<"\n"<<"proizv= "<<pr<<endl;

//��� ��������� ����� ������������ ���������� ������������ s=0; pr=1; ����� ���������� ��������:
cout<<"��� ��������� ����� ������������ ���������� ������������ s=0; pr=1; ����� ���������� ��������:"<<endl;
for(int i=0;i<m;i++)
{
s=0; pr=1;
for (int j=0;j<n;j++)
{
s+=a[i][j];
pr*=a[i][j];
cout<<"sum= "<<s<<"\n"<<"proizv= "<<pr<<endl;
}
}

system("pause");
	return 0;
}

