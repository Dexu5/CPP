#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>

#include "Queue.h"

using namespace std;

struct Node *root = NULL;

void TreeCreate() {
	struct Node *p; // use to track the current node
	struct Node *t; // use to create a new node
	int x; // store the root value
	struct Queue q;
	create(&q, 100); // call the create function which is under `Queue.h`
	
	cout << "Enter root value: "<< endl;
	cin >> x;

	root = new struct Node;
	root->data = x;
	root->lchild = root->rchild = NULL;

	enqueue(&q, root); // enqueue the root node in queue.
	
	while(!isEmpty(q)) {

		// Fetch the node from the queue
		p = dequeue(&q);

		// Check if node has left child from the user
		cout << "Enter left child of " << p->data << ": ";
		cin >> x;

		// check if the position exists.
		if(x != -1) {
			t = new struct Node;
			t->data = x;
			t->lchild = t->rchild = NULL;

			// set the newly created node as lchild of p
			p->lchild = t;

			// enqueue the lchild for future traversals
			enqueue(&q, t);
		}

		// Check if the node has right child from the user
		cout << "Enter right child of " << p->data <<": ";
		cin >> x;
		if(x != -1) {
			t = new struct Node;
			t->data = x;
			t->lchild = t->rchild = NULL;
			p->rchild = t;
			enqueue(&q, t);
		}
	}
}

void preorder(struct Node *p) {
	if(p) {
		cout << p->data << "->";
		preorder(p->lchild); 
		preorder(p->rchild);
	}
}

void inorder(struct Node *p) {
	if(p) {
		inorder(p->lchild);
		cout << p->data << "->";
		inorder(p->rchild);
	}
}

void postorder(struct Node *p) {
	if(p) {
		postorder(p->lchild);
		postorder(p->rchild);
		cout << p->data << "->";
	}
}

int main() {
	TreeCreate();
	preorder(root);
}

