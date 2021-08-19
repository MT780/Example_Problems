#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>

class TreeNode
{
public:
    TreeNode();
    void insert_node(TreeNode* new_node);
    void print_node() const;

    
private:
    int value;
    TreeNode* left;
    TreeNode* right;
    friend class BinarySearchTree;
};

class BinarySearchTree
{
public:
    BinarySearchTree();
    void insert(int value);
    void erase(int value);
    void print() const;
    int smallest();
private:
    TreeNode* root;
};



#endif