#include<iostream>

using namespace std;

// The stucture of an Arrat
struct Array
{
    int A[20];
    int size;
    int length;
};

// Display the values of an Array
void Display(struct Array arr)
{
    for(int i=0 ; i<arr.length;i++)
    {
        cout << arr.A[i] << " ";
    }
}

// Add or Append the values in an Array
// We are using the array as call by reference as we are changing the values
// of an array and won't return any value
void Append(struct Array *arr, int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

// This method is use to insert the value at a specified index 
void Insert(struct Array *arr, int index, int x)
{

    // Create a space to insert an element.
    // The for loop will push the elements/ 
    if(index >= 0 && index <= arr->length)
    {
        for(int i=arr->length ; i>index ; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

    //This will initialize the struct Array
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    //Append(&arr, 10);
    Insert(&arr, 0, 20);
    Display(arr);
}