// Design Linked List: Leetcode

#include<iostream>

using namespace std;

// structure of the node

struct Node{
	int val;
	Node* next;
};

class LinkedList{
	
	private:
		Node *head;
		
	public:
		
		// defaulting the value of head
		LinkedList(){
			head == NULL;
		}

		// add the values in front of the list
		void addAtHead(int val){
			Node* tmp = new Node;
			tmp->val = val;
			tmp->next = head;
			head = tmp;
		}

		// insert the values after the list
		void addAtTail(int val){
			Node* tmp = new Node;
			Node* last = head;
			tmp->val = val;
			tmp->next = NULL;

			while(last->next != NULL){
				last = last->next;
			}

			last->next = tmp;
		}

		// display the list
		void display(){
			Node* tmp = new Node;
			tmp = head;
			while(tmp != NULL){
				cout << tmp->val << "->";
				tmp = tmp->next;
			}
		}
};

int main()
{
	LinkedList node;
	//node.addAtHead(1);
	//node.addAtHead(2);
	//node.display();
	node.addAtTail(3);
	node.addAtTail(4);
	node.display();
	return 0;
}
