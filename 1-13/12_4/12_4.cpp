
#include<iostream>
#include"BOOK.h" // ���� �������� �������� ������
using namespace std;
/* ����� ������� �������� (������������) ��������
*/

void main(){
	setlocale(LC_ALL,"Russian"); 
	BOOK bk1("������� �.�.","����� � ���","�������������� ����������",1970);
	BOOK bk2("����������� �.�.","������������ � ���������","������� �������",1975);
	BOOK bk3("������ �.�.","������������� � �����","�����",1980);
	BOOK bk4("���� �.","��� ���������","�������",1978);
	bk1.prnt();
	bk2.prnt();
	bk3.prnt();
	bk4.prnt();
	system("pause");
}