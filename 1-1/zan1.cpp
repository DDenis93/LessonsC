#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include "perecod.h"
#include <iomanip>
using namespace std;

int main() {
	//for (int i = 0; i <= 255; i++)
	//	printf("%d %c\n", i, (char)i);

	//setlocale(0,"");
	//for (int i = 0; i <= 255; i++)
	//	printf("%d %c\n", i, (char)i);
	
	//программа по определению времени полета объекта
	//float h, t;
	//const float g = 9.81;
	////t=sqrt(h*2\g)
	//printf(Ruc((char*)"¬ведите h:"));
	//scanf_s("%f", &h);
	//t = sqrt(2 * h / g);
	//printf(Ruc((char*)"¬рем€ равно %.3f секунд"), t);

	//scanf_s("%f", &h);//дл€ паузы
	//_getch();//дл€ паузы
	//system("pause");//дл€ паузы C++
	//4ый вариант паузы - точка останова



	// //примеры математических функций
	//double x;
	//setlocale(0,"");
	//cout << "¬ведите х:";
	//cin >> x;
	//cout <<fixed<< setprecision(3);
	//cout << sin(x) << " " << cos(x) << " " << tan(x) << " " << asin(x) <<
	//	" " << acos(x) << " " << atan(x) << " " << sqrt(x) << " " << pow(x, 10)
	//	<< " " << exp(x) << " " << log(x) << " " << log10(x) << " " << abs(x);

	//cout <<"\t"<< pow(x, 1. / 3);


	//задача на треугольник є1_2_1
	float a, b, c, p, S;
	float A, B, C;
	cout << "Enter a,b,c:";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Square=" << S << endl;
	//S=a*b*sin(C)/2
	C = asin(2 * S / (a * b));
	A= asin(2 * S / (c * b));
	B = asin(2 * S / (c * a));
	cout << "A=" << A << " B=" << B << " C=" << C << endl;
	cout << A + B + C << endl;

	return 0;
}