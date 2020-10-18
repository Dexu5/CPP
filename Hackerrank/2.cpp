#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
using ll = long long int;

void solve(ll& t) {
	string a, b;
	cin >> a >> b;
	ll diff = 0;

	// create the vector to store the ascii values of the character
	vector<ll> a1(256), b1(256);

	// calculate the number of char occurance and map in an array for string a
	for(char& c : a)	
		a1[(int)(c)]++;
	
	// calculate the number of char occurance and map in an array for string b
	for(char& c : b)	
		b1[(int)(c)]++;

	// traverse through all the 256 elements for both the vector arrays
	//
	// input : a b
	// output : 2
	// it will calculate the difference as 'a' is present in vector a but not vector b
	// likewise 'b' is present in vector b but not vector a
	// which gets us the value 2
	//
	for(int i=0 ; i<256; i++) {
		diff += abs(a1[i] -  b1[i]);
	}

	cout << diff;
}


int main() {
	 ll t;
	 cin >> t;
	 while(t--) 
		 solve(t);
}
