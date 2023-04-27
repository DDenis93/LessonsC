#include <iostream>
#include <time.h>
using namespace std;

int main(){
	srand(time(0));
	int size1;
	cout << "Enter size1: ";
	cin >> size1;
	int *mas = (int *) malloc(size1 * sizeof(int));
	cout << "mas: " << (void *)mas << endl;
	for(int i = 0; i < size1; i++){
		mas[i] = rand() % 10 + 1; //1-10
		cout << mas[i] << ' ';
	}
	cout << endl;
	
	int size2;
	cout << "Enter size2: ";
	cin >> size2;
	mas = (int *) realloc(mas, size2);
	cout << "mas: " << (void *)mas << endl;
	if (size2 > size1){
		for(int i = size1; i < size2; i++){
			mas[i] = rand() % 90 + 10; // 10-99
		}
	}
	for(int i = 0; i < size2; i++){
		cout << mas[i] << ' ';
	}
	cout << endl;
	
	free(mas);
}
