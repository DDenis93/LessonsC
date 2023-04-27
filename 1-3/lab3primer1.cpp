

#include "conio.h"
#include <iostream>
using namespace std;
#include "math.h"

int main()
{
setlocale(0,"rus");
int d,i;
d=0;
for (i=1; i<=3; ++i)
{
printf("\nВведите первый символ пароля: ");
if (_getche() != 'a')
continue;
printf("\nВведите второй символ пароля: ");
if (_getche() == 'b')
{
	d=1;
break;
}
}
if (!d)
{
printf("\nОшибка! Работа программы будет завершена.\n");
_getch();
return 0;
}
printf("\nВы допущены к работе с программой. \n");
_getch();
return 0;
}

