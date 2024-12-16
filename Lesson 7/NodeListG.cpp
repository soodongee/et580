#include "NodeListG.h"

template <typename D>
NodeListG<D>::NodeListG() : n(0), head(new DNode<D>), trailer(new DNode<D>) {
    head->next = trailer;
    trailer->prev = head;
}

template <typename D>
NodeListG<D>::~NodeListG() {
   while(!empty()) erase(begin());
}


template <typename D>
int NodeListG<D>::size() const {
    return n;
}

template <typename D>
bool NodeListG<D>::empty() const {
    return n == 0;
}

template <typename D>
Iterator<D> NodeListG<D>::begin() const {
    return Iterator<D>(head->next);
}

template <typename D>
Iterator<D> NodeListG<D>::end() const {
    return Iterator<D>(trailer);
}

template <typename D>
void NodeListG<D>::insertFront(const D& e) {
    insert(begin(), e);
}

template <typename D>
void NodeListG<D>::insertBack(const D& e) {
    insert(end(), e);
}

template <typename D>
void NodeListG<D>::insert(const Iterator<D>& p, const D& e) {
    DNode<D>* newNode = new DNode<D>(e);
    DNode<D>* w = p.u;
    DNode<D>* prev = w->prev;
    prev->next = newNode;
    newNode->prev = prev;
    newNode->next = w;
    w->prev = newNode;
    n++;
}

template <typename D>
void NodeListG<D>::eraseFront() {
    erase(begin());
}

template <typename D>
void NodeListG<D>::eraseBack() {
    erase(--end());
}

template <typename D>
void NodeListG<D>::erase(const Iterator<D>& p) {
    DNode<D>* w = p.u;
    DNode<D>* prev = w->prev;
    DNode<D>* next = w->next;
    prev->next = next;
    next->prev = prev;
    delete w;
    n--;
}


template class NodeListG<int>;
