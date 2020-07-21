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

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin >> t;
    while (t--)
    {
        lli n = 0, flag = 0;
        cin >> n;
        char c;
        unordered_map <char, int> M;
        for(int i=0 ; i < n; i++)
        {
               cin >> c;
               M[c]++;  
        }

        auto it = M.begin();

        while(it!=M.end())
        {
            if(it->second%2 == 1)
                break;
            it++;
        }

        if(it == M.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
        
}
