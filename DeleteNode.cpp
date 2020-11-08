
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

void deleteNode(int pos) {
	struct Node *p, *q;
	int x = 0;
	// Delete the first node
	if(pos == 1) {
		p = first;
		x = p->data;
		cout << "Deleted : " << x << endl;
		first = first->next;
		delete p;
	} else {
		p = first;
		q = NULL;

		for(int i=0; i<pos-1 && p; i++) {
			q = p;
			p = p->next;
		}

		// Check if `p` has value
		if(p) {
			q->next = p->next;
			x = p->data;
			cout << "Deleted : " << x << endl;
			delete p;
		}
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
	deleteNode(5);
	display(first);
}
