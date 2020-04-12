#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int reverse(int x){
	int newVal;
	while (x != 0){
	 	int rem = x % 10;
	 	x /= 10; 		
        if(newVal > INT_MAX/10 || (newVal == INT_MAX/10 && rem > 7)) return 0;
        if(newVal < INT_MIN/10 || (newVal == INT_MIN/10 && rem < -8)) return 0;
		newVal = newVal * 10 + rem;
	 }
	 return newVal;
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
	
    int x = 1234;

    cout << reverse(x);

}