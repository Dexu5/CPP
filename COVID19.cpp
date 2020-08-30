// Below is C/C++ code for input/output 
#include<stdio.h> 
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
	cin >> arr[i];
      }
      
      for(int i=0;i<n-1;i++)
      {
	int w=1,b=1;
	if(arr[i+1]-arr[i]<=2)
	{
	  w++;
	} 
      }
    }
    return 0;
} 
