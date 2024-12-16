#include "DNode.h"

template <typename D>
class NodeListG;

template <typename D>
class Iterator {

private:
    DNode<D>* u;

    friend class NodeListG<D>;

public:
    Iterator(DNode<D>* v) : u(v) {}
    D& operator*();
    bool operator==(const Iterator& p) const;
    bool operator!=(const Iterator& p) const;
    Iterator<D>& operator++();
    Iterator<D>& opeartor--();

};
