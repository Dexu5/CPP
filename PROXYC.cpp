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

	lli T, Ab, P = 0;
	double To;
	cin >> T;
	while(T--)
	{
		lli D;
		cin >> D;
		string A[D];
		for(lli i=0 ; i<D ; i++)
		{
			cin >> A[i];

			if(strcmp(A[i], 'P') == 0)
			{
				P++;
			}
			else
			{
				Ab++;
			}
		}

		To = (P/D)*100;
		//cout << P << " " << D << " " << To << endl;
		cout << To << endl;
	}
	
}