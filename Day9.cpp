#include<bits/stdc++.h>
#define lli long long int

using namespace std;

string check(string s)
{
	for(int i=0 ; i<s.length() ; i++)
	{
		if(s[i] == '#')
		{
			//s.erase(std::remove(s.begin(), s.end(), s[i]), s.end());
			//s.erase(std::remove(s.begin(), s.end(), s[i-1]), s.end());
			s[i] = NULL;
			s[i-1] = NULL;
		}
		cout << s << endl;
		//cout << s[i] << endl;
	}
	return s;
}

bool backspaceCompare(string S, string T)
{
	// Check if the strings are null
	if(S == T)
	{
		return true;
	} 
	else 
	{
		if(check(T) == check(S))
		{
			cout << check(T) << endl;
			cout << check(S) << endl;
			return true;
		}
	}
	return false;
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S, T;
    cin >> S >> T;
	//cout << backspaceCompare(S, T);
	cout << check(S);
}