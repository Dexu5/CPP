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
		lli n, c = 0;
		cin >> n;
		lli arr[n];
		for(lli i=0 ; i<n ; i++)
			cin >> arr[i];

		lli v = 0;
		for(lli i=0 ; i<n ; i++)
		{
			if(arr[i] > 7)
			{
				c = 0;
				break;
			}

			if((i+1) != n)
			{
				//cout << "arr[i] : " << arr[i] << " " << " arr[i+1] : " << arr[i+1] << endl;
				if((abs(arr[i] - arr[i+1])) > 1)
				{
					c = 0;
					break;
				}
			}
			if(i <= (n-1-i))
			{
				if(arr[i] == arr[n-1-i])
					c = 1;
				else
				{
					//cout << "arr[i] : " << arr[i] << " " << " arr[n-1-i] : " << arr[n-1-i] << endl;
					c = 0;
					break;
				}
			}
		}

		if(c == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}