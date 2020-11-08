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
struct Node *second = NULL;

void createA(int A[], int n) {
	
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

void createB(int B[], int n) {
	
	struct Node *t, *last;

	// setting the first value of the node.
	second = new struct Node;
	second->data = B[0];
	second->next = NULL;
	last = second;
	
	// Create new node for all other elements starting from 1
	for(int i=1; i<n ; i++) {
		t = new struct Node;
		t->data = B[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void mergeList(struct Node *first, struct Node *second) {
	struct Node *third = NULL, *last = NULL;
	if(first->data < second->data) {
		third = last = first;
		first = first->next;
		last->next = NULL;
	} else {
		third = last = second;
		second = second->next;
		last->next = NULL;
	}

	while(first != NULL && second != NULL) {
		if(second->data < first->data) {
			last->next = second;
			last = second;
			second = second->next;
			last->next = NULL;
		} else {
			last->next = first;
			last = first;
			first = first->next;
			last->next = NULL;	
		}
	}
	
	if(first) {
		last->next = first;
	} else {
		last->next = second;
	}

	display(third);
}

int main() {
	int A[] = {1, 3, 5, 7, 9};
	int B[] = {2, 4, 6, 8, 10};
	createA(A, 5);
	createB(B, 5);
	mergeList(first, second);
}
