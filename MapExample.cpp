#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main() {
	// Maps example
	map<int, int> one;

	// Insert the values in map
	one.insert(pair<int, int>(1, 10));
	one.insert(pair<int, int>(2, 20));
	one.insert(pair<int, int>(3, 30));
	one.insert(pair<int, int>(4, 40));

	// erase the element with key = 4
	one.erase(4);

	// max size of elements a map can hold
	cout << "Max size : " << one.max_size() << "\n";
	
	// size of elements in a map
	cout << "Size : " << one.size() << "\n";

	// print the map
	map<int, int>::iterator itr;
	for(itr = one.begin(); itr != one.end(); ++itr) {
		cout << "Key : " << itr->first << "\t";
		cout << "Value : " << itr->second << "\n";
	}

	// add the values to another map
	map<int, int> two(one.begin(), one.end());

	// erase all the values with values less than 3
	one.erase(one.begin(), one.find(3));

}
