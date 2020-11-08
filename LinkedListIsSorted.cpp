#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

struct Node *first = NULL;

bool isSort(struct Node *t) {
	int x = INT_MIN;
	while(t) {
		if(x < t->data) {
			x = t->data;
			t = t->next;
		}
		else 
			return false;	
	}
	return true;
}

void create(int A[], int n) {
	struct Node *t,  *last;
	// Set the first value
	first = new struct Node;
	first->data = A[0];
	first->next = NULL;
	last = first;

	// Set the values for other nodes in linked list
	for(int i=1; i<n; i++) {
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

int main() {
	int A[] = {1, 2, 3, 4, -1};
	create(A, 5);
	// display(first);
	cout << isSort(first);
}
