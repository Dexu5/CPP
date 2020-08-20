#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	ll int t, n, k;
	cin >> t;

	while(t--)
	{
		ll int c = 0;
		cin >> n >> k;
		ll int arr[10000];

		//cout << "c : " << c << endl;

		for(ll int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr+n);

		for(ll int i = 0 ; i < n ; i++)
		{
			if(arr[i] > k)
				break;
			for(ll int j = i+1 ; j < n ; j++)
			{
				if(arr[j] > arr[i] + k)
					break;
				//cout << "i : " << arr[i] << " j : " << arr[j] << endl;
				
				if((arr[i] + arr[j]) == k)
				{
					//cout << arr[i] << " " << arr[j] << endl;
					c++;
				}
				if(c != 0)
					break;
			}
		}
		if(c != 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	
}