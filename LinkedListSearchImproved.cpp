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

void search(struct Node *t, int n) {
	struct Node *p = NULL;
	while(t) {
		if(t->data == n){
			p->next = t->next;
			t->next = first;
			first = p;
			break;	
		}
		p = t;
		t = t->next;
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
	search(first, 15);	
	display(first);

}
