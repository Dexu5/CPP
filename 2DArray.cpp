#include<bits/stdc++.h>

using namespace std;

void display2D(int arr[][6])
{
	for(int i = 0 ; i < 6 ; i++)
	{
		for(int j = 0 ; j < 6 ; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	
	int arr[6][6] = {0};
	int v = 0;
	int r = INT_MIN;

	for(int i = 0 ; i < 6 ; i++)
	{
		for(int j = 0 ; j < 6 ; j++)
		{
			cin >> arr[i][j];
		}
	}


	//Change the values in Matrix
	/* arr[0][0] = {1};
	arr[0][1] = {1};
	arr[0][2] = {1};
	arr[1][1] = {1};
	arr[2][0] = {1};
	arr[2][1] = {1};
	arr[2][2] = {1}; */

	//display2D(arr);

	for(int i = 0 ; i <= 3 ; i++)
	{
		for(int j = 0 ; j <= 3 ; j++)
		{
			v = arr[i][j] + arr[i][j+1] + arr[i][j+2];
			v += arr[i+1][j+1];
			v += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];		
			r = max(r, v);
			//cout << "r : " << r << " v : " << v << endl;
		}
	}

	cout << r;

}