const int mm=20, nn=15, kk=10;
  typedef float  mas[nn]; //создание массива
  typedef  mas matr[mm];//создание матрицы
  typedef  unsigned int masbyt[kk];
  typedef  int masint[mm];
  void input(int *m,int *n, matr b); //функция ввода матрицы
  void output(const int m,const int n,const matr b);//функция вывода матрицы
  int maxstr(const int m,const int n,const matr b);//функция поиска максимального элемента всей матрицы и номера строки, в которой он расположен 
  int minstr(const int m,const int n,const matr b);//функция поиска минимального элемента всей матрицы и номера строки, в которой он расположен 
  void udalenie(const int m,const int n,const int nom,matr b); //Удаление из матрицы строки с заданным номером
  void zifra(unsigned int a,masbyt c,int *kol); //Определение цифр целого числа
  void sortirov(const int m, matr b,masint s);//Сортировка строк матрицы по сумме цифр последнего числа
