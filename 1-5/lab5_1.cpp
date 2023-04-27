// lab6.cpp: определяет точку входа для консольного приложения.
//ввод и вывод матрицы, вычисление суммы и произведения матрицы

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
for (int i=0;i<m;i++) //Цикл ввода всех строк матрицы
for (int j=0;j<n;j++) //Цикл ввода очередной строки матрицы
	cin>>a[i][j];  

cout<<"\nthe matrix:"<<endl;
for (int i=0;i<m;i++) //Цикл вывода всех строк матрицы
{
for (int j=0;j<n;j++) {//Цикл вывода очередной строки матрицы
cout<<a[i][j]<<"\t";
}
cout<<endl; //Переход в начало новой строки файла вывода
}

//Вычисление суммы и произведения матрицы
int s=0; int pr=1;
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
{
s+=a[i][j];
pr*=a[i][j];
}
cout<<"sum= "<<s<<"\n"<<"proizv= "<<pr<<endl;

//При изменении места расположения операторов присваивания s=0; pr=1; смысл вычислений меняется:
cout<<"При изменении места расположения операторов присваивания s=0; pr=1; смысл вычислений меняется:"<<endl;
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

