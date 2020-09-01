#include<iostream>
#include<math.h>


#define ll long long
using namespace std;

int main()
{
	// https://www.codechef.com/LRNDSA02/problems/PSHOT
	// If n is even, then any player who scores the first n/2+1 score is the default winner
	// If n is odd, then any plsayer who scores the first n/2 score is the default winner 
	ll t;
	cin >> t;
	while(t--) {
		ll n, a, b, c = 0;
		cin >> n;
	
		string s;
		cin >> s;
		ll arr[(2*n)-1];
		ll val = stoi(s);
		//cout << n << " -> " << 2*n << "\n";
		//cout << val << "\n" << (2*n)-1 << "\n";
		for(int i=(2*n)-1; i>=0; i--)
		{
			arr[i] = val % 10;
			//cout << arr[i] << " -> ";
			val /= 10;
		}
		for(int j=0 ; j<2*n; j++)
		{
			c++;
			//cout << arr[j] << "->";
			if(j%2 == 0 && arr[j] == 1)
			{
				a++;
			}
			else if(j%2  == 1 && arr[j] == 1)
			{
				b++;
			}
			//cout << abs(a-b) << " -> " << ceil(n/2)+1 << "\n";
			
			//cout << a << " -> " << b << "\n";
			if(abs(a-b) == (n/2)+1 && c%2 == 0)
			{
				break;
			}
		}
		cout << c << "\n";
	}
}
