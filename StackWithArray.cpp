#include<bits/stdc++.h>

using namespace std;

struct Stack{
	int size;
	int top;
	int *s;
};

// Check if the stack is empty
bool isEmpty(struct Stack st) {
	if(st.top == -1) {
		return 1;
	} else {
		return 0;
	}
}

// Check if the stack is full
bool isFull(struct Stack st) {
	if(st.top == st.size-1) {
		return 1;
	} else {
		return 0;
	}
}
// Create the stack
void create(struct Stack *st) {
	cout << "Enter size : " << endl;
	cin >> st->size;
	st->top = -1;
	st->s = new int[st->size];
}

// Display the stack
void display(struct Stack st) {
	for(int i=st.top; i>=0; i--) {
		cout << st.s[i] << endl;
	}
}

// Push the elements to stack
void push(struct Stack *st, int val) {
	if(st->top == st->size-1) {
		// If the stack if full
		// This condition will be replaced with isFull()
		cout << "Stack overflow" << endl;
	} else {
		st->top++;
		st->s[st->top] = val;
	}
}

// Pop the elements form the stack
int pop(struct Stack *st) {
	int x = -1;
	if(st->top == -1){
		cout << "Stack Underflow";
	} else {
		x = st->s[st->top--];
	}
	return x;
}

// Pass the value at the specified index
int peek(struct Stack st, int index) {
	int x = -1;
	if(st.top - index + 1 < 0) {
		cout << "Invalid index" << endl;
	}
	
	x = st.s[st.top - index + 1];
	return x;

}

int main() {
	struct Stack st;
	create(&st);	
	push(&st, 5);
	push(&st, 6);
	push(&st, 7);
	push(&st, 8);
	push(&st, 9);
	display(st);
	pop(&st);
	// pop(&st);
	// display(st);
	cout << peek(st, 1);
}
