#include<bits/stdc++.h>

using namespace std;

int Fx(vector<int> &a, int t, auto val)
{
	for(auto itr = val+1 ; itr < a.end() ; itr++)
	{
		//cout << "*itr" << *itr << endl;
		//cout << "*val" << *val << endl;
		
		if(*itr < *val)
		{
			//cout << "Entered Fx" << endl;
			return *itr;
			break;
		}
		else if(itr == a.end() - 1)
		{
			return -1;
			break;
		}
	}
	return 0;
	
}	

void Gx(vector<int> &a, int t)
{
	// Call Fx
	for(auto itr = a.begin() ; itr < a.end() ; itr++)
	{
		for(auto itrx = itr+1 ; itrx < a.end() ; itrx++)
		{	
			//cout << "*itr" << *itr << endl;
			//cout << "*itrx" << *itrx << endl;
			
			if(*itr < *itrx)
			{
				//cout << "Entered Gx" << endl;
				cout << Fx(a, t, itrx) << " ";
				break;
			}
			else if(itrx == a.end() - 1)
			{
				cout << "-1" << " "; 
			}
		}

		if(itr == a.end() - 1)
		{
			cout << "-1" << " ";
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

    int t, v;
    cin >> t;
    vector<int> a;
    for(int i=0 ; i<t ; i++)
    {
    	cin >> v;
    	a.push_back(v);
    }

    Gx(a, t);
}