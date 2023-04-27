#include <clocale>
#include <iostream>
using namespace std;

int main()
{
setlocale(LC_CTYPE ,"");
int i = -128;
// char = signed char = -128 .. 127
do{
	cout << i << ' ' << char(i) << '\t';
	i++;
} while (i<=127);
cout << '\a' << '\a';
}

