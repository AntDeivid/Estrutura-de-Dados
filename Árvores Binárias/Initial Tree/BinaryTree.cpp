#include <iostream>
#include "Node.h"
#include "BinaryTree.h"
using namespace std;

/**
 * @brief Construct a new empty Binary Tree object
 */
BinaryTree::BinaryTree() { root = nullptr; }

/**
 * @brief Construct a new Binary Tree with two subtrees.
 * The subtrees become empty after this operation
 * 
 * @param value The data at the root
 * @param lchild The left subtree
 * @param rchild The right subtree
 */
BinaryTree::BinaryTree(int value, BinaryTree& lchild, BinaryTree& rchild) {
    root = new Node(value, lchild.root, rchild.root);
    lchild = nullptr;
    rchild = nullptr;
}

/**
 * @brief Indicate that this is the empty tree.
 * 
 * @return true if tree is empty
 * @return false if tree is not empty
 */
bool BinaryTree::is_empty() const { return root = nullptr; }

/**
 * @brief Indicate that this tree is a leaf.
 * 
 * @return true if tree is a leaf
 * @return false if tree is not a leaf
 */
bool BinaryTree::is_leaf() const {
    return root != nullptr && root->left == nullptr && root->right == nullptr;
}

/**
 * @brief função recursiva que recebe uma raiz de arvore e retorna true se ela contem o valor
 * e false caso contrario.
 * @param node 
 * @return true 
 * @return false 
 */
bool contains_recursive(Node *node, int value) { //O(n)
    if (root == nullptr) { return false; } //Caso de parada 1
    else if (node->key == value) { return true; } // Caso de parada 2
    else {
        return contains_recursive(node->left, value) || contains_recursive(node->right, value);
    }
}

/**
 * @brief Indicate if the tree contains the given value
 * 
 * @return true if the tree contains the given value
 * @return false if the tree does not contains the given value
 */
bool BinaryTree::contains(int value) const {
    return contains_recursive(root, value);
}

/**
 * @brief Função recursiva que imprime todas as chaves da arvore
 * enraizada no ponteiro node
 * 
 * @param node 
 */
void print_keys_recursive(Node *node) {
    if (node == nullptr) { return; } // Caso de parada
    else { cout << node->key << " "; }
}

/**
 * @brief Print the keys saved on the tree
 */
void BinaryTree::print_keys() const {
    print_keys_recursive(root);
}

/**
 * @brief Se vc passar a raiz de uma arvore para essa função,
 * ela vai deletar todos os nós da arvore dada e retornar um
 * ponteiro para nullptr (árvore vazia)
 * 
 * @param node 
 */
Node *clear_recursive(Node *node) {
    /*if (node == nullptr) { return nullptr; }
    else {
        node->left = clear_recursive(node->left);
        node->right = clear_recursive(node->right);
        delete node;
        return nullptr;
    }*/

    if (node != nullptr) {
        node->left = clear_recursive(node->left);
        node->right = clear_recursive(node->right);
        delete node;
    }
    return nullptr;
}

/**
 * @brief empties the tree
 */
void BinaryTree::clear() {
    root = clear_recursive(root);
}

BinaryTree::~BinaryTree() {
    clear();
}