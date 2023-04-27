#include <iostream>
#include <string>
#include <map>
// ассоциативный массив, словарь
// STL
using namespace std;

int main(){
	map<string, int> cities = {{"Moscow", 12000000}, {"Paris", 2148000}, {"Washington", 800000}};
	cities.insert({"Beirut", 1854000});
	
	if(!cities.empty()){
		for(const pair<string, int> & city : cities){
			cout << "In " << city.first << " lives " << city.second << endl;
		}
	}
	else{
		cout << "Dictionary is empty" << endl;
	}
	
	cities.clear();
	cout << "Size of the dictionary = " << cities.size() << endl;
	
	
	
}
