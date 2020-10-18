#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int> nums) {
    	int curr_max = nums[0]; 
		int curr_min = nums[0];
		int ans = nums[0];

		// need the previous value to track the curr_max as it will 
		// change once we perform operation
		int prev_max = nums[0];
		int prev_min = nums[0];

		for(int i = 1; i<nums.size(); i++) {

			// calculate the current max by comparing the previous min (negative values possible which can lead to higher value) and
			// previous max (obviously this will be used to compare the current max and if it is higher we will consider and
			// the number itself (if the prev_min and prev_max are 0, we will be considering the number.
			curr_max = max(max(prev_max * nums[i], prev_min * nums[i]), nums[i]);
			curr_min = min(min(prev_max * nums[i], prev_min * nums[i]), nums[i]);

			// find the max from current max and current min
			ans = max(ans, curr_max);

			// update the prev max and prev min
			prev_max = curr_max;
			prev_min = curr_min;
		}

		return ans;
		
	}
};

int main() {
	Solution s;
	cout << s.maxProduct({2, 3, -2, 4}) << "\n";
}
