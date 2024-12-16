
template <typename T>
class Position;

template <typename T>
class BinTree;


template <typename T>

class BTreeNode {
private:
    BTreeNode(BTreeNode* p = nullptr, T elem = T(), BTreeNode* l = nullptr, BTreeNode* r = nullptr)
        : e(elem), parent(p), left(l), right(r) {}

    T e;
    BTreeNode* parent;
    BTreeNode* left;
    BTreeNode* right;

public:


    T getElem() const { return e; }
    void setElem(T elem) { e = elem; }

    BTreeNode* getParent() const { return parent; }
    void setParent(BTreeNode* p) { parent = p; }

    BTreeNode* getLeft() const { return left; }
    void setLeft(BTreeNode* l) { left = l; }

    BTreeNode* getRight() const { return right; }
    void setRight(BTreeNode* r) { right = r; }



    friend class Position<T>;
    friend class BinTree<T>;
};
