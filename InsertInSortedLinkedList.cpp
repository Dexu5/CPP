#include<iostream>
#define endl '\n'
using namespace std;

// Node structure
struct Node {
	int data;
	struct Node *next;
};

// First element of the node
// which can be accessed globally
struct Node *first;

// Create the linked list
void create(int A[], int n) {
	struct Node *t, *last;

	// Setting the value of the first node
	// which cam be accessed globally
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;

	// Setting the value of the entire linked list
	for(int i=1; i<n ; i++) {
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

// Insert the node in sorted Linked List
void insert(int x) {
	struct Node *t;
	struct Node *p = first;
	struct Node *q = NULL;
	while(p) {

		// If the value of the node is maximum in the entire linked list
		if(p->next == NULL) {
			t = new Node;
			t->data = x;
			t->next = p->next;
			p->next = t;
			break;
		}
		// If `p` is greater than the supplied value
		// which means that all the previous values of the list are smaller 
		// and we can insert the newer value after traversing `q`
		else if(p->data > x) {
			t = new Node;
			t->data = x;
			t->next = q->next;
			q->next = t;
		}
		q = p;
		p = p->next;
	}
}

void display(struct Node *t) {
	while(t) {
		cout << t->data << "->";
		t = t->next;
	}
}

int main() {
	int A[] = {1, 2, 3, 4, 6};
	create(A, 5);
	insert(0);
	display(first);
}
