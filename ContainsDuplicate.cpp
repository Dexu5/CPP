#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	unordered_set<int> vals;
    bool containsDuplicate(vector<int>& nums) {
		 for(int& x : nums) {
			 if(vals.find(x) != vals.end()) {
				return true;
			 }
			 vals.insert(x);
		}
		 return false;
    }
};

int main() { 
	Solution s;
	vector<int> nums = {1, 2, 3, 0};
	cout << s.containsDuplicate(nums) << "\n";	
}
