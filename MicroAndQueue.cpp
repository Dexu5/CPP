#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int first(lli a[], lli &front)
{
	return a[front]; 
}

void display(lli a[], lli &rear, lli &front, char operation)
{
	// Size of the Queue
	lli count = 0;
	//cout << front << " : " << rear << endl;
	for(int i=front ; i<rear ; i++)
	{
		count++;
	}

	if(operation == 'E')
	{
		cout << count << endl;
	}
	else
	{
		// Display the deleted element
		cout << count << endl;
	}

}

void enqueue(lli a[], lli x, lli size, lli &front, lli &rear)
{
	// Enqueue
	//cout << front << " : " << rear << endl;
	if(rear == size)
	{
		// Overflow
		cout << "Overflow" << endl;
	}
	else
	{
		a[rear] = x;
		rear++;
		display(a, rear, front, 'E');
	}
}

void dequeue(lli a[], lli size, lli &front, lli &rear)
{
	lli prev = 0;
	// Dequeue
	if(front == rear)
	{
		// Underflow
		cout << "-1 0" << endl;
	}
	else
	{
		prev = a[front];
		a[front] = 0;
		front++;
		cout << prev << " ";
		display(a, rear, front, 'D');
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

    lli n, x, size = 100, front = 0, rear = 0;
    cin >> n;
    lli a[size];
    char operations;
    while(n--)
    {
		cin >> operations;
    	if(operations == 'E')
    	{
    		// Enqueue
    		//cout << "Entered" << endl;
    		cin >> x; 
    		enqueue(a, x, size, front, rear);
    	}
    	else
    	{
    		// Dequeue
    		dequeue(a, size, front, rear);
    	}
    }
	
}