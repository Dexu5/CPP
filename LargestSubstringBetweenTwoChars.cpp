#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
		int max = INT_MIN;
		if(s.length() <= 1) {
			return -1;
		}

    	for(int i=0 ; i<s.length()-1 ; i++) {
			for(int j=i+1 ; j<s.length() ; j++) {
				if(s[i] == s[j]) {
					if(max < j - 1 - i) {
						max = j - 1 - i;
					}
				}
			}
		}
		
		if(max == INT_MIN)
			return -1;
		return max;
			
    }
};

int main() {
	Solution s;
	cout << s.maxLengthBetweenEqualCharacters("mgntdygtxrvxjnwksqhxuxtrv");
}
