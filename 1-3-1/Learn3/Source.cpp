#include "stdio.h"
#include "math.h"
#include <conio.h>
#include <iostream>
#include "perecod.h"
//#include <locale.h> // библиотека перевода кодировки



int main() {
	////for (int i = 0; i <= 255; i++) {
	////	printf("%d %c\n",i,(char)i); // до 127 стандартные символы для всех кодировок, далее символы различаются в зависимости от кодировки
	////}
	////setlocale(LC_ALL/*тоже самое что и 0*/, "Russian"); // выбор кодировки
	////for (int i = 0; i <= 255; i++) {
	////	printf("%d %c\n", i, (char)i); // до 127 стандартные символы для всех кодировок, далее символы различаются в зависимости от кодировки
	////}
	////float h, t;
	////const float g = 9.81;
	//////t=sqrt(h*2\g)// - функция квадратного корня
	////printf(Ruc((char*)"Введите время h:"));
	////scanf_s("%f", &h);
	////t = sqrt(2 * h / g);
	////printf(Ruc((char*)"Время равно %.3f секунд"), t);

	////scanf_s("%f", &h);	// для паузы - ожидает ввод нового значения
	////_getch();	// для паузы - ожидает ввод символа
	////system("pause");	// для паузы - системная пауза
	//// 4 вариант точка останова

	//double x;
	//setlocale(0,"");
	//std::cout << "Введите x:";
	//std::cin >> x;
	//std::cout << sin(x) << "\n " << cos(x) << " \n" << tan(x) << "\n " << asin(x) << "\n "
	//	<< acos(x) << "\n " << atan(x) << "\n " << sqrt(x) << "\n " << pow(x, 10) << "\n "
	//	<< exp(x) << "\n " << log(x)<<"\n " << log10(x) << "\n " << abs(x)<<"\n";

	//std::cout << pow(x, 1 / 3)<<"\n";

	//double A, B, C, D, E, S;
	//printf("Введите значение A:\n");
	//std::cin >> A;
	//B = sin(A);
	//C = log(A);
	//D = exp(A);
	//E = abs(A);
	//S = (A + B) * (A + B + C) * (A + B + C + D) * (A + B + C + D + E);
	//
	//std::cout<< "B = " << B << "\n C = " << C << "\n D = " << D << "\n E = " << E << "\n S = " << S;
	setlocale(0, "");
	float a, b, c, p, S;
	float A, B, C;
	std::cout << "Enter a,b,c:";
	std::cin >> a >> b >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << "\nSquare=" << S;
	//S=a*b*sin(C)/2
	C = asin(2 * S / (a * b)); 
	A= asin(2 * S / (c * b));
	B= asin(2 * S / (a * c));
	std::cout << "\nA=" << A << "\nB=" << B << "\nC=" << C<<"\n";
	std::cout<<"Пи = " << A + B + C; // число Пи
	std::cout << "Enter a,b,c:";

	return 0;
}
