#include<iostream>
#include<vector>

using namespace std;

class Solution {
	public:
		int maxProfit(vector<int>& prices) {
			 int buy = INT_MAX, sell = 0, profit = 0;
			 for(int i=0; i<prices.size(); i++) {
				 if(prices[i] < buy) {
					 buy = prices[i];
					 sell = 0;
				 }  

				 if(prices[i] > sell) {
					 sell = prices[i];
				 }

				 if(sell - buy > profit) {
					 profit = sell - buy;
				 }
			 }
			return profit;
		}
};

int main() {
	Solution s;
	vector<int> prices {7,6,4,3,1};
	cout << s.maxProfit(prices) << "\n";
}
