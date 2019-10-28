#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() 
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	 
    int t, c;
    string n, s;
    cin >> t;
    map<string, int> pb;
    map<string, int>::iterator itr;


    for(int i=0 ; i<t ; i++)
    {
    	cin >> n >> c;
    	pb[n] = c;
    }

    /*for(itr = pb.begin() ; itr != pb.end() ; ++itr)
    {
    	cout << itr -> first << " " << itr -> second << endl;
    } */

    while(cin >> n)
    {
    	itr = pb.find(n);
    	if(itr  == pb.end())
    	{
    		cout << "Not found" << endl;
    	}
    	else
    	{
    		cout << itr -> first << "=" << itr -> second << endl;
    	}
    }

    return 0;
}

