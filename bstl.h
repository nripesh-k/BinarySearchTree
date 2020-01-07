#ifndef BSTL_H
#define BSTL_H

#include"binarysearchtree.h"
class node {
public:
	int info;
	node* right;
	node* left;
};
class linkedBST :public BinarySearchTree {
public:
	node* root;
	linkedBST();
	void preorderTraversal();
	void add(int data);
	bool Search(int data);
	bool isEmpty();
};

#endif