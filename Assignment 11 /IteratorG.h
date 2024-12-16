#include "DNodeG.h"

template <typename T>

class IteratorG {
public:
    IteratorG(DNodeG<T>* u = nullptr) : v(u) {}
    T& operator*() {return v->elem;}
    bool operator==(const IteratorG& p) const {return v == p.v;}
    bool operator!=(const IteratorG& p) const {return v != p.v;}
    IteratorG& operator++() {v = v->next; return *this;}
    IteratorG& operator--() {v = v->prev; return *this;}

private:
    DNodeG<T>* v;

    template <typename U> friend class NodeListG;


};
