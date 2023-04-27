#include <iostream>
#include <vector>
#include <algorithm> //STL 
using namespace std;

int main(){
	int rows, cols;
	cout << "Enter rows and cols amount: ";
	cin >> rows >> cols;
	vector<vector<int>> vector2D(rows);
	
	// Input 2d vector
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			int val;
			cout << "Enter element " << i << ", " << j << ": ";
			cin >> val;
			vector2D[i].push_back(val);
		}
	}
	
	// Output 2d vector
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << vector2D[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	
	// Output 2d vector
	for(auto & row : vector2D){
		for(auto & item : row){
			cout << item << ' ';
		}
		cout << endl;
	}
	
	// Find max value
	int maxval = vector2D[0][0];
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if (vector2D[i][j] > maxval){
				maxval = vector2D[i][j];
			}
		}
	}
	
	// Change max elements by multiplying by 2
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if (vector2D[i][j] == maxval){
				vector2D[i][j] *= 2;
			}
		}
	}
	
	// Output 2d vector
	for(auto & row : vector2D){
		for(auto & item : row){
			cout << item << ' ';
		}
		cout << endl;
	}
}
