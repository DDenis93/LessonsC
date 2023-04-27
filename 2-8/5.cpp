#include <iostream>
using namespace std;

typedef int(* compareFunctionType)(const void*, const void*);

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

//void selectionSort(int* mas, int N, int(* compareFunction)(const void*, const void*)){
void selectionSort(int* mas, int N, compareFunctionType compareFunction){
	for(int i = 0; i < N - 1; i++){
		int minIndex = i;
		
		for(int j = i + 1; j < N; j++){
			if (compareFunction(&mas[minIndex], &mas[j]) > 0){
				minIndex = j;
			}
		}
		
		swap(mas[i], mas[minIndex]);
	}
}

/*
void bubbleSort(int* mas, int N, int(* compareFunction)(const void*, const void*)){
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N; j++){
			if (compareFunction(&mas[i], &mas[j]) > 0){
				swap(mas[i], mas[j]);
			}
		}
	}
}
*/

void mySort(int* mas, int N, void (*sortFunction)(int*, int, int(* compareFunction)(const void*, const void*)), compareFunctionType compareFunction){
	(*sortFunction)(mas, N, compareFunction);
}

int main(){
	int mas[10] = {-5, 3, 7, -8, 10, -9, -6, 1, 0, -1};
	mySort(mas, 10, selectionSort, ascOrder);
	for(int i = 0; i < 10; i++){
		cout << mas[i] << '\t';
	}
	cout << endl;
	
	int mas2[10] = {1009, 101, 120, 401, 300, 459, 10000, 1, 0, -777};
	selectionSort(mas2, 10, ascOrderDigitSum);
	for(int i = 0; i < 10; i++){
		cout << mas2[i] << '\t';
	}
	cout << endl;
}
