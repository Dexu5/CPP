#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		
		if(n == 0) {
			cout << "0 0\n";
		} else{

			if(n % 2 == 0) {
				cout << (n / 2) - 1 << " " << (n / 2) + 1 << "\n";
			} else {
				cout << (n / 2) << " " << (n / 2) + 1 << "\n";
			}
		}
	}
}
