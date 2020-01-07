#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 50
#include"bstl.h"
class stack {
public:
	stack();
	~stack();

	void push(node* element);
	node* pop();
	node* Top();
	bool isEmpty();
	node* elements[MAX_STACK_SIZE];
	int top;
};

#endif
