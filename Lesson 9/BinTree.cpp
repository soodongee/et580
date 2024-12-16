#include "BinTree.h"
#include <iostream>

// Constructor: Initialize empty binary tree
template <typename T>
BinTree<T>::BinTree() : BTree(nullptr), n(0) {}

// Constructor: Initialize binary tree with a root
template <typename T>
BinTree<T>::BinTree(T e) : BTree(nullptr), n(0) {
    addRoot(e); // Add root with given value
}

// Destructor: Clean up all nodes in tree
template <typename T>
BinTree<T>::~BinTree() {
    if (BTree) {
        deleteSubtree(BTree); // Delete nodes recursively
    }
}

// Recursive function to delete a subtree
template <typename T>
void BinTree<T>::deleteSubtree(BTreeNode<T>* node) {
    if (!node) return;          // Base case: Null node
    deleteSubtree(node->left);  // Recursively delete left subtree
    deleteSubtree(node->right); // Recursively delete right subtree
    delete node;                // Delete current node
}

// Function to get size of tree
template <typename T>
int BinTree<T>::size() const {
    return n; // Return number of nodes
}

// Function to check if tree is empty
template <typename T>
bool BinTree<T>::empty() const {
    return (n == 0); // Tree is empty if number of nodes is zero
}

// Function to return root position
template <typename T>
Position<T> BinTree<T>::root() const {
    return Position<T>(BTree); // Return root as a position object
}

// Function to add a root node to tree
template <typename T>
void BinTree<T>::addRoot(T e) {
    if (BTree == nullptr) { // If there is no root
        BTree = new BTreeNode<T>(nullptr, e, nullptr, nullptr); // Create a new root node
        n = 1; // Update size of tree
    } else {
        std::cout << "Root already exists"; // Root already exists, so do nothing
    }
}

// Function to expand an external node by adding two children
template <typename T>
void BinTree<T>::expandExternal(const Position<T>& p, T eLeft, T eRight) {
    if (!p.isExternal()) { // Ensure position is external
        throw std::runtime_error("Position is not external");
    }
    BTreeNode<T>* node = p.getNode();
    node->left = new BTreeNode<T>(node, eLeft, nullptr, nullptr);  // Add left child
    node->right = new BTreeNode<T>(node, eRight, nullptr, nullptr); // Add right child
    n += 2; // Increment size of tree
}

// Function to remove an external node and its parent, returning sibling
template <typename T>
Position<T> BinTree<T>::removeAboveExternal(const Position<T>& p) {
    BTreeNode<T>* w = p.getNode();
    if (!p.isExternal() || w->parent == nullptr) { // Check if operation is valid
        std::cout << "Invalid removal operation";
    }
    BTreeNode<T>* v = w->parent; // Get parent node
    BTreeNode<T>* sib = (w == v->left ? v->right : v->left); // Get sibling node

    if (v == BTree) { // If parent is root
        BTree = sib; // Make sibling new root
        sib->parent = nullptr;
    } else {
        BTreeNode<T>* gpar = v->parent; // Get grandparent
        if (v == gpar->left)
            gpar->left = sib; // Update left child
        else
            gpar->right = sib; // Update right child
        sib->parent = gpar; // Update parent of sibling
    }

    delete w; // Delete external node
    delete v; // Delete parent node
    n -= 2; // Decrement size of tree
    return Position<T>(sib); // Return sibling position
}

// Pre-order traversal helper function
template <typename T>
void BinTree<T>::preorder(Position<T> p, NodeListG<Position<T>>& pre_order) {
    if (p.getNode() == nullptr) return; // Base case: Null node
    pre_order.push_back(p); // Visit current node
    preorder(p.left(), pre_order); // Traverse left subtree
    preorder(p.right(), pre_order); // Traverse right subtree
}

// Function to return all positions in pre-order
template <typename T>
NodeListG<Position<T>> BinTree<T>::positions() {
    NodeListG<Position<T>> pre_order; // Create a list to hold positions
    preorder(root(), pre_order); // Perform pre-order traversal
    return pre_order; // Return list of positions
}

// Explicit instantiation
template class BinTree<int>;