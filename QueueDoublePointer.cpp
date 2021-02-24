#include<bits/stdc++.h>

using namespace std;

// Define the structure of Queue
struct Queue {
	int size;
	int front;
	int rear;
	int *Q; // Dynamic array to assign the value during runtime
};


void create(struct Queue *q, int size) {
	q->size = size;
	q->front = q->rear = -1;
	q->Q = new int[size];
}

void enqueue(struct Queue *q, int val) {
	if(q->rear == q->front == -1) {
		cout << "Queue is empty" << endl;
	} else {
		q->rear++;
		q->Q[q->rear] = val;
	}
}

int dequeue(struct Queue *q) {
	int x = -1;
	if(q->front == q->rear) {
		cout << "Queue is full" << endl; 
	} else {
		q->front++;
		x = q->Q[q->front];	
	}
	return x;
}


void display(struct Queue *q) {
	if(q->rear == q->front == -1){
		cout << "Queue is empty" << endl;
	} else {
		for(int i=q->front+1; i<=q->rear; i++) {
			cout << q->Q[i] << "->";
		}
	}
}

int main() {
	struct Queue q;
	int value;
	cout << "Enter the size: ";
	cin >> value;
	create(&q, value);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
	cout << dequeue(&q) << endl;
	display(&q);
}
