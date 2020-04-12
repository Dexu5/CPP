#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int countElements(vector<int>& arr){
	set<int> s;
	for(int x : arr){
		s.insert(x);
	}
	int cnt = 0;
	for(int x : arr){
		if(s.count(x+1) == 1){
			cnt++;
		}
	}
	return cnt;
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

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    //arr.push_back(2);
    cout << countElements(arr);
	
}