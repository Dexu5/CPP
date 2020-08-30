#include<iostream>
#include<math.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, max = 0;
		cin >> n;
		for(int i = 0; i<n ; i++)
		{
			ll s, v, p;
			cin >> s >> v >> p;
			int cal = floor(p / (s + 1)) * v;
			if(cal > max)
			{
				max = cal;
			}
		}
		cout << max << "\n";
	}
}


