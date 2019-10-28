#include<bits/stdc++.h>

using namespace std;

int findValue(vector<int> &a, int y, int z, char d, int count, auto p, int size)
{
	if(d == 'L')
	{

		// Check if the source city is same 
		// as type of destination city 
		if(a[y] == z)
		{
			//cout << "Entered Here ** " << endl;
			cout << count << endl;
			return count;
		}

		// If not, try moving to the left direction
		else
		{
			y = (y - 1 + size)%size;
			count++;
			//cout << "Y : " << y << endl;
			//cout << "Count : " << count << endl;
			findValue(a, y, z, d, count, p, size);
			return 0;
		}
	}
	else
	{
		// Check if the source city is same 
		// as type of destination city 
		if(a[y] == z)
		{
			//cout << "Entered Here ** " << endl;
			cout << count << endl;
			return count;
		}

		// If not, try moving to the left direction
		else
		{
			y = (y + 1)%size;
			count++;
			//cout << "Y : " << y << endl;
			//cout << "Count : " << count << endl;
			findValue(a, y, z, d, count, p, size);
			return 0;
		}
	}
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

    int n, q, input;
    cin >> n >> q;
    vector<int> a;

    for(int i=0 ; i<n ; i++)
    {
    	cin >> input;
    	a.push_back(input);
    }

    while(q--)
    {
    	int y, z;
    	char d;
    	cin >> y >> z >> d;

		/// array[] 0 1 L
		int size = a.size();
		
		// Check of the "type of city" exists in array
		auto p = std::find(a.begin(), a.end(), z);


    	// y : Start city
    	// z : Type of city (Destination)
    	// Previous City : (i - 1 + N)%N
    	// Next City : (i + 1)%N

		if(p != a.end())
		{
			findValue(a, y, z, d, 0, p, size);
		}
		else
		{
			// Value doesn't exist
			cout << "-1" << endl;
			return 0;
		}
   	}
}