#include<bits/stdc++.h>
#define lli long long int

using namespace std;

bool IsPalindrome(int x){
	int newVal = 0;
	int x1 = x;

	//Check the base case where the number is negative
	if(x1 < 0){
		return false;
	}

	//Check if the number is palindrome.
	while(x1 != 0){
		int rem = x1 % 10;
		newVal = newVal * 10 + rem;
		x1 /= 10;
	}

	if(x == newVal)
		return true;
	else
		return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 121;
    cout << IsPalindrome(x);
	
}