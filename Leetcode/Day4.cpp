#include<bits/stdc++.h>
#define lli long long int

using namespace std;

void moveZeroes(vector<int>& nums) {
	int pos = 0;
	int counter = 0;
	auto it = nums.begin();

	// Traverse the vector and remove the 0s
	while(it != nums.end()){	//cout << "Entered : " <<  x << endl;
		if(*it == 0){
			counter++;
			it = nums.erase(it);
		}
		else{
			*it++;
		}
	}

	// Append the 0s in the end of the vector
	for(int i=0 ; i<counter ; i++){
		nums.push_back(0);
	}

	for(int x : nums){
		cout << x << endl;
	}
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

	moveZeroes(nums);
}
