#include<bits/stdc++.h>
#define lli long long int

using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
	vector<int> newNums;
	/*for(int i=0 ; i<nums.size() ; i++)
	{
		int product = 1;
		for(int j=0 ; j<nums.size() ; j++)
		{
			if(i == j)
			{
				continue;
			}
			else
			{
				product *= nums[j];
			}
		}
		newNums.push_back(product);
	}*/
	int product = 1;
	int value = 0;
	
	for(int i=0 ; i<nums.size() ; i++)
	{
		product *= nums[i];
	}

	for(int i=0 ; i<nums.size() ; i++)
	{
		value = product / nums[i];
		newNums.push_back(value);
	}
	return newNums;
}

int main()
{
	vector<int> nums = {1, 2, 3, 4};
	vector<int> newNums;

	newNums = productExceptSelf(nums);

	for(int x : newNums)
	{
		cout << x << " ";
	}
}