#include<iostream>

using namespace std;

struct Matrix {
	int A[10];
	int n;
};

class Solution {
	public:
		void Set(struct Matrix *m, int i, int j, int x) {
			// using the '->' to access the value of array because 'm' is a pointer
			m->A[i-1] = x;
		}

		int Get(struct Matrix m, int i, int j) {
			if(i == j) {
				return m.A[i-1];
			}
			else {
				return 0;
			}
		}

		void Display(struct Matrix m) {
			int i, j;
			for(int i=0; i<m.n; i++) {
				for(int j=0; j<m.n; j++) {
					if(i == j) {
						cout << m.A[i] << " ";
					}
					else {
						cout << "0 ";
					}
				}
				cout << "\n";
			}
		}
};


int main() {
	struct Matrix m;
	m.n = 4;

	Solution s;
	s.Set(&m, 1, 1, 4);
	s.Set(&m, 2, 2, 5);
	s.Set(&m, 3, 3, 6);
	s.Set(&m, 4, 4, 7);

	s.Display(m);

}
