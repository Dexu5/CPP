#include<iostream>
#include<vector>

#define lli long long int

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		lli n;
		vector<char> s;
		cin >> n;
		for(int i=0 ; i<2*n-1 ; i++)
		{
			char val;
			cin >> val;
			s.push_back(val);
		}
	}
}
