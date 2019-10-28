// This problem shows an implementation of simple queue.

#include<bits/stdc++.h>
#define lli long long int

using namespace std;

void enqueue(char a[], int size, char val, int &rear)
{
	// Check if the queue is overflow
	if(rear == size)
	{
		cout << "Overflow";
	}
	else // Insert element in the rear
	{
		cout << "Entered" << endl;
		a[rear] = val;
		rear++;
		cout << rear << endl;
	}
}

void dequeue(char a[], int size, char val, int &rear, int &front)
{
	// Check if there are no elements in the array
	if(front == rear)
	{
		cout << "Underflow";
	}
	else
	{
		a[front] = 0;
		front++;
	}
	
}

void display()
{

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

	int N = 3, size = 100, front = 0, rear = 4;
    char a[size] = {'a', 'b', 'c', 'd'};
	

    for(int i=0 ; i<N ; i++)
    {
    	// Perform Enqueue
    	enqueue(a, size, a[i], rear);

    	// Perform Dequeue
    	dequeue(a, size, a[i], rear, front);
    	
	}

    for(int i=front ; i<rear ; i++)
    {
    	cout << a[i] << " ";
    }
}