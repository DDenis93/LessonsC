// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	srand(time(0));
	setlocale(0, "");
	cout << "Введите пятизначное число:" << endl;
	int a, b, c, d, n;
	bool fl = 0;
	int max, min, max2, min2;
	while (!fl) {
		 n = rand() * rand() % 100000;
		cout << n << endl;
		//RAND_MAX
		//cin >> n;

		a = n % 10;
		n = n / 10;
		b = n % 10;
		n = n / 10;
		c = n % 10;
		n = n / 10;
		d = n % 10;
		n = n / 10;
		if (n) fl = 1;
	}
	if (n >= d && n >= c && n >= b && n >= a)
		max = n;
	if (d >= n && d >= c && d >= b && d >= a)
		max = d;
	if (c >= n && c >= d && c >= b && c >= a)
		max = c;
	if (b >= n && b >= d && b >= c && b >= a)
		max = b;
	if (a >= n && a >= d && a >= c && a >= b)
		max = a;

	if (n <= d && n <= c && n <= b && n <= a)
		min = n;
	if (d <= n && d <= c && d <= b && d <= a)
		min = d;
	if (c <= n && c <= d && c <= b && c <= a)
		min = c;
	if (b <= n && b <= d && b <= c && b <= a)
		min = b;
	if (a <= n && a <= d && a <= c && a <= b)
		min = a;

	if (max == a) {
		if (n >= d && n >= c && n >= b) max2 = n;
		if (d >= n && d >= c && d >= b) max2 = d;
		if (c >= n && c >= d && c >= b) max2 = c;
		if (b >= n && b >= d && b >= c) max2 = b;
	}
	if (max == b) {
		if (n >= d && n >= c && n >= a) max2 = n;
		if (d >= n && d >= c && d >= a) max2 = d;
		if (c >= n && c >= d && c >= a) max2 = c;
		if (a >= n && a >= d && a >= c) max2 = a;
	}
	if (max == c) {
		if (n >= d && n >= b && n >= a) max2 = n;
		if (d >= n && d >= b && d >= a) max2 = d;
		if (b >= n && b >= d && b >= a) max2 = b;
		if (a >= n && a >= d && a >= b) max2 = a;
	}
	if (max == d) {
		if (n >= c && n >= b && n >= a) max2 = n;
		if (c >= n && c >= b && c >= a) max2 = c;
		if (b >= n && b >= c && b >= a) max2 = b;
		if (a >= n && a >= c && a >= b) max2 = a;
	}
	if (max == n) {
		if (d >= c && d >= b && d >= a) max2 = d;
		if (c >= d && c >= b && c >= a) max2 = c;
		if (b >= d && b >= c && b >= a) max2 = b;
		if (a >= d && a >= c && a >= b) max2 = a;
	}


	cout << "max=" << max << " min=" << min << " max2=" << max2;







}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
