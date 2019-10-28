#include<iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	int x = 20;
	(x & 1) ? cout << "ODD" : cout << "EVEN";
	
}