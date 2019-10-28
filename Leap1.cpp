#include<bits/stdc++.h>
using namespace std;
#define LO long long
int main()
{
LO t, t1;	
cin >> t;
t1 = t;

while(t--)
{
	string s;
	
	cin >> s;
	
	LO c = 0;
	
	LO l = s.size();
   
   cout << "Case #" << (t1 - t) << ": "; 
	
	for(LO i = 0; i < s.size(); i++)
	if(s[i] == 'B')
	c++;
	
	if(l&1)
	{
		cout << " l : " << l << endl;
		cout << " c : " << c << endl;
		if((l - 2) < (((l - 1)/2)))
		cout << "N\n";
		
		else if(c >= ((l - 1)/2) && c <= (l - 2))
		cout << "Y\n";
		
		else cout << "N\n";
	}
	
	else{
		if((l - 2) < (((l - 1)/2) + 1))
		cout << "N\n";
		
		else if(c >= (((l - 1)/2)+1) &&  c <= (l - 2))
		cout << "Y\n";
		
		else cout << "N\n";
	    }
	    
	s.clear();
}
	return 0;
}
