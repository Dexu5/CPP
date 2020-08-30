#include<bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
	//https://www.codechef.com/LRNDSA01/problems/LADDU
	
	lli t;
	cin >> t;
	while(t--)
	{
		lli a;
		cin >> a;
		string c;
		cin >> c;
		lli points = 0;
		for(int i=0; i<a; i++)
		{
			string v;
			cin >> v;
			if(v == "CONTEST_WON")
			{
				lli r;
				cin >> r;
				if(r <= 20)
				{
					points += 300 + 20 - r;
				}
				else
				{
					points += 300;
				}
			}
			else if(v == "TOP_CONTRIBUTOR")
			{
				points += 300;
			}
			else if(v == "BUG_FOUND")
			{	
				lli s;
				cin >> s;
				points += s;

			}
			else if(v == "CONTEST_HOSTED")
			{
				points += 50;
			}
		}

		if(c == "INDIAN")
		{
			cout << floor(points/200) << '\n';
		}
		else
		{
			cout << floor(points/400) << '\n';
		}
	}

}
