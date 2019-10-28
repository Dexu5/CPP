// Implementing Quick Sort
// Author : Kunal Shah

#include<iostream>
#include<bits/stdc++.h>

#define SOA(A) sizeof(A)/sizeof(*A)
#define endl '\n'

typedef unsigned u;
typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);  // Optimizing the IO
	cin.tie(NULL); 
	
	ll arr[] = {10, 80, 30, 90, 40, 50, 70};
	ll size = SOA(arr);
	ll pivot = arr[size];
	ll head = 0;
	for(int j=0;j<size;j++)
	{
		if(arr[j] < pivot)
		{
			head++;
			swap(arr[head], arr[j]);
		}
	}
	
	//Print the output
	for(int j=0;j<size;j++)
		cout << arr[j] << " ";
}

