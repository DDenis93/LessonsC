#include <iostream>
using namespace std;

int main(){
	const int N = 3;
	const int M = 4;
	int a2[N][M] = {{-10, 3, -2, -1},
				   {-4, 5, 6, -7}, 
				   {11, 12, -13, 2}};
	
	const int size = N*M;
	int *a = (int *)&a2[0][0];
	for (int i = 0; i < size - 1; i++) {
		int min_i = i;
	
		for (int j = i + 1; j < size; j++) { 
			if (abs(a[j]) < abs(a[min_i]))
				{ min_i = j; } 
		} 
		
		int temp = a[i];
		a[i] = a[min_i];
		a[min_i] = temp; 
	} 
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << a2[i][j] << ' ';
		}
		cout << endl;
	}
}
