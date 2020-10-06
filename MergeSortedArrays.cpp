// merging 2 sorted array and create a sorted array

#include<iostream>
#define SIZE(A) sizeof(A)/sizeof(A[0])

using namespace std;

int main() {
	int arr1[5] = {1, 3, 5, 7, 9};
	int arr2[5] = {2, 4, 6, 8,10};

	int arr[10];
	int i, j, k;
	i = j = k = 0;
	
	cout << "arr1 : " << SIZE(arr1) << " arr2 : " << SIZE(arr2) << '\n';
	while(i < SIZE(arr1) && j < SIZE(arr2)) {
		// cout << "arr1 : " << arr1[i] << " arr2 : " << arr[j] << '\n';
		// cout << "Entered";
		if(arr1[i] < arr2[j])
			arr[k++] = arr1[i++];
		else
			arr[k++] = arr2[j++];
	}

	for(;i<SIZE(arr1);i++)
		arr[k++] = arr1[i];

	for(;j<SIZE(arr2);j++)
		arr[k++] = arr2[j];
	
	for(int x : arr)
		cout << x << " => ";
}
