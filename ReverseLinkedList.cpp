#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *first = NULL;

void create(int arr[], int n) {
	struct Node *t, *last;
	// Add the first value of the array

	first = new struct Node;
	first->data = arr[0];
	first->next = NULL;
	last = first;

	// Add all other values in the linked list
	for(int i=1; i<n; i++) {
		t = new struct Node;
		t->data = arr[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void reverse(struct Node *p) {
	struct Node *q = NULL, *r = NULL;
	while(p) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

void display(struct Node *p) {
	while(p) { 
		cout << p->data << "->";
		p = p->next;
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	create(arr, 5);
	reverse(first);
	display(first);
}
