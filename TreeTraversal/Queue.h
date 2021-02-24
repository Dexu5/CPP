#include<bits/stdc++.h>

#ifndef Queue_h
#define Queue_h

using namespace std;

struct Node {
	struct Node *lchild;
	int data;
	struct Node *rchild;
};

struct Queue {
	int size;
	int front;
	int rear;
	Node **Q; // this is used to store the nodes as array
};

void create(struct Queue *q, int size) {
	// create the queue
	q->size = size;
	q->front = q->rear = 0;
	q->Q = new Node*[q->size]; // this is used to store the nodes with dynamic array in heap
}

void enqueue(struct Queue *q, Node *x) {
	// add the value to the queue
	if((q->rear+1)%q->size == q->front) {
		cout << "Queue is full" << endl;
	} else {
		q->rear = (q->rear+1)%q->size;
		q->Q[q->rear] = x;
	}
}

Node *dequeue(struct Queue *q) {
	// remove the value from the queue
	Node *x = NULL;

	if(q->front == q->rear) {
		cout << "Queue is empty" << endl;
	} else {
		q->front = (q->front+1)%q->size;
		x = q->Q[q->front];
	}

	return x;
}

int isEmpty(struct Queue q) {
	return q.front == q.rear;	
}


#endif
