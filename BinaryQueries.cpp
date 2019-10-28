#include<bits/stdc++.h>
#define lli long long int
#define SOA(arr) sizeof(arr)/sizeof(arr[0])

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

    lli n, q;
    cin >> n >> q;
    lli a[n];
    for(int i=0 ; i<n ; i++)
    {
    	cin >> a[i];
    }

    while(q--)
    {
    	lli f;
    	cin >> f;
    	if(f == 1)
    	{
    		lli x;
    		cin >> x;
    		if(a[x-1] == 1)
    			a[x-1] = 0;
    		else
    			a[x-1] = 1;
    	}
    	else
    	{
	    	lli l, r;
	    	cin >> l >> r;

	    	if(a[r-1]&1 == 1)
	    	{
	    		cout << "ODD" << endl;
	    	}
	    	else
	    	{
	    		cout << "EVEN" << endl;
	    	}
	    }
	}
}