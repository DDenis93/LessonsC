#include <iostream>
#include <string>
#include <map>
// ассоциативный массив, словарь
// STL
using namespace std;

int main(){
	map<string, int> city_to_population = {{"Moscow", 12000000}, {"Paris", 2148000}, {"Washington", 800000}};
	city_to_population.insert({"Beirut", 1854000});
	
	//if(city_to_population.find(string("Paris")) == city_to_population.end()){
	cout << "city_to_population[\"Paris\"] = " << city_to_population["Paris"] << endl;
	//}

	map<int, string> population_to_city;
	
	for(const auto & item : city_to_population){
		population_to_city.insert({item.second, item.first});
	}
	
	for(const pair<int, string> & item : population_to_city){
		cout << item.first << ' ' << item.second << endl;
	}
	
	cout << "population_to_city[12000000] = " << population_to_city[12000000] << endl;
	
	
}
