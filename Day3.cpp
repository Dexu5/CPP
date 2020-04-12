#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int maxSubArray(vector<int>& nums){
	int a = 0;
	int ans = INT_MIN;
	for(int x : nums)
	{
		a += x;
		ans = max(ans, a);
		a = max(a, 0);
	}
	return ans;
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

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(-5);

    cout << maxSubArray(nums);
}