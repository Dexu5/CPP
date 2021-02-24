#include<bits/stdc++.h>

using namespace std;

// Define the node
struct Node {
	int data;
	struct Node *next;
}*head; // Declaring *head as the global variable.

void create(int A[], int size) {
	struct Node *t, *last;

	// Create the head node and assign it to itself
	head = new struct Node;
	head->data = A[0];
	head->next = head;
	last = head;

	// Handle the rest of the nodes.
	for(int i=1; i<size; i++) {
		t = new struct Node;
		t->data = A[i]; 
		t->next = last->next;
		last->next = t;
		last = t;
	}
}

// Display the linked list
void display(struct Node *p) {
	do {
		cout << p->data << "->";
		p = p->next;
	} while(p != head);
}


int main() {
	int A[] = {1, 2, 3, 4, 5};
	create(A, 5);
	display(head);
}
