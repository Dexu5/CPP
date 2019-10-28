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

	lli t, b;
	char a;
	cin >> t;
	if(t%4==0)
	{
		a = 'A';
		b = 1; 
	}
	else if(t%4==1)
	{
		a = 'A';
		b = 0; 
	}
	else if(t%4==2)
	{
		a = 'B';
		b = 1; 
	}
	else if(t%4==3)
	{
		a = 'A';
		b = 2; 
	}

	cout << b << " " << a;
}