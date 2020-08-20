#include<bits/stdc++.h>
#define lli long long int
#define lld long double

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	lli T;
	cin >> T;
	while(T--)
	{
		lli N;
		cin >> N;
		lli A[N];
		lld M = 0.0;
		lli f = 0;
		for(lli i=0 ; i<N ; i++)
		{
			cin >> A[i];
		}

		for(lli i=0 ; i<N ; i++)
		{
			M += A[i];
		}
		
		M /= N;
		
		for(lli i=0 ; i<N ; i++)
		{
			if(f == 0)
			{
				if(A[i] == M)
				{
					cout << i + 1 << endl;
					f++;
					break;
				}
			}
		}

		if(f == 0)
		{
			cout << "Impossible" << endl;
		}
	}
}