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

    lli n, c;
    cin >> n;
    lli a[n];
    for(int i=0 ; i<n ; i++)
    {
    	cin >> a[i];
    }

    for(int i=0 ; i<n ; i++)
    {
    	//cout << "Loop for : " << a[i] << endl;

    	c = 0;
    	for(int j=i+1 ; j<n ; j++)
    	{
    		//cout << "Comparing : " << a[i] << " " << a[j] << endl;
    		if(a[i] < a[j])
    		{
    			c++;
    			break;
    		}
    		else if(j == n-1)
    		{
    			cout << a[i] << " ";
    		}
    		else
    		{
    			continue;
    		}
    	}

    	if(i == n-1)
    	{
    		cout << a[i];
    	}

    	/** if(c != 0)
    		continue; */
    }
}