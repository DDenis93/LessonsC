

#include "stdio.h"
#include <iostream>
using namespace std;

struct complex {
	double real;
	double imag;
	void define (double re=0.0, double im=0.0) 
	{
	real=re;
	imag=im;
	}
	void display () {
	cout<<"real= "<<real<<endl;
	cout<<"imag= "<<imag<<endl;
	}
};
int main()
{
	complex x1,x2, D; //��� ������� ������
	complex *point=&D;//��������� �� ������ ������
	complex dim[8]; //������ �������� ������ complex
	x1.real=dim[3].real=1.24;
	x1.imag=2.3;
	dim[3].imag=0.0;
	x1.define();
	x2.define(4.3, 20.0);
	x1.display();
	x2.display();
	point->real=2.3;// ������������ �������� �������� ������� D
	point->imag=6.1; // ������������ �������� �������� ������� D
	point->display();

  return 0;
}
