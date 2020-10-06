#include<iostream>

using namespace std;

class Solution {
	public:
	void checkAnagram(char A[], char B[]) {
		int H[26] = {0}; // define the hashtable to check the counter of the char
		int i, flag;
		// find the values from char array A and mark in the hashtable
		for(i=0; A[i]!='\0'; i++) {
			H[A[i]-97] += 1;
		}

		// find the values and decrement the values from the hash table
		for(i=0; B[i]!='\0'; i++) {
			H[B[i]-97] -= 1;
		}

		// check if the strings are anagram
		for(i=0; i<26; i++) {
			cout << H[i];
			if(H[i]) {
				flag = 1;
			}
		}

		if(flag == 1)
			cout << "Not an anagram\n";
		else
			cout << "Is anagram\n";
	}
};

int main() {
	char A[] = "deciiimal";
	char B[] = "medical";
	Solution s;
	s.checkAnagram(A, B);
}
