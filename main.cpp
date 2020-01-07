#include"bstl.h"
#include <iostream>

int main() {
	linkedBST tree;
	tree.add(10);
	tree.add(14);
	tree.add(5);
	tree.add(6);
	tree.add(1);
	tree.add(12);
	tree.add(15);
	tree.preorderTraversal();
}