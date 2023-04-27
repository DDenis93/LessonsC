// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#define Nmax 100

int main()
{
	//int* a;
	// int b = 10;
	//a = &b;
	//cout << b << " " << *a<<endl;
	////b = b + 1;
	//*a = 20;
	//cout << b << " " << *a << endl;
	//void* p;
	//int b = 10;
	//p = &b;
	//cout << *(int*)p;

	////const int Nmax = 100;
	//int mas[Nmax];
	//int n;
	//cout << "Enter n:";
	//cin >> n;
	//cout << "Enter elements of array:";
	//for (int i = 0; i < Nmax; i++)
	//	mas[i] = 0;

	//for (int i = 0; i<n; i++)
	//	cin >> mas[i];

	//for (int i = 0; i < n; i++)
	//	cout << mas[i] <<" ";
	//
	//cout << endl<< mas[2]<<" "<<*(mas+2);
	//cout << mas[4]<<*(mas+4)<<*(4+mas)<<4[mas];
	//cout << endl << mas << " " << &mas[0];
	//cout <<" "<< &mas[1];
	////cout<<endl<<mas[n];
	

	////zadacha 4_1_2
	//int S[30], D[30], R[30], n;
	//cout << "Enter n:";
	//cin >> n;
	//srand(time(0));
	//for (int i = 0; i < n; i++) {
	//	S[i] = rand() % 2;
	//	cout << S[i] << " ";
	//}
	//cout << endl;
	//D[0] = S[0];
	//cout << D[0] << " ";
	//for (int i = 1; i < n; i++) {
	//	if (S[i] == S[i - 1]) D[i] = 1;
	//	else D[i] = 0;
	//	cout << D[i] << " ";
	//}
	//cout << endl<<"Rasshifrovannyi massiv:"<<endl;
	//R[0] = D[0];
	//cout << R[0] << " ";
	//for (int i = 1; i < n; i++) {
	//	if (D[i] == 1) R[i] = R[i - 1];
	//	else R[i] = 1 - R[i - 1];//!R[i - 1];
	//	cout << R[i] << " ";
	//}

	//zadacha 4_1_3
	/*float a[10];
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << "Enter array:";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << endl;
	for (int i = 0; i < n; i++)
		cout<< a[i]<<" ";
	cout << endl;
	float dop = a[n - 1];
	for (int i = n - 1; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = dop;

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";*/

	//sdvig vlevo
	float a[10];
	int n;
	cout << "Enter n:";
	cin >> n;
	cout << "Enter array:";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	float dop = a[0];
	for (int i = 0; i <=n-2; i++)
		a[i] = a[i+1];
	a[n-1] = dop;

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
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
