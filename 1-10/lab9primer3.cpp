//������������� ������� ������� ���������� ����� ��������� ������� 

#include "stdio.h"


float sum(float a[],int n);
 float sumrek(float a[],int n); 

int main()
{  const int nn=20; 
   float a[nn],s, s1;
   int i,n;
   printf("wwedite kol-wo elementow\n");
  scanf_s("%d",&n);
  printf("\nwwedite massiw\n");
  for (i=0;i<n;i++)
      scanf_s("%f",&a[i]);
   s=sum(a,n);
   printf("\nsum=%6.2f",s);
    s1=sumrek(a,n);
   printf("\nsum1=%6.2f",s1);
 	return 0;
}
 float sum(float a[],int n)
 {float s=0;
  for(int i=0;i<n;i++)
	  s+=a[i];
  return s;
  }

 float sumrek(float a[],int n) //n � ���������� ��������� �������
 { float s;
	 if (n==1) 
     s=a[0];
   else 
     s=a[n-1]+sumrek(a,n-1);
   return s;
 }