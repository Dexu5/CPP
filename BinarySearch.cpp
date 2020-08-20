#include<iostream>
#define SOA(A) ((sizeof(A)/sizeof(*A))-1) 
using namespace std;

int binarySearch(int A[], int start, int end, int V)
{
	// cout << "Init Start : " << start << " Init End : " << end << endl;
	if(A[start] > V)
	{
		end = end/2;
		cout << "End Updated : " << end << endl;
		//cout << "Start : " << start << " End : " << end << endl;
		binarySearch(A, start, end, V);	
	}
	else if(A[start] < V)
	{
		start = end/2;
		
		
		cout << "Start Updated : " << start << endl;
		cout << "Start : " << start << " End : " << end << " Value : " << V << endl;
		//binarySearch(A, start, end, V);	
	}
	else if(A[start] == V || A[end] == V)
	{
		cout << "Value found";
	}
	else
	{
		cout << "Value not found";
	}
	return 0;
}

int main()
{
	int A[] = {2,4,6,8,10};
	int V = 0;
	cin >> V;
	binarySearch(A, 0, SOA(A), V);
		
	/* 
	Jotting down the logic of binary search
	* Capture the middle element of an array
	* Compare the value of the middle element with input provided
	* If the element > value
	* Capture the middle element of the 0 to existing middle element and repeat the steps
	*/
	return 0;
}
