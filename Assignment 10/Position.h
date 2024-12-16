#include "BTreeNode.h"

template <typename T>
class BinTree; 

template <typename T>
class Position {
    
private:
    BTreeNode<T>* u; // U variable stores pointer to BinTreeNode
    
    friend class BinTree<T>; 

public:
    Position() : u(nullptr) {}. // Default constructor that initializes the position to nullptr, representing an invalid or empty position.
    Position(BTreeNode<T>* v) : u(v) {}  //Parameterized constructor that initializes the position to a given BTreeNode pointer v. This associates the position with a specific node in the tree.

    T operator*() { return u->getElem(); }
    Position left() const { return Position(u->getLeft()); }
    Position right() const { return Position(u->getRight()); }
    Position parent() const { return Position(u->getParent()); }

    bool isRoot() const { return u->getParent() == nullptr; }
    bool isExternal() const { return u->getLeft() == nullptr && u->getRight() == nullptr; }
    bool operator==(const Position& other) const { return u == other.u; }

    BTreeNode<T>* getNode() const { return u; }


};

