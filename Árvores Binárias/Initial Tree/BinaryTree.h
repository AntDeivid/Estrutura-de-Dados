#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"

class BinaryTree {
private:
    Node* root; // Pointer to the root of the tree.

public:
    BinaryTree(); // Constructs an empty binary tree.
    BinaryTree(int, BinaryTree&, BinaryTree&); // Constructs a binary tree with the given data at the root and the two given subtrees.
    bool is_empty() const; // Indicate that this is the empty tree.
    bool is_leaf() const; // Indicate that this tree is a leaf.
    bool contains(int) const; // Indicate if the tree contains the given value
    void print_keys() const; // print the keys saved on the tree
    void clear(); // Leaves the tree empty
    ~BinaryTree(); // Destructor
};

#endif