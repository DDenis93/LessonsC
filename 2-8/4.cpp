#include <iostream>
#include <stdlib.h>
using namespace std;

int ascOrder(const void* pfirst, const void* psecond){
	return *(int *)pfirst - *(int *)psecond;
}

int descOrder(const void* pfirst, const void* psecond){
	return *(int *)psecond - *(int *)pfirst;
}

int ascOrderAbs(const void* pfirst, const void* psecond){
	if (abs(*(int *)pfirst) == abs(*(int *)psecond)){
		return *(int *)pfirst - *(int *)psecond;
	}
	return abs(*(int *)pfirst) - abs(*(int *)psecond);
}

int ascOrderDigitSum(const void* pfirst, const void* psecond){
	int a = abs(*(int *)pfirst), b = abs(*(int *)psecond);
	int totalA = 0;
	while (a > 0){
		totalA += a % 10;
		a /= 10;
	}
	int totalB = 0;
	while (b > 0){
		totalB += b % 10;
		b /= 10;
	}
	return totalA - totalB;
}

int main(){
	int mas[10] = {-5, 3, 7, -8, 10, -9, -6, 1, 0, -1};
	qsort((void *)mas, 10, sizeof(int), ascOrderAbs);
	for(int i = 0; i < 10; i++){
		cout << mas[i] << '\t';
	}
	cout << endl;
	
	int mas2[10] = {1009, 101, 120, 401, 300, 459, 10000, 1, 0, -777};
	int (* ptr)(const void *, const void *);
	ptr = ascOrderDigitSum;
	qsort(mas2, 10, sizeof(int), ptr);
	for(int i = 0; i < 10; i++){
		cout << mas2[i] << '\t';
	}
	cout << endl;
}
