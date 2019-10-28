#include<bits/stdc++.h>
#define lli long long int

using namespace std;

/*bool findValue(lli arr[])
{
	lli *value = find(std::begin(arr), std::end(arr), 1);
	if(value != end(arr))
		return false;
	else
		return true;
}*/

void countValue(lli arr[], int len)
{
	lli count = 0;
	for(int i=0 ; i<len ; i++)
	{
		if(arr[i] == -1)
		{
			count++;
		}
	}

	cout << count << " " << len << endl;
	if(count ==	len)
		cout << "WIN";
	else
		cout << "LOSE";
}

int toggle(lli value)
{
	if(value == 1)
		return 0;
	else if(value == 0)
		return 1;
	else
		return -1;
}

void workspace(lli arr[], int len)
{
	for(int i=0 ; i<len ; i++)
	{
		//cout << "arr[" << i << "] : " << arr[i] << endl;
		//cout << i << endl;
		if(arr[i] != -1 && arr[i] != 0)
		{
			if(i == 0 && arr[i] == 1 && arr[i+1] != -1) //Check the first value of array
			{
				//cout << "Check the first value of array" << endl;
				arr[i+1] = toggle(arr[i+1]);
				arr[i] = -1;
				workspace(arr, len);
			}
			else if(i == len-1 && arr[i] == 1 && arr[i-1] != -1) // Check the last value of array
			{
				//cout << "Check the last value of array" << endl;
				arr[i-1] = toggle(arr[i-1]);
				arr[len-1] = -1;
				workspace(arr, len);
			}
			else if(arr[i] == 1 && arr[i-1] != -1 && arr[i+1] != -1) //Check any other value of the array.
			{
				//cout << "Check any other value of the array" << endl;
				arr[i-1] = toggle(arr[i-1]);
				arr[i+1] = toggle(arr[i+1]);
				arr[i] = -1;
				workspace(arr, len);
			}
			else
			{
				arr[i] = -1; //This is called when you have empty spaces before and after 1
				workspace(arr, len);
			}
		}
	}
}





int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	lli t;
	cin >> t;
	while(t--)
	{
		string svalue;
		cin >> svalue;
		lli len = svalue.length();
		lli value = stol (svalue);
		lli arr[len];
		//cout << "Len : " << len << endl;
		for(int i=len-1 ; i>=0 ; i--)
		{
			arr[i] = value % 10;
			value /= 10;
		}

		workspace(arr, len);
		countValue(arr, len);
	}
	
}