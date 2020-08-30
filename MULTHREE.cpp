#include<bits/stdc++.h>
#define lli long long int


using namespace std;

int main()
{
	//https://www.codechef.com/LRNDSA01/problems/MULTHREE
	lli t;
	cin >> t;
	while(t--)
	{
		lli k, d0, d1;
		cin >> k >> d0 >> d1;
		lli val = d0 * 10 + d1;
		lli sum  = d0 + d1;
		k = k-2;
		while(k--)
		{
			val = val * 10 + (sum % 10);
			sum = sum + (sum % 10);
		}
		if(val%3 == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}
