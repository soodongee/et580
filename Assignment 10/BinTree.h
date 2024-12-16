
#include "BTree.h"
#include "Position.h"
#include "NodeListG.h"

template <typename T>
class BinTree : public BTree<NodeListG<Position<T>>, Position<T>> {
    
private:
    BTreeNode<T>* BTree; 
    int n;              

protected:
    void preorder(Position<T> p, NodeListG<Position<T>>& pre_order);
    void deleteSubtree(BTreeNode<T>* node); 

public:
    BinTree();
    BinTree(T e);
    virtual ~BinTree();

    int size() const;
    bool empty() const;
    Position<T> root() const;
    NodeListG<Position<T>> positions();

    void addRoot(T e);
    void expandExternal(const Position<T>& p, T eLeft, T eRight);
    Position<T> removeAboveExternal(const Position<T>& p);
};
