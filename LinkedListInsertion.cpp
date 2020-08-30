#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
	//Create the structure of Node
	public:
		int data;
		Node *next;

};

void push(Node** head_ref, int new_data)
{
		// Insert the data in front of the linked list.
		Node* new_node = new Node();
		new_node->data = new_data;
		new_node->next = (*head_ref);
		(*head_ref) = new_node;
}

void display(Node* head)
{
	int counter = 0;
	int counter1 = 0;
	Node* head1 = head;
	// Display the values of linked list
	while(head != NULL)
	{
		//cout << node->data << " -> ";
		counter++;
		head = head->next;
	}

	while(head1 != NULL)
	{
		if((counter/2) <= counter1)
		{
			cout << head1->data << " -> ";
		}
		counter1++;
		head1 = head1->next;		
	}
}

int main()
{
	Node* head = NULL;

	//push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	display(head);
}