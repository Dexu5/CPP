#include<iostream>

using namespace std;

class Diagonal {
	private:
	int n;
	int *arr;

	public:

	Diagonal() {
		n = 2;
		arr = new int[n];
	}

	Diagonal(int n) {
		this->n = n;
		arr = new int[n];
	}
	
	void set(int i, int j, int x);
	int get(int i, int j);
	void display();

	~Diagonal() {
		delete []arr;
	}
};

void Diagonal::set(int i, int j, int x) {
	if(i == j) {
		arr[i-1] = x;
	}
}

int Diagonal::get(int i, int j) {
	if(i == j) {
		// return the value present at the i-1st location
		// can even use j-1
		return arr[i-1];
	} else {
		return 0;
	}
}

void Diagonal::display() {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (i == j) {
				cout << arr[i] << " ";
			} else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
}

int main() {
	Diagonal d(4);

	d.set(1,1,1);
	d.set(2,2,2);
	d.set(3,3,3);
	d.set(4,4,4);

	// d.display();
	cout << d.get(4,4) << "\n";
}
