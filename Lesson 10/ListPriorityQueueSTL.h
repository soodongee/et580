#include "NodeListG.h"
#include "PriorityQueueException.h"

template <typename E, typename C, typename R>
class ListPriorityQueueSTL {
public:
    ListPriorityQueueSTL();
    ~ListPriorityQueueSTL();
    int size() const;
    bool isEmpty() const;
    void insert(const E& e);
    const E& min() const;
    void removeMin();

private:
    NodeListG<E> L;
    C isLess;
};


template <typename E, typename C, typename R>
ListPriorityQueueSTL<E, C, R>::ListPriorityQueueSTL() {}

template <typename E, typename C, typename R>
ListPriorityQueueSTL<E, C, R>::~ListPriorityQueueSTL() {}

template <typename E, typename C, typename R>
int ListPriorityQueueSTL<E, C, R>::size() const { return L.size(); }

template <typename E, typename C, typename R>
bool ListPriorityQueueSTL<E, C, R>::isEmpty() const { return L.empty(); }

template <typename E, typename C, typename R>
void ListPriorityQueueSTL<E, C, R>::insert(const E& e) {
    auto p = L.begin();
    while (p != L.end() && !isLess(e, *p)) ++p;
    L.insert(p, e);
}

template <typename E, typename C, typename R>
const E& ListPriorityQueueSTL<E, C, R>::min() const {
    if (L.empty()) {
        std::cout << "min of empty ListPriorityQueueSTL" << std::endl;
    }
    return *L.begin();
}

template <typename E, typename C, typename R>
void ListPriorityQueueSTL<E, C, R>::removeMin() {
    if (L.empty()) {
        std::cout << "Error: The priority queue is empty. Cannot remove the minimum value." << std::endl;
        return;
    }
    L.eraseFront();
}

