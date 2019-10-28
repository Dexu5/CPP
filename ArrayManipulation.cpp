#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	long long int n, m, k, a, b;
	long long int v = INT_MIN;
	cin >> n >> m;
	long long int *arr=new long long int[n+1]();

	while(m--)
	{
		cin >> a >> b >> k;
		for(int i = a ; i <= b ; i++)
		{
			arr[i-1] += k;
		}
	}

	for(long long int i=0; i < n; i++)
	{
		v = max(v, arr[i]);
	}
	//delete[] arr;	

	cout << v;
	
	return 0;
}