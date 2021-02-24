#include<bits/stdc++.h>

using namespace std;

// structure of the queue
struct Queue {
	int size;
	int front;
	int rear;
	int *Q;
};

// create the queue
void create(struct Queue *q, int size) {
	q->size = size;
	q->front = q->rear = -1;
	q->Q = new int[size];
}


// enqueue the data in queue
void enqueue(struct Queue *q, int value) {
	// check if the rear is at last position
	if((q->rear+1)%q->size == q->size) {
		cout << "Queue is full";
	}
	else {
		q->rear = ((q->rear+1) % q->size);
		q->Q[q->rear] = value;
	}
}

// dequeue the data from queue
int dequeue(struct Queue *q) {
	// check if the front is equal to rear
	int val = -1;
	if(q->front == q->rear) {
		cout << "Queue is empty";
		return val;
	}
	q->front = (q->front+1)%q->size;
	val = q->Q[q->front];
	return val;	
}

// display the queue
void display(struct Queue q) {
	int i = q.front+1;
	do{
		cout << q.Q[i] << "->";
		i = (i+1)%q.size;
	} while(i != (q.rear+1)%q.size);
}

int main() {
	struct Queue q;
	int size = 0;
	cout << "Enter the size of queue: ";
	cin >> size;
	create(&q, size);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
	enqueue(&q, 6);
	//dequeue(&q);
	display(q);
}
