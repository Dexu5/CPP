#include<iostream>

using namespace std;

int main()
{
	int testcase = 0;
	cin >> testcase;
	while(testcase--)
	{
		int foo[testcase];
		int temp = 0;
		int size = sizeof(foo)/sizeof(*foo);
		cout<<size<<endl;
		for(int i=0;i<size;i++)
		{
			cin >> foo[i];
		}
		
		//Sort the values in ascending order
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size-i;j++)
			{
				if(foo[j] > foo[j+1])
				{
					temp = foo[j];
					foo[j] = foo[j+1];
					foo[j+1] = temp;
				}
			}
		}
		
		//Print the values
		for(int i=1;i<size;i++)
		{
			cout << foo[i] << endl;
		}
	}
}
