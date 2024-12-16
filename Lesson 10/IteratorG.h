#ifndef ITERATORG_H_
#define ITERATORG_H_

#include "DNodeG.h"

template <typename K, typename V>
class IteratorG {
public:
    IteratorG(DNodeG<K, V>* u = nullptr) : v(u) {}

    const V& operator*() const { return v->elem.value(); }
    bool operator==(const IteratorG<K, V>& p) const { return v == p.v; }
    bool operator!=(const IteratorG<K, V>& p) const { return v != p.v; }
    IteratorG& operator++() { if (v) v = v->next; return *this; }
    IteratorG& operator--() { if (v) v = v->prev; return *this; }

    DNodeG<K, V>* getNode() const { return v; } // Accessor for node
    bool isValid() const { return v != nullptr; }

private:
    DNodeG<K, V>* v;
};

#endif // ITERATORG_H_
