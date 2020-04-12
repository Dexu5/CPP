#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int singleNumber(vector<int>& nums) {
	int res = nums[0];
	for(std::size_t i = 1 ; i < nums.size() ; ++i){
		res = res ^ nums[i];
	}
	return res;
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

    std::vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);

    cout << singleNumber(nums);	
}