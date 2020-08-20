/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<iostream>

using namespace std;


int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    
    int rows, cols;
    cin >> rows >> cols;
    int a[rows][cols];
    
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<cols ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int j=0 ; j<cols ; j++)
    {
        for(int i = 0; i<rows ; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}