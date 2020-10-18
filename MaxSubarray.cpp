#include<iostream>
#include<vector>

using namespace std;

class Solution {
	public:
		int maxSubArray(vector<int> nums) {

			// use to comapre with all the positive and negative numbers
			int ans = INT_MIN; 
			int val = 0;

			for(int x : nums) {
				val += x;
				ans = max(ans, val);
				val = max(val, 0);
			}
			return ans;
		}
};

int main() {
	Solution s;
	cout << s.maxSubArray ({-1, 2, 3, -4}) << "\n";
}
