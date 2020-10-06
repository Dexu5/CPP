#include <string>
#include <iostream>

using namespace std;

std::string fakeBin(std::string str){
  //your code here
  std::string ans;
  for(char c : str) {
    //c < 5 ? ans.push_back('0') : ans.push_back('1');
	cout << (int)(c) << "\n";
    if(c - '0' < 5) {
      ans.push_back('0');
    } else {
      ans.push_back('1');
    }
  }
  return ans;
}

int main() {
	cout << fakeBin("843943834");
}
