#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int maxProfit(vector<int>& prices){
	int profit = 0;
	int sizeOfPrices = prices.size();
	for(int i=0 ; i < sizeOfPrices - 1 ; ++i){
		if(prices[i+1] > prices[i]){
			profit += prices[i+1] - prices[i];
		}
	}
	return profit;
	
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

    vector<int> prices;
    prices.push_back(6);
    prices.push_back(1);
    prices.push_back(3);
    prices.push_back(2);
    prices.push_back(4);
    prices.push_back(7);

    cout << maxProfit(prices);
	
}