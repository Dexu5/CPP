#include<bits/stdc++.h>

using namespace std;

int main()
{

	// Unordered Map 
	unordered_map <string, int>umap;
	umap["Kunal"] = 10;
	umap["Errichto"] = 11;

	// Ordered Map
	map<string, int>omap;
	omap["Kunal"] = 1;
	omap["Kunal"] = 100;	
	omap["Errichto"] = 2;

	for(auto x : omap){
		cout << "Name : " << x.first << " Number : " << x.second << "\n";
	}
}