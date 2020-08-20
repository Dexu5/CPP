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

	// lli t;
	// cin >> t;
	map<string, int> days;
	days.insert(pair<string, int>("sunday",1));
	days.insert(pair<string, int>("monday",2));
	days.insert(pair<string, int>("tuesday",3));
	days.insert(pair<string, int>("wednesday",4));
	days.insert(pair<string, int>("thursday",5));
	days.insert(pair<string, int>("friday",6));
	days.insert(pair<string, int>("saturday",7));

	while(t--)
	{
		string sdate, edate;
		lli idx, idy;
		cin >> sdate >> edate >> idx >> idy;

		map<string, int>::iterator itr;
		
		for(itr = days.begin() ; itr != days.end() ; ++itr)
		{
			// cout << itr -> first << " " << itr -> second << endl;
			if(itr->first == sdate)  	
		}
	}
	
}