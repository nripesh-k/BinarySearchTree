#include "stack.h"
#include<iostream>
using namespace std;

stack::stack() {
	top = -1;
}

stack::~stack() {}

void stack::push(node* element) {
	if (top >= MAX_STACK_SIZE - 1) {
		cout << "cannot push" << element << ". Stack overflow." << endl;
	}
	else {
		top++;
		this->elements[top] = element;
	}
}

node* stack::pop() {
	if (isEmpty()) { 
		cout << "stack underflow";
		return NULL;
	}
	else {
		return elements[top--];
	}
}

node* stack::Top() {
	if (isEmpty())	cout << "stack underflow" << endl;
	else return elements[top];
}

bool stack::isEmpty() {
	if (top < 0)	return true;
	else 		return false;
}

