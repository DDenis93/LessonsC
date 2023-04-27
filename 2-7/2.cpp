#include <iostream>
using namespace std;

int main(){
	const int N = 3;
	const int M = 4;
	int a[N][M] = {{-10, 3, -2, -1},
				   {-4, 5, 6, -7}, 
				   {11, 12, -13, 2}};
	
	for (int i = 0; i < N*M - 1; i++) {
		int min_i = i / M;
		int min_j = i % M;
	
		for (int j = i + 1; j < N*M; j++) { 
			if (a[j/M][j%M] < a[min_i][min_j])
				{
					min_i = j/M; 
					min_j = j%M;
				} 
		} 
		
		swap(a[i/M][i%M], a[min_i][min_j]);
	} 
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
