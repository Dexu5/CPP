#include<<bits/stdc++.h>

using namespace std;

struct Node
{
	// Node structure
	int data;
	Node* next;
};

class LinkedList
{
	private:
		Node *head;
	public:
		LinkedList()
		{
			// Initializing the values
			head = NULL;
		}
		
		void insert(int n)
		{
			// Adding a node to the list
			Node* new_node = new Node;
			new_node->data = n;
			new_node->next = head;
			head = new_node;
		}
		
		void display()
		{
			Node* ptr = new Node;
			ptr = head;
			while(ptr != NULL)
			{
				cout << ptr->data << " ";
				ptr = ptr->next;
			}
		}
};

int main()
{
	LinkedList a;
	a.insert(1);
	a.insert(2);
	a.display();
	a.insert(3);
	a.display();
	return 0;
}
