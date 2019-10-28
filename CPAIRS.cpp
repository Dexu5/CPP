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
	
	lli T;
	cin >> T;
	while(T--)
	{
		lli N;
		cin >> N;
		lli A[1000000000];
		lli C = 0;
		for(lli i=0 ; i<N ; i++)
		{
			cin >> A[i];
		} 
		for(lli i=0 ; i<N ; i++)
		{
			for(lli j=i ; j<N ; j++)
			{
				if(A[i]%2 == 0 && A[j]%2!= 0)
				{
					C++;
				}
			}
		}
		cout << C << endl;

	}

}