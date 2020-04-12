#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int f(lli n){
	int res;
	
	while(n){
		//cout << "(n%10) : " << (n%10) << endl;
		int digit = n % 10;
		n = n/10;
		res = digit * digit;
	}
	return res;
}

bool isHappy(int n)
{
	unordered_set<int> visited;
	while(true)
	{
		if(n == 1)
			return true;

		n = f(n);
		if(visited.count(n) == 1)
			return false;

		visited.insert(n);

	}
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

    int n;
    cin >> n;
    cout << isHappy(n);
	
}