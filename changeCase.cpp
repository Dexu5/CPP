#include<iostream>

using namespace std;

int main() {
	char s[] = "WElcomE";
	int i;
	for(i=0;s[i]!='\0';i++) {
		if(s[i] >= 65 && s[i] <= 90) {
			// the character is upper case 
			s[i] += 32;
		} else if(s[i] >= 97 && s[i] <= 122) {
			//  the char is lower case
			s[i] -= 32;
		}
		else {}
	}

	cout << s;
}
