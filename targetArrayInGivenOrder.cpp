#include<bits/stdc++.h>

using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> final;
	for(int i=0; i<index.size(); i++) {
		final.insert(final.begin() + index[i], nums[i]);
	}
	return final;
}

int main() {
	vector<int> nums = {0, 1, 2, 3, 4};
	vector<int> index = {0, 1, 2, 2, 1};
	vector<int> final = createTargetArray(nums, index);

	for(int x: final) {
		cout << x << " -> ";
	}
	
}
