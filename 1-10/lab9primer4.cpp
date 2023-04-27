#include <iostream>
using namespace std;
// Демонстрация модификатора static
/* Вспомогательная функция сохраняет
	количество введённых чисел и их сумму
	и выдаёт среднее значение	
*/
int r_avg(int i);
int main()
{
  int num;
  do {
    cout << "Enter numbers (-1 to quit): ";
    cin >> num;
    if(num != -1) cout << "Running average is: " << r_avg(num);
    cout << '\n';
  } while(num > -1);
  return 0;
}

// Вычисление среднего значения.
int r_avg(int i)
{
  static int sum=0, count=0; //статические переменные!
  sum = sum + i;
  count++;
  return sum / count;
}

