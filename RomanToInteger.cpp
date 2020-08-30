#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int romanToInt(string s){
	// Loop from last value of string to first
	// If the next value of `s` is smaller than the existing value
	// Subtract the number from existing number.
	// If the next6 value of `s` is greater than the existing value
	// Add the number to the existing number
	//cout << s.size() << endl;

	unordered_map<char, int> umap;
	umap['I'] = 1;
	umap['V'] = 5;
	umap['X'] = 10;
	umap['L'] = 50;
	umap['C'] = 100;
	umap['D'] = 500;
	umap['M'] = 1000;

	int val = 0;
	
	/*int val = (umap.find('I'))->second;
	cout << val << endl;*/

	/*for(int i=s.size()-1 ; i>=0 ; i--){

		//Check the base condition
		if(i == s.size()-1){
			cout << "Entered" << endl;
			val = (umap.find(s[s.size()-1]))->second;
		}
		cout << val << endl;
	}*/

	for(int i=s.size()-1 ; i>=0 ; i--){

		//Check the base condition
		if(i == s.size()-1){
			val += (umap.find(s[s.size()-1]))->second;
		}

		//Check other conditions
		if((umap.find(s[i]))->second < (umap.find(s[i+1]))->second){
			val -= umap.find(s[i])->second;
		}
		else{
			val += umap.find(s[i])->second;
		}
	}
	return val;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "IV";
    cout << romanToInt(s);
	
}