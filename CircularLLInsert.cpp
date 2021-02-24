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

// Insert the node
void insert(int value, int pos) {
	struct Node *t, *p;

	t = new struct Node;
	t->data = value;
	// Insert if the list does not exist and at first place
	if(pos == 0) {
		// Check if the head doesn't exist
		if(!head) {
			head = t;
			t->next = head;
		}
		// Check if the head exist
		else {
			p = head;
			while(p->next != head) {
				p = p->next;
			}
			p->next = t;
			t->next = head;
			head = t;
		}
	} 
	// Insert at any other position of the linked list
	else {
		p = head;
		for(int i=0; i<pos-1; i++){
			p = p->next;
		}
		t->next = p->next;
		p->next = t;		
	}
}

int main() {
	int A[] = {1, 2, 3, 4, 5};
	create(A, 5);
	insert(0 , 2);
	display(head);
}
