//  ������ � ���������� ������������ ��������


#include "stdio.h"
#include "conio.h"
void input(float **a,int *n);
void output(float *a,int n);
void preob(float *a,int n);
int main()
{ 
	float *a;
  int n;
  input(&a,&n);
  printf("\nisxodnij massiw\n");
  output(a,n);
  preob(a,n);
  printf("\npreobrasowannij massiw\n");
  output(a,n);
  _getch();
  delete a;
	return 0;
}
void input(float **a,int *n)
{printf("wwedite kol-wo elementow massiwa\n");
  scanf("%d",n);
  *a=new float[*n];
  printf("\nwwedite elementi\n");
    for(int i=0;i<*n;i++)
	  scanf_s("%f",&(*a)[i]);
}
void output(float *a,int n)
{ for (int i=0;i<n;i++)
    printf("%5.1f  ",a[i]);
}
void preob(float *a,int n)
{float max,min;
 max=a[0]; min=a[0];
 for (int i=1;i<n;i++)
	 if (a[i]>max) max=a[i];
	 else if(a[i]<min) min=a[i];
 float y=max/min;
 for (int i=0;i<n;i++)
	 a[i]*=y;
}
