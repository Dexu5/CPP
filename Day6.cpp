#include<bits/stdc++.h>
#define lli long long int

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){

	unordered_map<string, vector<string>> m;

	// Sort all the elements in vector string. 
	for(int i=0 ; i < strs.size() ; ++i){
		string s2 = strs[i];
		sort(s2[i].begin(), s2[i].end());
		//cout << s2[i] << endl;
		m[s2].push_back(s);
	}

	vector<vector<string>> v;
	for(auto pp : m){
		cout << pp.second << endl;
		v.push_back(pp.second);
	}

	return v;
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

   	vector<string> strs;
   	strs.push_back("eat");
   	strs.push_back("tea");
   	strs.push_back("tan");

   	groupAnagrams(strs);
}