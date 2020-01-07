#include "binarysearchtree.h"

#define MAXSIZE 16

class ArrayBST: public BinarySearchTree{
	
	public:
		ArrayBST();
		~ArrayBST();
		void preorderTraversal(int index);
		void add(int data);
		bool search(int data);
		int element[MAXSIZE];
		int get_left_child(int index);
		int get_right_child(int index);
};


