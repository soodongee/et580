#include "BTreeNode.h"

template <typename T>
class BinTree;

template <typename T>
class Position {
private:
    BTreeNode<T>* u;

    friend class BinTree<T>;

public:
    Position() : u(nullptr) {}
    Position(BTreeNode<T>* v) : u(v) {}

    T operator*() { return u->getElem(); }
    Position left() const { return Position(u->getLeft()); }
    Position right() const { return Position(u->getRight()); }
    Position parent() const { return Position(u->getParent()); }

    bool isRoot() const { return u->getParent() == nullptr; }
    bool isExternal() const { return u->getLeft() == nullptr && u->getRight() == nullptr; }
    bool operator==(const Position& other) const { return u == other.u; }

    BTreeNode<T>* getNode() const { return u; }

};