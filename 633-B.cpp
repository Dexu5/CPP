#include<bits/stdc++.h>
#define lli long long int

using namespace std;

void solve(int arr[], int n){

	//Convert all the negatives from an array.
	/*for(int i=0 ; i<=n-1 ; i++){
		if(arr[i] < 0)
			arr[i] = abs(arr[i]);
	}*/

	vector<int> arr1;

	//Sort the values from greater to smaller one
	sort(arr, arr+n);
	if(n%2 == 0){
		//Display the values.
		for(int i=0, j=n-1 ; j>=i  ; i++, j--){
			arr1.push_back(arr[j]);
			arr1.push_back(arr[i]);
		}

		reverse(arr1.begin(), arr1.end());
		vector<int>::iterator it;

		/*for(it = arr1.begin() ; it!=arr1.end() ; it++){
			cout << *it << " ";
		}*/

		for(int i=0 ; i<arr1.size() ; i++){
			cout << arr1[i] << " ";
		}

		cout << endl;
	}
	else
	{
		//Display the values.
		for(int i=0, j=n-1 ; j>i  ; i++, j--){
			arr1.push_back(arr[j]);
			arr1.push_back(arr[i]);
		}

		reverse(arr1.begin(), arr1.end());
		vector<int>::iterator it;

		/*for(it = arr1.begin() ; it!=arr1.end() ; it++){
			cout << *it << " ";
		}*/

		cout << arr[n/2] << " ";
		for(int i=0 ; i<arr1.size() ; i++){
			cout << arr1[i] << " ";
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

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t, n;
    cin >> t;
    while(t--){
    	cin >> n;
    	int arr[n];
    	for(int i=0 ; i<n ; i++){
    		cin >> arr[i];
    	}

    	solve(arr, n);
    }
	
}