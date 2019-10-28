#include<iostream>

using namespace std;

int main()
{
	int testcase = 0;
	int value = 0;
	int counter = 0;
	int len = 0;
	cin >> testcase;
	while(testcase--)
	{
		cin >> len >> value;
		int lenArr[len];
		
		//Input the values in array
		for(int i=0;i<len;i++)
		{
			cin >> lenArr[i];
		}
		
		//Traverse through each value of array and find the value
		//If the value is found, return the position of the value, else return -1
		for(int i=0;i<(sizeof(lenArr)/sizeof(*lenArr));i++)
		{
			counter++;
			if(lenArr[i] == value)
			{
				break;
			}
			if(counter == (sizeof(lenArr)/sizeof(*lenArr)))
			{
				counter = -1;
			}
		}
		cout << counter << endl;
		counter = 0;
	}
	
}
