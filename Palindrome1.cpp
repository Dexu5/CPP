#include<iostream>

using namespace std;

class Solution {
	public:
	void palindrome(char arr[]) {
		int i, j, flag = 0;
		for(j=0; arr[j]!='\0'; j++) {
		}
		j = j - 1;
		for(i=0; i<j; i++, j--) {
			if (arr[i] != arr[j]) {
				flag = 1;
				break;
			}
		}

		if(flag == 1)
			cout << "Not a palindrome\n";
		else
			cout << "Palindrome\n";
	}
};

int main() {
	char arr[] = "nitin";
	Solution s;
	s.palindrome(arr);
}
