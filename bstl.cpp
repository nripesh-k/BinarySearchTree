#include"bstl.h"
#include"stack.h"
using namespace std;

linkedBST::linkedBST() {
	root = NULL;
}
void linkedBST::preorderTraversal() {
	stack st;
	st.push(root);
	node* a;
	while (!st.isEmpty()) {
		a=st.pop();
		cout << a->info << " ";
		if (a->right != NULL)	st.push(a->right);
		if (a->left != NULL)	st.push(a->left);
	}
}
void linkedBST::add(int data) {
	if (isEmpty()) {
		root = new node();
		root->info = data;
	}
	else {
		node* newnode = root;
		node* pre = NULL;
		bool l = false;
		bool r = false;
		while (newnode != NULL) {
			pre = newnode;
			l = false;
			if (data < newnode->info) {
				newnode = newnode->left;
				l = true;
			}
			else if (data > newnode->info) {
				newnode = newnode->right;
			}
		}
		if (l) {
			node* n = new node;
			n->info = data;
			pre->left = n;
		}
		else {
			node* n = new node;
			n->info = data;
			pre->right = n;
		}
	}
}
bool linkedBST::Search(int data) {
	if (isEmpty()) {
		return false;
	}
	else {
		return true;
	}
}
bool linkedBST::isEmpty() {
	return root == NULL;
}

int main() {
	linkedBST tree;
	tree.add(1);
	tree.add(2);
	tree.add(4);
	tree.add(3);
	if (tree.isEmpty())	cout << "empty";
}
