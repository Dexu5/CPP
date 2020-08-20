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
		lli m, x, y, f, p, prev, curr, next = 0;
		cin >> m >> x >> y;
		p = x*y;
		lli arr[m];
		for(int i=0 ; i<m ; i++)
			cin >> arr[i];

		for(int i=0 ; i<m ; i++)
		{
			if(i == 0)
			{
				if(arr[0] > p)
				{
					f += arr[i] - p;
				}
			}

			if(arr[i] - arr[i-1] > p)
			{
					f += (arr[i] - arr[i-1]) - p;
			}

			if(i == m-1)
			{
				if((100 - arr[i]) > p)
				{
					f += (100 - arr[i]) - p;		
				}
			}
		}

		cout << f << endl;
	}
	
}