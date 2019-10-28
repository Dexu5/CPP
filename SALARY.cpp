#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif


	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int min=INT_MAX;
	    long long int sum=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=min)
	        {
	            min=arr[i];
	        }
	        sum+=arr[i];
	        cout << "arr[i] : " << arr[i] << " " << sum << endl;
	    }
	    cout << "Sum : " << sum << " n : " << n << " min : " << min << endl;
	    cout<<sum-n*min<<endl;
	}
	return 0;
}
