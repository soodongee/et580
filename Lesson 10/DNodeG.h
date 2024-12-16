#ifndef DNODEG_H_
#define DNODEG_H_

template <typename T>
class DNodeG {
private:
    T elem;
    DNodeG<T>* next;
    DNodeG<T>* prev;

    template <typename U> friend class NodeListG;
    template <typename U> friend class IteratorG;
};

#endif
