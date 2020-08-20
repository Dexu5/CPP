/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {

        cin >> arr[i];
    }
    
    for(int i=n-1 ; i>=0 ; i--)
    {
        cout << arr[i] << endl;
    }
}