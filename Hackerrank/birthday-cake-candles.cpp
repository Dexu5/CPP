#include<bits/stdc++.h>

using namespace std;

unordered_map<int,int> values;
int maxm = 0;
int birthdayCakeCandles(vector<int> candles) {
	
	for(int x: candles) {
		unordered_map<int,int>::iterator it = values.find(x);
		if(maxm < x) {
			maxm = x;
		}
		if(it != values.end()) {
			it->second++;
		} else {
			values.insert(std::make_pair(x, 1));
		}
	}

	unordered_map<int,int>::iterator itx = values.find(maxm);
	return itx->second;
}


int main(){
	vector<int> candles = {3, 2, 1, 3, 3};
	cout << birthdayCakeCandles(candles);
}
