#include<iostream>
#include<math.h>
#include<algorithm>
#define sa 4
using namespace std;

int main()
{
	int arr[sa];
	int v = 0;
	for(int i=0;i<sa;i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+(sa-1));
	for(int i=0;i<(sa-2);i++)
	{
	    int t = abs(arr[i] - arr[i+1]);
	    if(t < arr[sa-1])
		{
		    v += arr[sa-1] - t; 
		}
	}
	cout << v;
	return 0;
}