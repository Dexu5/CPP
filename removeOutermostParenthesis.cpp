#include<bits/stdc++.h>

using namespace std;

string removeOuterParentheses(string S) {
	string str;
	int count = 0;
	for(char c : S) {
		if(c == '(') {
			if(count++) {
			//	cout << count << '\n';
				str += '(';
			}
			cout << count << '\n';
		}
		else {
			if(--count) {
				// cout << count << '\n';
				str += ')';
			}
			cout << count << '\n';
		}
	}
	return str;
}

int main(){
	cout << removeOuterParentheses("(()())(())(()(()))");
}
