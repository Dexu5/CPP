#include<iostream>

using namespace std;

class Solution {
	public:
		void findDuplicate(char arr[]) {
			int H[26] = {0};
			for(int i=0; i<arr[i]!='\0'; i++) {
				H[arr[i]-97] += 1;
			}
			for(int i=0; i<26; i++) {
				if(H[i] > 1) {
					cout << (char)(i + 97) << " " << H[i] << '\n';
				}
			}
		}
};

int main() {
	Solution s;
	char arr[] = "finding";
	s.findDuplicate(arr);
}
