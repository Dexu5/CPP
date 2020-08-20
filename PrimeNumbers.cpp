#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		int a = 1;
		int b = 50;
		// cin >> a >> b;
		int arr[b-a];
		std::fill_n(arr, (b-a), 1);

		arr[0] = 0;
		for(int i=2;i<(b-a);i++)
		{
			//cout << i << endl;
			if(arr[i] != 0)
			{
				for(int j=2;i*j<(b-a);j++)
				{
					//cout << i << " " << j << endl;
					arr[i*j] = 0;
				}
			}
		}

		for(int i=1;i<(b-a);i++)
		{
			cout << i << " " << arr[i] << endl;
		}
	}
	return 0;
}