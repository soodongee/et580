#include "DNodeG.h"
#include "IteratorG.h"

template <typename T>
class NodeListG {
  public:
    NodeListG();
    ~NodeListG();
    int size() const;
    bool empty() const;
    IteratorG<T> begin() const;
    IteratorG<T> end() const;
    void insertFront(const T& e);
    void insertBack(const T& e);
    void insert(const IteratorG<T>& p, const T& e);
    void eraseFront();
    void eraseBack();
    void erase(const IteratorG<T>& p);
    void print() const;

  private:
    int n;
    DNodeG<T>* header;
    DNodeG<T>* trailer;
};


template <typename T>
NodeListG<T>::NodeListG() {
    n = 0;
    header = new DNodeG<T>;
    trailer = new DNodeG<T>;
    header->next = trailer;
    trailer->prev = header;
}

template <typename T>
NodeListG<T>::~NodeListG() {
    while (!empty()) eraseFront();
    delete header;
    delete trailer;
}

template <typename T>
int NodeListG<T>::size() const { return n; }

template <typename T>
bool NodeListG<T>::empty() const { return n == 0; }

template <typename T>
IteratorG<T> NodeListG<T>::begin() const { return IteratorG<T>(header->next); }

template <typename T>
IteratorG<T> NodeListG<T>::end() const { return IteratorG<T>(trailer); }

template <typename T>
void NodeListG<T>::insertFront(const T& e) { insert(begin(), e); }

template <typename T>
void NodeListG<T>::insertBack(const T& e) { insert(end(), e); }

template <typename T>
void NodeListG<T>::insert(const IteratorG<T>& p, const T& e) {
    DNodeG<T>* w = p.v;
    DNodeG<T>* u = w->prev;
    DNodeG<T>* v = new DNodeG<T>;
    v->elem = e;
    v->next = w;
    w->prev = v;
    v->prev = u;
    u->next = v;
    n++;
}

template <typename T>
void NodeListG<T>::eraseFront() { erase(begin()); }

template <typename T>
void NodeListG<T>::eraseBack() { erase(--end()); }

template <typename T>
void NodeListG<T>::erase(const IteratorG<T>& p) {
    DNodeG<T>* v = p.v;
    DNodeG<T>* w = v->next;
    DNodeG<T>* u = v->prev;
    u->next = w;
    w->prev = u;
    delete v;
    n--;
}

template <typename T>
void NodeListG<T>::print() const {
    IteratorG<T> p = begin();
    while (p != end()) {
        std::cout << *p << " <=> ";
        ++p;
    }
    std::cout << "NULL" << std::endl;
}
