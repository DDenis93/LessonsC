

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
printf("\n������� ������ ������ ������: ");
if (_getche() != 'a')
continue;
printf("\n������� ������ ������ ������: ");
if (_getche() == 'b')
{
	d=1;
break;
}
}
if (!d)
{
printf("\n������! ������ ��������� ����� ���������.\n");
_getch();
return 0;
}
printf("\n�� �������� � ������ � ����������. \n");
_getch();
return 0;
}

