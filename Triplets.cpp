// Question
// Array A of Size N
// Triplets (i, j, k) with the conditions
// i < j < k
// A[i] < A[j] < A[k]

// Special Triplet : A[i] + (A[j] * A[k])

// Determine the max value of the triplet

// First Line : Testcases (T) 
// For each case : 
	// N denoting number of elements
	// N spaced A[1], A[2], ... ...

// Testcases

// 2
// 3
// 10 5 3

// In this case the special triplet should be -1

// 4
// 5 20 11 19

// In this case A[1], A[3], A[4]

#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	lli t;
	cin >> t;
	while(t--)
	{
		lli n;
		lli A[n]
		lli B[n];
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> A[i];
		}
	}
}