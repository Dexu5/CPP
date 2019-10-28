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

    lli n;
    cin >> n;
    lli a[n];
	lli b[n];
    for(lli i=0 ; i<n ; i++)
	{
		cin >> a[i];
	}
	for(lli i=0 ; i<n ; i++)
	{
		cin >> b[i];
	}
	for(lli i=0 ; i<n ; i++)
	{
		cout << a[i] + b[i] << " ";
	}
}