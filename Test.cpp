#include<iostream>
using namespace std;
#define LOG(x) std::cout << x << std::endl
	
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	int x = 10;

	int* val = &x;
	LOG(val); //Print the pointer address of the variable
	LOG(*val); // Print the value of the pointer
	
	int& ref = x;
	ref = 100;
	LOG(val); //Print the pointer address of the variable
	LOG(*val); // Print the value of the pointer
	LOG(ref); // Print the reference of the value i.e pointer
}