//INput : 5
// Output : 1,1,2,3,5

#include<iostream>

using namespace std;

int findFibonacci(int num)
{
	if(num == 1 || num == 2)
	{
		return 1;
	}
	else
	{
		return findFibonacci(num-1) + findFibonacci(num-2);
	}
	return num;
}

int main()
{
	int num;
	cin >> num;
	cout << findFibonacci(num);
}
