#include<iostream>
#include<vector>

using namespace std;

int main() {
	// initialize
	vector<int> v0;
	vector<int> v1(5, 0);

	// make a copy of vector
	vector<int> v2(v1.begin(), v1.end());
	vector<int> v3(v2);

	// cast an array to vector
	int arr[5] = {1, 2, 3, 4, 5};
	vector<int> v4(begin(arr), end(arr));

	// get length
	cout << v4.size() << endl;

	// first element
	cout << v4[0] << endl;

	// iterate the vector
	// version 1
	for (int i=0; i<v4.size(); i++) {
		cout << v4[i] << " ";
	}

	// version 2
	for(int& item: v4) {
		cout << item << " ";
	}

	cout << endl;

	// version 3
	for (auto item = v4.begin(); item != v4.end(); ++item) {
		cout << *item << " ";
	}
}
