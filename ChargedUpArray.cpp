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

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n, k;
    cin >> n;
    const unsigned int M = 1000000007;

    while(n--)
    {
    	cin >> k;
    	lli a[k], count = 0;
    	for(int i=0 ; i<k ; i++)
    	{
    		cin >> a[i];
    	}

    	for(int i=0 ; i<k ; i++)
    	{
    		if(a[i] > k)
    		{
    			count += a[i];
    		}
    	}
    	cout << count%M << endl;
	}
}