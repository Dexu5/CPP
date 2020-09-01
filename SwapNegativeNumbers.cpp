// Place the negative values on the left side and positive ones on the right

#include<iostream>

#define size(A) sizeof(A)/sizeof(A[0])

using namespace std;

void swap(int& x, int &y){
	int t = x;
	x = y;
	y = t;
}

int main() {
	int arr[] = {-1, 1, -2, 2, -3, 4};

	int i=0;
	int j=size(arr)-1;

	while(i<j){
		while(arr[i] < 0) 
			i++;
		while(arr[j] >= 0) 
			j--;
		
		if(i<j) {
			swap(arr[i], arr[j]);
		}
	}

	for(int x : arr){
		cout << x << "\n";
	}
}
