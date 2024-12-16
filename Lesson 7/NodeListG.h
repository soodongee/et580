#include "Iterator.h"

template <typename D>
class NodeListG {
private:
    int n; 
    DNode<D>* head;
    DNode<D>* trailer; 

public:
    NodeListG();
    ~NodeListG();
    int size() const;
    bool empty() const;

    Iterator<D> begin() const;
    Iterator<D> end() const;
    void insertFront(const D& e);
    void insertBack(const D& e);
    void insert(const Iterator<D>& p, const D& e);
    void eraseFront();
    void eraseBack();
    void erase(const Iterator<D>& p);
    
};
