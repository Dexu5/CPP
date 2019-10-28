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
	
    lli t;
    cin >> t;
    while(t--)
    {
    	lli n, k;
    	cin >> n >> k;
    	lli a[n];
    	for(int i=0 ; i<n ; i++)
    	{
    		cin >> a[i];
    	}

    	lli size = sizeof(a)/sizeof(*a);
    	sort(a, a+size);

    	if(k > 0)
    		cout << k - a[0] << endl;
    	else
    		cout << "0" << endl;

    }
}