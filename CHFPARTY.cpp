#include<bits/stdc++.h>
#define ll long long 
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
		lli n;
		lli c = 0;
		cin >> n;
		lli arr[n];

		for(lli i=0 ; i<n ; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr+n);

		for(lli i=0 ; i<n ; i++)
		{
			//cout << arr[i] << " ";
			if(arr[i] <= c)
			{
				c++;
			}
		}
		if(c != 0)
			cout << c << endl;
		else
			cout << "0" << endl;
	}
}