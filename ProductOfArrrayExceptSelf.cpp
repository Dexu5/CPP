#include<iostream>
#include<vector>
#include<deque>

using namespace std;

class Solution {
	public:
		vector<int> productExceptSelf(vector<int>& nums) {
			
			int n = nums.size();

			vector<int> left(n, 1);
			vector<int> right(n, 1);
			// vector<int> ans(n);
			
			// the value of the first element of the left list would be 1
			left[0] = 1;

			// the value of the last element of the right list would be 1
			right[nums.size() - 1] = 1;

			// construct the left array
			for(int i=1 ; i<nums.size() ; i++) {
				left[i] = left[i-1] * nums[i-1];
			}

			// construct the right array
			for(int i=nums.size() - 2; i>=0 ; i--) {
				right[i] = right[i+1] * nums[i+1];
			}

			// construct the final array
			for(int i=0 ; i<nums.size() ; i++) {
				right[i] = right[i] * left[i];
			}

			return right;
		}
};

int main() {
	Solution s;
	vector<int> nums {1, 2, 3, 4};
	vector<int> calc = s.productExceptSelf(nums);
	for(int& c : calc) {
		cout << c << " ";
	}
}
