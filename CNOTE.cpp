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
		lli X, Y, K, N;// X >> Total Pages ; Y >> Pages left ; 
					   // K >> Amount left ; N >> Total notebooks;
		lli C = 0; 

		cin >> X >> Y >> K >> N;
		while(N--)
		{
			lli Pi, Ci; //Pi >> Pages of new book ; Ci >> Price of new book
			cin >> Pi >> Ci;
			if(Pi >= (X - Y) && Ci <= K)
			{
				C = 1;
			}
		}
		
		if(C!=1)
			cout << "UnluckyChef" << endl;
		else
			cout << "LuckyChef" << endl;
	}
}