
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

	// setting the first value of the node.
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

void display(struct Node *t) {
	while(t) {
		cout << t->data << "->";
		t = t->next;
	}
}

int isLoop(struct Node *first) {
	struct Node *p = first, *q = first;

	// We are using the do while loop so we can execute the loop for the first time atleast
	// As `p` and `q` will be pointing to the same node when we start and going forward
	// we need to exit the loop when they again point to the same node.
	do {
		p = p->next;
		q = q->next;
		q = (q!=NULL) ? (q->next) : NULL;
	} while(p && q && p != q);

	// Check if `p` and `q` is the same node.
	if(p == q)
		return 1;
	else
		return 0;
}

int main() {
	int A[] = {3, 5, 7, 10, 15};
	create(A, 5);
	
	struct Node *t1, *t2;
    t1 = first->next->next;
	t2 = first->next->next->next->next;
	t2->next = t1;
	cout << isLoop(first);
}
