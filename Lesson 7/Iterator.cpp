#include "Iterator.h"

template <typename D>
D& Iterator<D>::operator*() {
    return u->data;
}

template <typename D>
bool Iterator<D>::operator==(const Iterator& p) const {
    return u == p.u;
}

template <typename D>
bool Iterator<D>::operator!=(const Iterator& p) const {
    return u != p.u;
}

template <typename D>
Iterator<D>& Iterator<D>::operator++() {
    u = u->next;
    return *this;
}

template <typename D>
Iterator<D>& Iterator<D>::operator--() {
    u = u->prev;
    return *this;
}

template class Iterator<int>;
