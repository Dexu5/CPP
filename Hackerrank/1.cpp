#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string x)
{
	if(x == string(x.rbegin(), x.rend())) {
		return true;
	} return false;
}
 
vector<string> threePalindromicSubstrings(string word) {
    vector<int> firstP, endP;
    vector<string> finalValue;
    vector<pair<int, int>> midP;
    string last;
    int N = word.size();
    string start;
 
    for (int i = 0; i < word.length() - 2; i++) {
        start.push_back(word[i]);
        if (isPalindrome(start)) {
            firstP.push_back(i);
        }
    }
 
    for (int j = word.length() - 1; j >= 2; j--) {
        last.push_back(word[j]);
        if (isPalindrome(last)) {
            endP.push_back(j);
        }
    }
 
    reverse(endP.begin(), endP.end());
    for (int i = 0; i < firstP.size(); i++) {
        for (int j = 0; j < endP.size(); j++) {
            if (firstP[i] < endP[j]) {
                midP.push_back(
                    { 
						firstP[i], endP[j] 
					}
				);
            }
        }
    }
 
    string res1, res2, res3;
    int flag = 0;
 
    for (int i = 0;
         i < midP.size(); i++) {
 
        int x = midP[i].first;
        int y = midP[i].second;
 
        string middle;
 
        for (int k = x + 1; k < y; k++) {
            middle.push_back(word[k]);
        }
 
        if (isPalindrome(middle)) {
            flag = 1;
            res1 = word.substr(0, x + 1);
            res2 = middle;
            res3 = word.substr(y, N - y);
            break;
        }
    }
 
    if (flag == 1) {
        finalValue.push_back(res1);
        finalValue.push_back(res2);
        finalValue.push_back(res3);
    }
 
    else
        finalValue.push_back("Impossible");

    return finalValue;
}


int main()
{
    string str = "kayasffsk";
    vector<string> value = threePalindromicSubstrings(str);
 	for(string x : value) {
		cout << x << endl;
	}
    return 0;
}
