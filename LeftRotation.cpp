#include<bits/stdc++.h>
#define ll long long 
#define lli long long int

using namespace std;

void displayArray(lli arr[], lli n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout << arr[i] << " ";
	}
}

void shiftArray(lli arr[], lli n, lli d)
{
	lli temp[10000];
	for(lli i=0 ; i<d; i++)
	{
		temp[i] = arr[i];
	}
	
	displayArray(arr, n);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	lli n;
	lli d;
	cin >> n;
	cin >> d;
	lli arr[n];
	for(int i=0 ; i<n ; i++)
	{
		cin >> arr[i];
	}
	shiftArray(arr, n, d);
}