#include<bits/stdc++.h>

using namespace std;

// define the structure of node
struct Node {
	int data;
	struct Node *next; 
}*first=NULL;

// create a linked list
void create(int arr[], int size) {
	struct Node *last, *tmp;
	
	// inserting the first node
	first = new struct Node;
	first->data = arr[0];
	first->next = NULL;
	last = first;

	// inserting the other nodes in linked list
	for(int i=1; i<size; i++) {
		tmp = new struct Node;
		tmp->data = arr[i];
		tmp->next = NULL;
		last->next = tmp;
		last = tmp;
	}
}

void removeDuplicates(struct Node *first) {
	struct Node *tmp = first;
	struct Node *next_next;;

	while(tmp->next != NULL) {
		if(tmp->data == tmp->next->data) {
			next_next = tmp->next->next;
			free(tmp->next);
			tmp->next = next_next;
		} else {
			tmp = tmp->next;
		}
	}

	while(first) {
		cout << first->data << "->";
		first = first->next;
	}
}

// display the linked list
void display(struct Node *tmp) {
	while(tmp) {
		cout<< tmp->data << endl;
		tmp = tmp->next;
	}
}


// define the main function
int main() {
	int arr[] = {11, 11, 11, 13, 13, 20};
	create(arr, 6);
	//display(first);
	removeDuplicates(first);
}
