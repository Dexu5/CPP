#include<iostream>

using namespace std;

class LowerTri {
	private:
	int n;
	int *arr;

	public:
	LowerTri() {
		int n = 2;
		// there are n*(n=1)/2 non zero elements in LowerTriangular Matrix
		arr = new int[n*(n+1)/2];
	}

	LowerTri(int n) {
		this->n = n;
		arr = new int[n*(n+1)/2];
	}
	
	void set(int i, int j, int x);
	int get(int i, int j);
	void display();

	~LowerTri() {
		delete []arr;
	}
};

// using scope resolution to use the set method
// for setting the values 
void LowerTri::set(int i, int j, int x) {
	if(i>=j) {
		arr[(i*(i-1)/2) + (j-1)] = x;
	}
}

// using scope resolution to use the get method
// for getting the values 
int LowerTri::get(int i, int j) {
	if(i>=j) 
		return arr[(i*(i-1)/2) + (j-1)]; 
	return 0;
}

// use to display all the values in matrix
void LowerTri::display() {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n ; j++) {
			if(i >= j) {
				cout << arr[(i*(i-1)/2) + (j-1)] << " ";
			} else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
}

int main() {
	int d, x;
	cout << "Enter the dimenstion : ";
	cin >> d;
	LowerTri t(d);

	for(int i=1; i<=d; i++) {
		for(int j=1; j<=d; j++) {
			cin >> x;
			t.set(i, j, x);
		}
	}
	
	t.display();

}
