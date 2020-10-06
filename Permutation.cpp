#include<iostream>

using namespace std;

class Solution {
	public:
	void calcPermutation(char s[], int k) {
		static int A[] = {0};
		static char Res[10];
		int i;
		
		if(s[k] == '\0') {
			Res[k] = '\0';
			cout << Res << "\n";
		}
		else {
			for(i=0; s[i]!='\0'; i++) {
				if(A[i] == 0) {
					Res[k] = s[i];
					A[i] = 1;
					calcPermutation(s, k+1);
					A[i] = 0;		
				}
			}
		}
	}
};


int main(){
	char arr[] = "ABCD";
	Solution s;
	s.calcPermutation(arr, 0);
}
