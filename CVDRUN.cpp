#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n, k, x, y, i, curr = 0;
		cin >> n >> k >> x >> y;
		i = x;
		
		if(x == y) {
		    cout << "YES\n";
		    break;
		}
		
		while(curr != x) {
			curr = (i + k) % n;
			if(curr == x) {
				cout << "NO\n";
				break;
			} else if(curr == y) {
				cout << "YES\n";
				break;
			}
			i = curr;
		}
	}
}
