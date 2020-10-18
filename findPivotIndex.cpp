#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    	int sum = 0;
		int leftsum = 0;
		for(int x : nums)
			sum += x;
	
		for(int i=0 ; i<nums.size() ; i++) {
			if(leftsum == sum - leftsum - nums[i])
				return i;
			leftsum += nums[i];
		}

		return -1;
	}
};

int main() {
	Solution s1;
	vector<int> nums = {1,7,3,6,5,6};
	cout << s1.pivotIndex(nums);
}

