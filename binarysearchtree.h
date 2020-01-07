#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include<iostream>
class BinarySearchTree{
public:
    virtual void preorderTraversal()=0;
    virtual void add(int data)=0;
    virtual bool Search(int data)=0;
};

#endif // BINARYSEARCHTREE_H_INCLUDED
