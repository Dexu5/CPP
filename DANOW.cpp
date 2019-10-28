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

	lli N, Q, L, R;
	cin >> N >> Q;
	lli A[N], B[N];

	for(lli i=0 ; i<N ; i++)
	{
		cin >> A[i];
	}
	for(lli i=0 ; i<N ; i++)
	{
		cin >> B[i];
	}

	while(Q--)
	{
		lli T = 0;
		cin >> L >> R;
		for(lli i=L-1 ; i<=R-1 ; i++)
		{
			//cout << "A[i] : " << A[i] << " B[i] : " << B[i] << endl;
			T += A[i] * B[i];
		}
		cout << T << endl;
	}	
}