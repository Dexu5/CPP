#include<bits/stdc++.h>

using namespace std;

// Define the struct `Stack` 
// which we can initialize while working 
// with the stack problems
struct Stack {
	int size; // size of the stack
	int top; // the first value of the stack, it is empty which is -1 initially
	int *s; // pointer to the stack which can access the first value of the stack s -> [1,2,3, .. ]
};

// initialize the stack with the defaults
void create(struct Stack *st) {
	cout << "Eneter the size";
	cin >> st->size;
	st->top = -1;
	st->s = new int[st->size]; // create the array in heap
}

// push the value in the stack
void push(struct Stack *st, int x) {
	if(st->top == st->size-1) {
		// If we have a stack overflow
		cout << "Stack overflow";
	} else {
		st->top++; // increment the top to add the value on top of the stack
		st->s[st->top] = x;  // add the value on top of the stack
	}
}

// pop the value from the stack
int pop(struct Stack *st) {
	int x = -1;
	if(st->top == -1) {
		// stack underflow
		cout << "Stack underflow" << endl;
		return x;
	} else 
		int x = st->s[st->top--];
	return x;
}

// display the stack 
void display(struct Stack st) {
	for(int i=st.top; i>=0; i--)
		cout << st.s[i] << " ";
}

// return the value of the specified index
// We are using call by value as we don't need to work on the same stack.
int peek(struct Stack st, int index) {
	if(st.top - index < 0) {
		// invalid index
		return -1;
	}
	return st.s[index];
}



int main() {
	struct Stack st;
	create(&st);
	push(&st, 1);
	push(&st, 2);
	push(&st, 3);
	push(&st, 4);
	push(&st, 5);
	pop(&st);
	// cout << peek(st, 3);
	display(st);
}
