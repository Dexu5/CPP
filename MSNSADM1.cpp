#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	lli t;
	cin >> t;
	while(t--)
	{
		lli n, value = 0;
		cin >> n;
		lli a[n];
		lli b[n];
		for(int i=0; i<n ; i++)
		{
			cin >> a[i];
		}
		for(int i=0; i<n ; i++)
		{
			cin >> b[i];
		}
		for(int i=0; i<n ; i++)
		{
			if((a[i] * 20 - b[i] * 10) > value)
			{
				value = (a[i] * 20 - b[i] * 10);
			}
		}

		cout << value << endl;
	}
}