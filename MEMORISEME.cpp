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
	lli q[n];
	for(int i=0 ; i<n ; i++)
	{
		cin >> q[i];
	}	

	lli t;
	cin >> t;
	while(t--)
	{
		lli val;
		lli count = 0;
		cin >> val;
		for(int x : q)
		{
			if(x == val)
			{
				count++;
			}
		}
		if(count != 0)
			cout << count << endl;
		else
			cout << "NOT PRESENT" << endl;
	}

}