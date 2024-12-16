#include <iostream>
#include "BinTree.h"

int main() {
    BinTree<int> tree; 
    tree.addRoot(10);  
    auto root = tree.root();

    tree.expandExternal(root, 20, 30); // parents 20,30

    auto leftParent = root.left();  // Left parent 20
    auto rightParent = root.right(); // Right parent 30

    tree.expandExternal(leftParent, 40, 50);   // Childrens of left parent 40, 50
    tree.expandExternal(rightParent, 60, 70); // Childrens of right parent 60, 70

    auto leftChild1 = leftParent.left();   // Left child of left parent 40
    auto rightChild1 = leftParent.right(); // Right child of left parent 50

    auto leftChild2 = rightParent.left();  // Left child of right parent 60
    auto rightChild2 = rightParent.right(); // Right ch ild of right parent 70

   
    std::cout << "Root: " << *root << "\n";

    std::cout << "Left Parent: " << *leftParent << "\n";
    std::cout << "Right Parent: " << *rightParent << "\n";

    std::cout << "Children of Left Parent: " << *leftChild1 << ", " << *rightChild1 << "\n";
    std::cout << "Children of Right Parent: " << *leftChild2 << ", " << *rightChild2 << "\n";

    return 0;
}
