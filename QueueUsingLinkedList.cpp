#include<bits/stdc++.h>

using namespace std;

// create structure of node
struct Node {
	public:
		int data;
		struct Node *next;
}*front=NULL, *rear=NULL;

// enqueue
void enqueue(int x){
	struct Node *t = new Node();
	if(t==NULL) {
		cout << "Queue is full" << "\n";
	} else {
		t->data = x;
		t->next = NULL;

		// If the queue is empty
		if(front == NULL) {
			front = rear = t;
		} else {
			rear->next = t;
			rear = t;
		}
	}	
}


// dequeue
int dequeue() {
	Node *t = front;
	int val = -1;
	if(front == rear) {
		cout << "Queue is empty" << "\n";
	} else {
		val = front->data;
		t = front;
		front = front->next;
		free(t);
	}

	return val;
}

// display the queue
void display() {
	Node *t = front;
	while(t) {
		cout << t->data << "->";
		t = t->next;
	}
}


int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	display();
}
