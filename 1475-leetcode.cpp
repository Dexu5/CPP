#include<vector>
#include<iostream>
#include<algorithm>
#define lli long long int

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums)
{
    vector<int> ans;
    sort(nums.begin(), nums.end());

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i+1] - nums[i] == 0 || nums[i+1] - nums[i] == 1 )
        {
            continue;
        }
        else
        {
            ans.push_back(nums[i]++);
        }
        
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
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = findDisappearedNumbers(nums);   
    for(int x : ans)
    {
        cout << x << " ";
    }
	
}