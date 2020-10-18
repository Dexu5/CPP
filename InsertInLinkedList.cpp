#include<iostream>
#define endl '\n'
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

// Creating the first node of type struct which can be used to store the starting 
// position of the node and can be used while passing as the parameter from the main function
struct Node *first = NULL;

void create(int A[], int n) {
	
	struct Node *t, *last;

	// setting the first value of the node which can be accessed globally
	first = new struct Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	// Create new node for all other elements starting from 1
	for(int i=1; i<n ; i++) {
		t = new struct Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void insert(struct Node *p, int pos, int x) {
	// Use pointer to track the new node and p to track the position of iterations
	Node *t;

	// If the position is at the start of the linked list
	if(pos == 0) {
		t = new Node;
		t->data = x;
		t->next = first;
		first = t;

	// If the position is anywhere else in the linked list
	} else if(pos > 0) {

		cout << "Entered" << endl;

		// check if `i` is less than pos-1 and the `p` still exists
		for(int i=0; i<pos-1 ; i++){
			p = p->next;
		}

		// if `p` still exists we can create a new node and add in the exising linked list
		if(p) {
			t = new struct Node;
			t->data = x;
			t->next = p->next;
			p->next = t;
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
	int A[] = {3, 5, 7, 10, 15};
	create(A, 5);
	insert(first, 0, 12);
	display(first);	
}
