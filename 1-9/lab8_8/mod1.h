const int mm=20, nn=15, kk=10;
  typedef float  mas[nn]; //�������� �������
  typedef  mas matr[mm];//�������� �������
  typedef  unsigned int masbyt[kk];
  typedef  int masint[mm];
  void input(int *m,int *n, matr b); //������� ����� �������
  void output(const int m,const int n,const matr b);//������� ������ �������
  int maxstr(const int m,const int n,const matr b);//������� ������ ������������� �������� ���� ������� � ������ ������, � ������� �� ���������� 
  int minstr(const int m,const int n,const matr b);//������� ������ ������������ �������� ���� ������� � ������ ������, � ������� �� ���������� 
  void udalenie(const int m,const int n,const int nom,matr b); //�������� �� ������� ������ � �������� �������
  void zifra(unsigned int a,masbyt c,int *kol); //����������� ���� ������ �����
  void sortirov(const int m, matr b,masint s);//���������� ����� ������� �� ����� ���� ���������� �����
